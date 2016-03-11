/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#define ENTITYCLASS CCounter

CEntityProperty CCounter_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000e8<<8)+1, offsetof(CCounter, m_fCountdownSpeed), "Countdown speed", 'S', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000e8<<8)+2, offsetof(CCounter, m_penTarget), "Zero target", 'T', C_WHITE  | 0x80, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000e8<<8)+3, offsetof(CCounter, m_fNumber), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000e8<<8)+4, offsetof(CCounter, m_tmStart), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000e8<<8)+5, offsetof(CCounter, m_strName), "Name", 'N', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x000000e8<<8)+6, offsetof(CCounter, m_soSound), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x000000e8<<8)+7, offsetof(CCounter, m_iCountFrom), "Count start", 'A', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000e8<<8)+10, offsetof(CCounter, m_pen0), "Bit 0", 0, C_RED  | 0x30, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000e8<<8)+11, offsetof(CCounter, m_pen1), "Bit 1", 0, C_RED  | 0x30, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000e8<<8)+12, offsetof(CCounter, m_pen2), "Bit 2", 0, C_RED  | 0x30, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000e8<<8)+13, offsetof(CCounter, m_pen3), "Bit 3", 0, C_RED  | 0x30, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000e8<<8)+14, offsetof(CCounter, m_pen4), "Bit 4", 0, C_RED  | 0x30, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000e8<<8)+15, offsetof(CCounter, m_pen5), "Bit 5", 0, C_RED  | 0x30, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000e8<<8)+16, offsetof(CCounter, m_pen6), "Bit 6", 0, C_RED  | 0x30, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000e8<<8)+17, offsetof(CCounter, m_pen7), "Bit 7", 0, C_RED  | 0x30, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000e8<<8)+18, offsetof(CCounter, m_pen8), "Bit 8", 0, C_RED  | 0x30, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000e8<<8)+19, offsetof(CCounter, m_pen9), "Bit 9", 0, C_RED  | 0x30, 0),
};
#define CCounter_propertiesct ARRAYCOUNT(CCounter_properties)

CEntityComponent CCounter_components[] = {
#define SOUND_TICK ((0x000000e8<<8)+0)
 CEntityComponent(ECT_SOUND, SOUND_TICK, "EFNM" "Sounds\\Menu\\Select.wav"),
#define MODEL_MARKER ((0x000000e8<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\Axis.mdl"),
#define TEXTURE_MARKER ((0x000000e8<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\Vector.tex"),
};
#define CCounter_componentsct ARRAYCOUNT(CCounter_components)

CEventHandlerEntry CCounter_handlers[] = {
 {0x00e80000, -1, CEntity::pEventHandler(&CCounter::
#line 71 "D:/SE1_GPL/Sources/EntitiesMP/Counter.es"
CountDown),DEBUGSTRING("CCounter::CountDown")},
 {0x00e80001, -1, CEntity::pEventHandler(&CCounter::H0x00e80001_CountDown_01), DEBUGSTRING("CCounter::H0x00e80001_CountDown_01")},
 {0x00e80002, -1, CEntity::pEventHandler(&CCounter::H0x00e80002_CountDown_02), DEBUGSTRING("CCounter::H0x00e80002_CountDown_02")},
 {0x00e80003, -1, CEntity::pEventHandler(&CCounter::H0x00e80003_CountDown_03), DEBUGSTRING("CCounter::H0x00e80003_CountDown_03")},
 {0x00e80004, -1, CEntity::pEventHandler(&CCounter::H0x00e80004_CountDown_04), DEBUGSTRING("CCounter::H0x00e80004_CountDown_04")},
 {1, -1, CEntity::pEventHandler(&CCounter::
#line 91 "D:/SE1_GPL/Sources/EntitiesMP/Counter.es"
Main),DEBUGSTRING("CCounter::Main")},
 {0x00e80005, -1, CEntity::pEventHandler(&CCounter::H0x00e80005_Main_01), DEBUGSTRING("CCounter::H0x00e80005_Main_01")},
 {0x00e80006, -1, CEntity::pEventHandler(&CCounter::H0x00e80006_Main_02), DEBUGSTRING("CCounter::H0x00e80006_Main_02")},
 {0x00e80007, -1, CEntity::pEventHandler(&CCounter::H0x00e80007_Main_03), DEBUGSTRING("CCounter::H0x00e80007_Main_03")},
 {0x00e80008, -1, CEntity::pEventHandler(&CCounter::H0x00e80008_Main_04), DEBUGSTRING("CCounter::H0x00e80008_Main_04")},
};
#define CCounter_handlersct ARRAYCOUNT(CCounter_handlers)

CEntity *CCounter_New(void) { return new CCounter; };
void CCounter_OnInitClass(void) {};
void CCounter_OnEndClass(void) {};
void CCounter_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CCounter_OnWorldEnd(CWorld *pwo) {};
void CCounter_OnWorldInit(CWorld *pwo) {};
void CCounter_OnWorldTick(CWorld *pwo) {};
void CCounter_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CCounter, CRationalEntity, "Counter", "Thumbnails\\Counter.tbn", 0x000000e8);
DECLARE_CTFILENAME(_fnmCCounter_tbn, "Thumbnails\\Counter.tbn");
