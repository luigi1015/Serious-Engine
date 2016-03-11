/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

EP_ENUMBEG(TacticType)
  EP_ENUMVALUE(TCT_NONE, "None"),
  EP_ENUMVALUE(TCT_DAMP_ANGLE_STRIFE, "Damp angle strafe"),
  EP_ENUMVALUE(TCT_PARALLEL_RANDOM_DISTANCE, "Parallel random distance"),
  EP_ENUMVALUE(TCT_STATIC_RANDOM_V_DISTANCE, "Static random V distance"),
EP_ENUMEND(TacticType);

#define ENTITYCLASS CTacticsHolder

CEntityProperty CTacticsHolder_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000eb<<8)+1, offsetof(CTacticsHolder, m_strName), "Name", 'N', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000eb<<8)+2, offsetof(CTacticsHolder, m_strDescription), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &TacticType_enum, (0x000000eb<<8)+10, offsetof(CTacticsHolder, m_tctType), "Type", 'Y', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000eb<<8)+11, offsetof(CTacticsHolder, m_fParam1), "Parameter 1", 'D', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000eb<<8)+12, offsetof(CTacticsHolder, m_fParam2), "Parameter 2", 'F', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000eb<<8)+13, offsetof(CTacticsHolder, m_fParam3), "Parameter 3", 'G', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000eb<<8)+14, offsetof(CTacticsHolder, m_fParam4), "Parameter 4", 'H', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000eb<<8)+15, offsetof(CTacticsHolder, m_fParam5), "Parameter 5", 'J', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000eb<<8)+20, offsetof(CTacticsHolder, m_tmLastActivation), "", 0, 0, 0),
};
#define CTacticsHolder_propertiesct ARRAYCOUNT(CTacticsHolder_properties)

CEntityComponent CTacticsHolder_components[] = {
#define MODEL_MANAGER ((0x000000eb<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MANAGER, "EFNM" "ModelsMP\\Editor\\TacticsHolder.mdl"),
#define TEXTURE_MANAGER ((0x000000eb<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MANAGER, "EFNM" "ModelsMP\\Editor\\TacticsHolder.tex"),
};
#define CTacticsHolder_componentsct ARRAYCOUNT(CTacticsHolder_components)

CEventHandlerEntry CTacticsHolder_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CTacticsHolder::
#line 46 "D:/SE1_GPL/Sources/EntitiesMP/TacticsHolder.es"
Main),DEBUGSTRING("CTacticsHolder::Main")},
 {0x00eb0000, -1, CEntity::pEventHandler(&CTacticsHolder::H0x00eb0000_Main_01), DEBUGSTRING("CTacticsHolder::H0x00eb0000_Main_01")},
 {0x00eb0001, -1, CEntity::pEventHandler(&CTacticsHolder::H0x00eb0001_Main_02), DEBUGSTRING("CTacticsHolder::H0x00eb0001_Main_02")},
 {0x00eb0002, -1, CEntity::pEventHandler(&CTacticsHolder::H0x00eb0002_Main_03), DEBUGSTRING("CTacticsHolder::H0x00eb0002_Main_03")},
 {0x00eb0003, -1, CEntity::pEventHandler(&CTacticsHolder::H0x00eb0003_Main_04), DEBUGSTRING("CTacticsHolder::H0x00eb0003_Main_04")},
 {0x00eb0004, -1, CEntity::pEventHandler(&CTacticsHolder::H0x00eb0004_Main_05), DEBUGSTRING("CTacticsHolder::H0x00eb0004_Main_05")},
 {0x00eb0005, -1, CEntity::pEventHandler(&CTacticsHolder::H0x00eb0005_Main_06), DEBUGSTRING("CTacticsHolder::H0x00eb0005_Main_06")},
};
#define CTacticsHolder_handlersct ARRAYCOUNT(CTacticsHolder_handlers)

CEntity *CTacticsHolder_New(void) { return new CTacticsHolder; };
void CTacticsHolder_OnInitClass(void) {};
void CTacticsHolder_OnEndClass(void) {};
void CTacticsHolder_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CTacticsHolder_OnWorldEnd(CWorld *pwo) {};
void CTacticsHolder_OnWorldInit(CWorld *pwo) {};
void CTacticsHolder_OnWorldTick(CWorld *pwo) {};
void CTacticsHolder_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CTacticsHolder, CRationalEntity, "TacticsHolder", "Thumbnails\\TacticsHolder.tbn", 0x000000eb);
DECLARE_CTFILENAME(_fnmCTacticsHolder_tbn, "Thumbnails\\TacticsHolder.tbn");
