#include "stub/misc.h"
#include "util/misc.h"
#include "util/scope.h"


/* duplicate definition is fine; fixes linker errors */
ConVar r_visualizetraces( "r_visualizetraces", "0", FCVAR_CHEAT );


/* some vprof-related code needs these to be defined... so we'll pretend to define them here */
CL2Cache::CL2Cache()  { assert(false); }
CL2Cache::~CL2Cache() { assert(false); }


static StaticFuncThunk<CRConClient&> ft_RCONClient("[client] RCONClient");
CRConClient& RCONClient() { return ft_RCONClient(); }


StaticFuncThunk<void, const Vector&, trace_t&, const Vector&, const Vector&, CBaseEntity *> ft_FindHullIntersection("FindHullIntersection");


StaticFuncThunk<int>           ft_UTIL_GetCommandClientIndex       ("UTIL_GetCommandClientIndex");
StaticFuncThunk<CBasePlayer *> ft_UTIL_GetCommandClient            ("UTIL_GetCommandClient");
StaticFuncThunk<bool>          ft_UTIL_IsCommandIssuedByServerAdmin("UTIL_IsCommandIssuedByServerAdmin");


MemberFuncThunk<      CMapListManager *, void>              CMapListManager::ft_RefreshList("CMapListManager::RefreshList");
MemberFuncThunk<const CMapListManager *, int>               CMapListManager::ft_GetMapCount("CMapListManager::GetMapCount");
MemberFuncThunk<const CMapListManager *, int, int>          CMapListManager::ft_IsMapValid ("CMapListManager::IsMapValid");
MemberFuncThunk<const CMapListManager *, const char *, int> CMapListManager::ft_GetMapName ("CMapListManager::GetMapName");

GlobalThunk<CMapListManager> g_MapListMgr("g_MapListMgr");


#if 0
StaticFuncThunk<const char *, const char *, int> TranslateWeaponEntForClass("TranslateWeaponEntForClass");
//const char *TranslateWeaponEntForClass(const char *name, int classnum) { return ft_TranslateWeaponEntForClass(name, classnum); }
#endif


static MemberFuncThunk<CTakeDamageInfo *, void, CBaseEntity *, CBaseEntity *, CBaseEntity *, const Vector&, const Vector&, float, int, int, Vector *> ft_CTakeDamageInfo_ctor5("CTakeDamageInfo::CTakeDamageInfo [C1 | overload 5]");
CTakeDamageInfo::CTakeDamageInfo(CBaseEntity *pInflictor, CBaseEntity *pAttacker, CBaseEntity *pWeapon, const Vector& damageForce, const Vector& damagePosition, float flDamage, int bitsDamageType, int iKillType, Vector *reportedPosition)
{
	ft_CTakeDamageInfo_ctor5(this, pInflictor, pAttacker, pWeapon, damageForce, damagePosition, flDamage, bitsDamageType, iKillType, reportedPosition);
}

CTakeDamageInfo::CTakeDamageInfo()
{
	ft_CTakeDamageInfo_ctor5(this, nullptr, nullptr, nullptr, vec3_origin, vec3_origin, 0, 0, 0, nullptr);
}

static MemberFuncThunk<CTraceFilterSimple *, void, const IHandleEntity *, int, ShouldHitFunc_t> ft_CTraceFilterSimple_ctor("CTraceFilterSimple::CTraceFilterSimple [C1]");
CTraceFilterSimple::CTraceFilterSimple(const IHandleEntity *passedict, int collisionGroup, ShouldHitFunc_t pExtraShouldHitFunc)
{
	ft_CTraceFilterSimple_ctor(this, passedict, collisionGroup, pExtraShouldHitFunc);
}


static MemberFuncThunk<const CStudioHdr *, int> ft_CStudioHdr_GetNumPoseParameters("CStudioHdr::GetNumPoseParameters");
int CStudioHdr::GetNumPoseParameters() const { return ft_CStudioHdr_GetNumPoseParameters(this); }

static MemberFuncThunk<CStudioHdr *, const mstudioposeparamdesc_t&, int> ft_CStudioHdr_pPoseParameter("CStudioHdr::pPoseParameter");
const mstudioposeparamdesc_t& CStudioHdr::pPoseParameter(int i) { return ft_CStudioHdr_pPoseParameter(this, i); }

static StaticFuncThunk<IGameSystem *> ft_GameStringSystem("GameStringSystem");
IGameSystem *GameStringSystem() { return ft_GameStringSystem(); }


static StaticFuncThunk<const char *, uint64> ft_CSteamID_Render_static("CSteamID::Render [static]");
const char *CSteamID::Render(uint64 ulSteamID) { return ft_CSteamID_Render_static(ulSteamID); }

static MemberFuncThunk<const CSteamID *, const char *> ft_CSteamID_Render_member("CSteamID::Render [member]");
const char *CSteamID::Render() const { return ft_CSteamID_Render_member(this); }

static StaticFuncThunk<void, const char *> ft_PrecacheParticleSystem("PrecacheParticleSystem");
void PrecacheParticleSystem(const char *name) { ft_PrecacheParticleSystem(name); }

static StaticFuncThunk<bool, CRC32_t *, const char *> ft_CRC_File("CRC_File");
bool CRC_File(CRC32_t *crcvalue, const char *pszFileName) { return ft_CRC_File(crcvalue, pszFileName); }

static StaticFuncThunk<void, CBasePlayer *, const hudtextparms_t &, const char *> ft_UTIL_HudMessage("UTIL_HudMessage");
void UTIL_HudMessage(CBasePlayer *player, const hudtextparms_t & params, const char *message) { ft_UTIL_HudMessage(player, params, message); }

static StaticFuncThunk<void, CGameTrace *, int> ft_UTIL_PlayerDecalTrace("UTIL_PlayerDecalTrace");
void UTIL_PlayerDecalTrace(CGameTrace *tr, int playerid) { ft_UTIL_PlayerDecalTrace(tr, playerid); }

static StaticFuncThunk<void, const char *, const Vector &, const Vector &, int, int, bool> ft_UTIL_ParticleTracer("UTIL_ParticleTracer");
void UTIL_ParticleTracer(const char *pszTracerEffectName, const Vector &vecStart, const Vector &vecEnd, 
	int iEntIndex, int iAttachment, bool bWhiz) 
{
	ft_UTIL_ParticleTracer(pszTracerEffectName, vecStart, vecEnd, iEntIndex, iAttachment, bWhiz);
}

static StaticFuncThunk<void, IRecipientFilter &, float, const Vector *, int, int> ft_TE_PlayerDecal("TE_PlayerDecal");
void TE_PlayerDecal(IRecipientFilter& filter, float delay, const Vector* pos, int player, int entity) { ft_TE_PlayerDecal(filter, delay, pos, player, entity); }

static MemberFuncThunk<variant_t*, void, fieldtype_t, void *> ft_VariantSet("variant_t::Set");
void variant_t::Set(fieldtype_t type, void *data) { 
	if (type == FIELD_CUSTOM) {
		iVal = *(int *)data;
		fieldType = FIELD_CUSTOM;
		return;
	}
	ft_VariantSet(this, type, data);
}

static MemberFuncThunk<variant_t*, void, void *> ft_VariantSetOther("variant_t::SetOther");
void variant_t::SetOther(void *data) { 
	
	if (this->fieldType == FIELD_CUSTOM) {
		*((int *)data) = iVal;
		return;
	}

	ft_VariantSetOther(this, data);
}

void variant_t::SetEntity( CBaseEntity *val ) 
{ 
	eVal = val;
	fieldType = FIELD_EHANDLE; 
}

static MemberFuncThunk<variant_t*, bool, fieldtype_t> ft_VariantConvert("variant_t::Convert");
bool variant_t::Convert(fieldtype_t newType) {
	if (newType == this->fieldType) {
		return true;
	}
	if (newType == FIELD_VOID) {
		this->fieldType = FIELD_VOID;
		return true;
	}
	else if (newType == FIELD_INPUT) {
		return true;
	}

	switch (fieldType) {
		case FIELD_INTEGER: case FIELD_CHARACTER: case FIELD_SHORT: case FIELD_COLOR32: {
			switch ( newType ) {
				case FIELD_FLOAT: SetFloat( (float) iVal ); return true;
				case FIELD_CHARACTER: case FIELD_SHORT: case FIELD_INTEGER: case FIELD_COLOR32: fieldType = newType; return true;
				case FIELD_BOOLEAN: SetBool( iVal != 0 ); return true;
				case FIELD_EHANDLE: case FIELD_CLASSPTR: {
					
					CBaseEntity *ent = nullptr;
					if ( iszVal != NULL_STRING ) {
						ent = CHandle<CBaseEntity>::UnsafeFromIndex(iVal);
					}
					SetEntity(ent);
					fieldType = newType;
					return true;
				}
			}
			break;
		}

		case FIELD_FLOAT: {
			switch ( newType ) {
				case FIELD_INTEGER: SetInt( (int) flVal ); return true;
				case FIELD_CHARACTER: SetInt( (int) flVal); fieldType = FIELD_CHARACTER; return true;
				case FIELD_SHORT: SetInt( (int) flVal); fieldType = FIELD_SHORT; return true;
				case FIELD_COLOR32: SetInt( (int)flVal ); fieldType = FIELD_COLOR32; return true;
				case FIELD_BOOLEAN: SetBool( flVal != 0 ); return true;
			}
			break;
		}

		case FIELD_VECTOR: case FIELD_POSITION_VECTOR: {
			switch ( newType ) {
				case FIELD_POSITION_VECTOR: case FIELD_VECTOR: fieldType = newType; return true;
			}
			break;
		}

		//
		// Everyone must convert from FIELD_STRING if possible, since
		// parameter overrides are always passed as strings.
		//
		case FIELD_STRING: {
			switch ( newType ) {
				case FIELD_INTEGER: SetInt(iszVal != NULL_STRING ? ParseToInt(STRING(iszVal)) : 0); return true;
				case FIELD_FLOAT: SetFloat(iszVal != NULL_STRING ? ParseToFloat(STRING(iszVal)) : 0); return true;
				case FIELD_BOOLEAN: SetBool(iszVal != NULL_STRING && ParseToInt(STRING(iszVal)) != 0); return true;
				case FIELD_CHARACTER: SetInt(iszVal != NULL_STRING ? ParseToInt(STRING(iszVal)) : 0); return true;
				case FIELD_POSITION_VECTOR: case FIELD_VECTOR: {
					Vector tmpVec = vec3_origin;
					if (iszVal != NULL_STRING) {
						UTIL_StringToVectorAlt(tmpVec, STRING(iszVal));
					}
					SetVector3D(tmpVec);
					fieldType = newType;
					return true;
				}

				case FIELD_COLOR32: {
					uint nRed = 0;
					int nGreen = 0;
					int nBlue = 0;
					int nAlpha = 255;

					int result = sscanf(STRING(iszVal), "%u %d %d %d", &nRed, &nGreen, &nBlue, &nAlpha);
					if (result > 1 || nRed <= 255) {
						SetColor32( nRed, nGreen, nBlue, nAlpha );
					}
					// Raw integer value was probably entered
					else {
						this->iVal = (int) nRed;
						this->fieldType = FIELD_COLOR32;
					}
					return true;
				}

				case FIELD_EHANDLE: case FIELD_CLASSPTR: {
					CBaseEntity *ent = nullptr;
					if ( iszVal != NULL_STRING ) {
						ent = servertools->FindEntityByName(nullptr, STRING(iszVal));
					}
					SetEntity(ent);
					fieldType = newType;
					return true;
				}
			}
		
			break;
		}
		case FIELD_VOID: {
			switch ( newType ) {
				case FIELD_CLASSPTR: case FIELD_EHANDLE: {
					SetEntity(nullptr); 
					fieldType = newType; 
					return true;
				}
				break;
			}
		}
		case FIELD_EHANDLE: case FIELD_CLASSPTR: {
			switch ( newType ) {
				case FIELD_CLASSPTR: case FIELD_EHANDLE: fieldType = newType; return true;

				case FIELD_STRING: {
					// take the entities targetname as the string
					string_t iszStr = NULL_STRING;
					if ( eVal != nullptr ) {
						SetString( eVal->GetEntityName() );
					}
					return true;
				}

				case FIELD_INTEGER: {
					// take the entities targetname as the string
					if ( eVal != nullptr ) {
						SetInt( eVal.ToInt() );
					}
					return true;
				}
			}
			break;
		}
	}
	return false;
}

#ifdef SE_IS_TF2
void CTakeDamageInfo::SetCritType(CTakeDamageInfo::ECritType type) 
{ 
	this->m_eCritType = type;
}
#endif

static StaticFuncThunk<void, float *, const char *> ft_UTIL_StringToVector("UTIL_StringToVector");
void UTIL_StringToVector(float *base, const char *string) {ft_UTIL_StringToVector(base, string); }

GlobalThunk<CEventQueue> g_EventQueue("g_EventQueue");

MemberFuncThunk< CEventQueue*, void, const char*,const char *, variant_t, float, CBaseEntity *, CBaseEntity *, int>   CEventQueue::ft_AddEvent("CEventQueue::AddEvent");
MemberFuncThunk< CEventQueue*, void, CBaseEntity *>   CEventQueue::ft_CancelEvents("CEventQueue::CancelEvents");

void PrintToChatAll(const char *str)
{
	int msg_type = usermessages->LookupUserMessage("SayText2");
	if (msg_type == -1) return;
	
	CReliableBroadcastRecipientFilter filter;
	
	bf_write *msg = engine->UserMessageBegin(&filter, msg_type);
	if (msg == nullptr) return;
	
	msg->WriteByte(0x00);
	msg->WriteByte(0x00);
	msg->WriteString(str);
	
	engine->MessageEnd();
}

void PrintToChat(const char *str, CBasePlayer *player)
{
	int msg_type = usermessages->LookupUserMessage("SayText2");
	if (msg_type == -1) return;
	
	CRecipientFilter filter;
	filter.AddRecipient(player);
	filter.MakeReliable();

	bf_write *msg = engine->UserMessageBegin(&filter, msg_type);
	if (msg == nullptr) return;
	
	msg->WriteByte(0x00);
	msg->WriteByte(0x00);
	msg->WriteString(str);
	
	engine->MessageEnd();
}

const char *FormatTextForPlayerSM_VA(CBasePlayer *player, int paramCount, const char *fmt, va_list arglist, const char *param0 = nullptr)
{
	static char buf[1024];
	void *params[MAX_TRANSLATE_PARAMS];
	params[0] = (void *)param0;
	for (int i = param0 == nullptr ? 0 : 1; i < paramCount; i++) {
		params[i] = va_arg(arglist, void *);
	}
	int oldClient = translator->SetGlobalTarget(ENTINDEX(player));
	size_t size = 0;
	bool success = phrases->FormatString(buf, sizeof(buf), fmt, params,paramCount, &size, nullptr);
	translator->SetGlobalTarget(oldClient);
	if (!success) return fmt;
	return buf;
}

const char *FormatTextForPlayerSM(CBasePlayer *player, int paramCount, const char *fmt, ...)
{
    va_list arglist;
	va_start(arglist, fmt);
	auto value = FormatTextForPlayerSM_VA(player, paramCount, fmt, arglist);
	va_end(arglist);
	return value;
}

void PrintToChatAllSM(int paramCount, const char *fmt,...)
{
	for (int i = 1; i <= gpGlobals->maxClients; i++) {
		auto player = UTIL_PlayerByIndex(i);
		if (player != nullptr && !player->IsBot()) {
			va_list arglist;
			va_start(arglist, fmt);
			PrintToChat(FormatTextForPlayerSM_VA(player,paramCount, fmt, arglist), player);
			va_end(arglist);
		}
	}
}

void PrintToChatSM(CBasePlayer *player, int paramCount, const char *fmt,...)
{
	va_list arglist;
	va_start(arglist, fmt);
	PrintToChat(FormatTextForPlayerSM_VA(player,paramCount, fmt,arglist), player);
	va_end(arglist);
}

const char *TranslateText(CBasePlayer *player, const char *name, int paramCount, ...)
{
	if (paramCount == 0) {
		Translation buf;
		if (phrasesFile->GetTranslation(name, translator->GetClientLanguage(ENTINDEX(player)), &buf) != Trans_Okay) {
			if (phrasesFile->GetTranslation(name, translator->GetServerLanguage(), &buf) != Trans_Okay) {
				return name;
			}
		}
		return buf.szPhrase; 
	}
	va_list arglist;
	va_start(arglist, paramCount);
	auto value = FormatTextForPlayerSM_VA(player,paramCount + 1, "%t",arglist, name);
	va_end(arglist);
	return value;
}

MemberFuncThunk<CSoundEmitterSystemBase *, bool, const char *, KeyValues *, CSoundParametersInternal &> CSoundEmitterSystemBase::ft_InitSoundInternalParameter("CSoundEmitterSystemBase::InitSoundInternalParameters");
MemberFuncThunk<CSoundEmitterSystemBase *, void, const char *, bool, bool, bool>                        CSoundEmitterSystemBase::ft_AddSoundsFromFile("CSoundEmitterSystemBase::AddSoundsFromFile");