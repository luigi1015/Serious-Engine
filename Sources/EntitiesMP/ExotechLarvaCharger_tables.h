/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#define ENTITYCLASS CExotechLarvaCharger

CEntityProperty CExotechLarvaCharger_properties[] = {
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x0000015f<<8)+1, offsetof(CExotechLarvaCharger, m_bActive), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x0000015f<<8)+2, offsetof(CExotechLarvaCharger, m_bBeamActive), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000015f<<8)+3, offsetof(CExotechLarvaCharger, m_fStretch), "Stretch", 'S', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x0000015f<<8)+7, offsetof(CExotechLarvaCharger, m_strName), "Name", 'N', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x0000015f<<8)+8, offsetof(CExotechLarvaCharger, m_rSound), "Sound Range", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x0000015f<<8)+10, offsetof(CExotechLarvaCharger, m_penBattery01), "Wall Battery 01", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x0000015f<<8)+11, offsetof(CExotechLarvaCharger, m_penBattery02), "Wall Battery 02", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x0000015f<<8)+12, offsetof(CExotechLarvaCharger, m_penBattery03), "Wall Battery 03", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x0000015f<<8)+13, offsetof(CExotechLarvaCharger, m_penBattery04), "Wall Battery 04", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x0000015f<<8)+14, offsetof(CExotechLarvaCharger, m_penBattery05), "Wall Battery 05", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x0000015f<<8)+15, offsetof(CExotechLarvaCharger, m_penBattery06), "Wall Battery 06", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x0000015f<<8)+20, offsetof(CExotechLarvaCharger, m_bCustomShading), "Custom Shading", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE3D, NULL, (0x0000015f<<8)+21, offsetof(CExotechLarvaCharger, m_aShadingDirection), "Light direction", 'D', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x0000015f<<8)+22, offsetof(CExotechLarvaCharger, m_colLight), "Light Color", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x0000015f<<8)+23, offsetof(CExotechLarvaCharger, m_colAmbient), "Ambient Light Color", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x0000015f<<8)+50, offsetof(CExotechLarvaCharger, m_soSound), "", 0, 0, 0),
};
#define CExotechLarvaCharger_propertiesct ARRAYCOUNT(CExotechLarvaCharger_properties)

CEntityComponent CExotechLarvaCharger_components[] = {
#define CLASS_BASIC_EFFECT ((0x0000015f<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define CLASS_BLOOD_SPRAY ((0x0000015f<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_BLOOD_SPRAY, "EFNM" "Classes\\BloodSpray.ecl"),
#define MODEL_CHARGER ((0x0000015f<<8)+5)
 CEntityComponent(ECT_MODEL, MODEL_CHARGER, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Charger\\FloorCharger.mdl"),
#define TEXTURE_CHARGER ((0x0000015f<<8)+6)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CHARGER, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Charger\\FloorCharger.tex"),
#define MODEL_BEAM ((0x0000015f<<8)+7)
 CEntityComponent(ECT_MODEL, MODEL_BEAM, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Charger\\Beam.mdl"),
#define TEXTURE_BEAM ((0x0000015f<<8)+8)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BEAM, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Charger\\Beam.tex"),
#define MODEL_ELECTRICITY ((0x0000015f<<8)+9)
 CEntityComponent(ECT_MODEL, MODEL_ELECTRICITY, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Charger\\ElectricityBeams.mdl"),
#define TEXTURE_ELECTRICITY ((0x0000015f<<8)+10)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ELECTRICITY, "EFNM" "ModelsMP\\Effects\\Laser\\Laser_Red.tex"),
#define SOUND_HUM ((0x0000015f<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_HUM, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Charger\\Sounds\\FloorChargerHum.wav"),
#define SOUND_SHUTDOWN ((0x0000015f<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_SHUTDOWN, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Charger\\Sounds\\FloorChargerShutdown.wav"),
};
#define CExotechLarvaCharger_componentsct ARRAYCOUNT(CExotechLarvaCharger_components)

CEventHandlerEntry CExotechLarvaCharger_handlers[] = {
 {0x015f0001, -1, CEntity::pEventHandler(&CExotechLarvaCharger::
#line 165 "D:/SE1_GPL/Sources/EntitiesMP/ExotechLarvaCharger.es"
ActivateBeam),DEBUGSTRING("CExotechLarvaCharger::ActivateBeam")},
 {0x015f0002, -1, CEntity::pEventHandler(&CExotechLarvaCharger::
#line 174 "D:/SE1_GPL/Sources/EntitiesMP/ExotechLarvaCharger.es"
DeactivateBeam),DEBUGSTRING("CExotechLarvaCharger::DeactivateBeam")},
 {1, -1, CEntity::pEventHandler(&CExotechLarvaCharger::
#line 181 "D:/SE1_GPL/Sources/EntitiesMP/ExotechLarvaCharger.es"
Main),DEBUGSTRING("CExotechLarvaCharger::Main")},
 {0x015f0003, -1, CEntity::pEventHandler(&CExotechLarvaCharger::H0x015f0003_Main_01), DEBUGSTRING("CExotechLarvaCharger::H0x015f0003_Main_01")},
 {0x015f0004, -1, CEntity::pEventHandler(&CExotechLarvaCharger::H0x015f0004_Main_02), DEBUGSTRING("CExotechLarvaCharger::H0x015f0004_Main_02")},
 {0x015f0005, -1, CEntity::pEventHandler(&CExotechLarvaCharger::H0x015f0005_Main_03), DEBUGSTRING("CExotechLarvaCharger::H0x015f0005_Main_03")},
 {0x015f0006, -1, CEntity::pEventHandler(&CExotechLarvaCharger::H0x015f0006_Main_04), DEBUGSTRING("CExotechLarvaCharger::H0x015f0006_Main_04")},
 {0x015f0007, -1, CEntity::pEventHandler(&CExotechLarvaCharger::H0x015f0007_Main_05), DEBUGSTRING("CExotechLarvaCharger::H0x015f0007_Main_05")},
 {0x015f0008, -1, CEntity::pEventHandler(&CExotechLarvaCharger::H0x015f0008_Main_06), DEBUGSTRING("CExotechLarvaCharger::H0x015f0008_Main_06")},
 {0x015f0009, -1, CEntity::pEventHandler(&CExotechLarvaCharger::H0x015f0009_Main_07), DEBUGSTRING("CExotechLarvaCharger::H0x015f0009_Main_07")},
 {0x015f000a, -1, CEntity::pEventHandler(&CExotechLarvaCharger::H0x015f000a_Main_08), DEBUGSTRING("CExotechLarvaCharger::H0x015f000a_Main_08")},
};
#define CExotechLarvaCharger_handlersct ARRAYCOUNT(CExotechLarvaCharger_handlers)

CEntity *CExotechLarvaCharger_New(void) { return new CExotechLarvaCharger; };
void CExotechLarvaCharger_OnInitClass(void) {};
void CExotechLarvaCharger_OnEndClass(void) {};
void CExotechLarvaCharger_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CExotechLarvaCharger_OnWorldEnd(CWorld *pwo) {};
void CExotechLarvaCharger_OnWorldInit(CWorld *pwo) {};
void CExotechLarvaCharger_OnWorldTick(CWorld *pwo) {};
void CExotechLarvaCharger_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CExotechLarvaCharger, CRationalEntity, "ExotechLarvaCharger", "Thumbnails\\ExotechLarvaCharger.tbn", 0x0000015f);
DECLARE_CTFILENAME(_fnmCExotechLarvaCharger_tbn, "Thumbnails\\ExotechLarvaCharger.tbn");
