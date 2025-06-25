#ifndef _INCLUDE_SIGSEGV_UTIL_VALUE_OVERRIDE_H_
#define _INCLUDE_SIGSEGV_UTIL_VALUE_OVERRIDE_H_

#include <stub/gamerules.h> 
#include <util/misc.h> 
#include <util/autolist.h> 

template<typename T>
class IValueOverride
{
public:
    virtual ~IValueOverride() { Reset(); }
    
    bool IsOverridden() const { return this->m_bOverridden; }

    void Reset()
    {
        if (this->m_bOverridden) {
            this->Restore();
            this->m_bOverridden = false;
        }
    }
    void Set(const T& val)
    {
        m_Value = val;
        if (!this->m_bOverridden) {
            this->Backup();
            this->m_bOverridden = true;
        }
        this->SetValue(val);
    }
    T Get() { return this->GetValue(); }
    T GetOriginalValue() { return m_bOverridden ? m_Backup : this->GetValue(); }
    
protected:
    virtual T GetValue() = 0;
    virtual void SetValue(const T& val) = 0;
    
private:
    void Backup()
    {
        this->m_Backup = this->GetValue();
    }
    void Restore()
    {
        // Do not restore the original value if it was changed from some external source
        if (this->GetValue() == m_Value) {
            this->SetValue(this->m_Backup);
        }
    }
    
    bool m_bOverridden = false;
    T m_Backup;
    T m_Value;
};


template<typename T>
class CValueOverride_ConVar : public IValueOverride<T>
{
public:
    CValueOverride_ConVar(const char *name) :
        m_pszConVarName(name) {}

    CValueOverride_ConVar(IConVar *convar) :
        m_pConVar(std::unique_ptr<ConVarRef>(new ConVarRef(convar))) {}

    ~CValueOverride_ConVar() {
        IValueOverride<T>::Reset();
    }

protected:
    virtual T GetValue() override { return ConVar_GetValue<T>(MyConVar()); }
    
    virtual void SetValue(const T& val) override
    {
        /* set the ConVar value in a manner that circumvents:
            * - FCVAR_NOTIFY notifications
            * - minimum value limits
            * - maximum value limits
            */
        
        int old_flags   = MyConVar().Ref_Flags();
        bool old_hasmin = MyConVar().Ref_HasMin();
        bool old_hasmax = MyConVar().Ref_HasMax();
        
        MyConVar().Ref_Flags() &= ~FCVAR_NOTIFY;
        MyConVar().Ref_HasMin() = false;
        MyConVar().Ref_HasMax() = false;
        
        ConVar_SetValue<T>(MyConVar(), val);
        
        MyConVar().Ref_Flags()  = old_flags;
        MyConVar().Ref_HasMin() = old_hasmin;
        MyConVar().Ref_HasMax() = old_hasmax;
    }
    
protected:
    ConVarRef& MyConVar()
    {
        if (this->m_pConVar == nullptr) {
            this->m_pConVar = std::unique_ptr<ConVarRef>(new ConVarRef(this->m_pszConVarName));
        }
        return *(this->m_pConVar);
    }
private:
    
    const char *m_pszConVarName;
    std::unique_ptr<ConVarRef> m_pConVar;
};

template<typename T>
class CValueOverride_ConVar_Direct : public CValueOverride_ConVar<T>
{
public:
    CValueOverride_ConVar_Direct(const char *name) :
        CValueOverride_ConVar<T>(name) {}

    CValueOverride_ConVar_Direct(IConVar *convar) :
        CValueOverride_ConVar<T>(convar) {}

    ~CValueOverride_ConVar_Direct() {
        IValueOverride<T>::Reset();
    }

protected:
    using CValueOverride_ConVar<T>::MyConVar;
    virtual void SetValue(const T& val) override
    {
        /* Directly set convar value. Does not trigger any convar change callbacks. */
        ConVar_SetValueDirect<float>(MyConVar(), val);
        ConVar_SetValueDirect<int>(MyConVar(), val);
    }
};

#define CONVAR_OVERRIDE(name, type, value) static ConVarRef name##cv(#name); CValueOverride_ConVar<type> name(name##cv.GetLinkedConVar()); name.SetValue(value);


#ifdef SE_IS_TF2

// TODO: fix problems related to client-side convar tf_medieval_thirdperson:
// - players start out in first person, until they taunt or respawn or whatever
// - players do not get forced back into first person upon popfile switch if the new pop doesn't have this enabled
// see: firstperson/thirdperson client-side concommands are FCVAR_SERVER_CAN_EXECUTE in TF2; might be a solution
//      static ConCommand thirdperson( "thirdperson", ::CAM_ToThirdPerson, "Switch to thirdperson camera.", FCVAR_CHEAT | FCVAR_SERVER_CAN_EXECUTE );
//      static ConCommand firstperson( "firstperson", ::CAM_ToFirstPerson, "Switch to firstperson camera.", FCVAR_SERVER_CAN_EXECUTE );
// also: just generally look at SetAppropriateCamera in the client DLL
struct CValueOverride_MedievalMode : public IValueOverride<bool>
{
    virtual bool GetValue() override                { return TFGameRules()->IsInMedievalMode(); }
    virtual void SetValue(const bool& val) override { TFGameRules()->Set_m_bPlayingMedieval(val); }
};

class CValueOverride_CustomUpgradesFile : public IValueOverride<std::string>
{
protected:
    virtual std::string GetValue() override
    {
        std::string val = TFGameRules()->GetCustomUpgradesFile();
        
        if (val == "") {
            val = "scripts/items/mvm_upgrades.txt";
        }
        
        return val;
    }
    
    virtual void SetValue(const std::string& val) override
    {
        std::string real_val = val;
        
        if (real_val == "") {
            real_val = "scripts/items/mvm_upgrades.txt";
        }
        
        if (this->GetValue() != real_val) {
            ConColorMsg(Color(0x00, 0xff, 0xff, 0xff), "CPopOverride_CustomUpgradesFile: SetCustomUpgradesFile(\"%s\")\n", real_val.c_str());
            TFGameRules()->SetCustomUpgradesFile(real_val.c_str());
        }
    }
};
#endif

#endif