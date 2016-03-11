/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#define ENTITYCLASS CWorldBase

CEntityProperty CWorldBase_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x00000064<<8)+1, offsetof(CWorldBase, m_strName), "Name", 'N', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x00000064<<8)+3, offsetof(CWorldBase, m_strDescription), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000064<<8)+2, offsetof(CWorldBase, m_bZoning), "Zoning", 'Z', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000064<<8)+4, offsetof(CWorldBase, m_bBackground), "Background", 'B', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000064<<8)+5, offsetof(CWorldBase, m_bAnchored), "Anchored", 'A', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+10, offsetof(CWorldBase, m_penGravity0), "Gravity 0", 'G', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+11, offsetof(CWorldBase, m_penGravity1), "Gravity 1", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+12, offsetof(CWorldBase, m_penGravity2), "Gravity 2", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+13, offsetof(CWorldBase, m_penGravity3), "Gravity 3", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+14, offsetof(CWorldBase, m_penGravity4), "Gravity 4", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+15, offsetof(CWorldBase, m_penGravity5), "Gravity 5", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+16, offsetof(CWorldBase, m_penGravity6), "Gravity 6", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+17, offsetof(CWorldBase, m_penGravity7), "Gravity 7", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+18, offsetof(CWorldBase, m_penGravity8), "Gravity 8", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+19, offsetof(CWorldBase, m_penGravity9), "Gravity 9", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+20, offsetof(CWorldBase, m_penFog0), "Fog 0", 'F', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+21, offsetof(CWorldBase, m_penFog1), "Fog 1", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+22, offsetof(CWorldBase, m_penFog2), "Fog 2", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+23, offsetof(CWorldBase, m_penFog3), "Fog 3", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+24, offsetof(CWorldBase, m_penFog4), "Fog 4", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+25, offsetof(CWorldBase, m_penFog5), "Fog 5", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+26, offsetof(CWorldBase, m_penFog6), "Fog 6", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+27, offsetof(CWorldBase, m_penFog7), "Fog 7", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+28, offsetof(CWorldBase, m_penFog8), "Fog 8", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+29, offsetof(CWorldBase, m_penFog9), "Fog 9", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+30, offsetof(CWorldBase, m_penHaze0), "Haze 0", 'H', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+31, offsetof(CWorldBase, m_penHaze1), "Haze 1", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+32, offsetof(CWorldBase, m_penHaze2), "Haze 2", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+33, offsetof(CWorldBase, m_penHaze3), "Haze 3", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+34, offsetof(CWorldBase, m_penHaze4), "Haze 4", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+40, offsetof(CWorldBase, m_penMirror0), "Mirror 0", 'M', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+41, offsetof(CWorldBase, m_penMirror1), "Mirror 1", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+42, offsetof(CWorldBase, m_penMirror2), "Mirror 2", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+43, offsetof(CWorldBase, m_penMirror3), "Mirror 3", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+44, offsetof(CWorldBase, m_penMirror4), "Mirror 4", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+50, offsetof(CWorldBase, m_penGradient0), "Gradient 0", 'R', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+51, offsetof(CWorldBase, m_penGradient1), "Gradient 1", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+52, offsetof(CWorldBase, m_penGradient2), "Gradient 2", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+53, offsetof(CWorldBase, m_penGradient3), "Gradient 3", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+54, offsetof(CWorldBase, m_penGradient4), "Gradient 4", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+55, offsetof(CWorldBase, m_penGradient5), "Gradient 5", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+56, offsetof(CWorldBase, m_penGradient6), "Gradient 6", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+57, offsetof(CWorldBase, m_penGradient7), "Gradient 7", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+58, offsetof(CWorldBase, m_penGradient8), "Gradient 8", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+59, offsetof(CWorldBase, m_penGradient9), "Gradient 9", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+60, offsetof(CWorldBase, m_penGradient10), "Gradient 10", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+61, offsetof(CWorldBase, m_penGradient11), "Gradient 11", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+62, offsetof(CWorldBase, m_penGradient12), "Gradient 12", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+63, offsetof(CWorldBase, m_penGradient13), "Gradient 13", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+64, offsetof(CWorldBase, m_penGradient14), "Gradient 14", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+65, offsetof(CWorldBase, m_penGradient15), "Gradient 15", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+66, offsetof(CWorldBase, m_penGradient16), "Gradient 16", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+67, offsetof(CWorldBase, m_penGradient17), "Gradient 17", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+68, offsetof(CWorldBase, m_penGradient18), "Gradient 18", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000064<<8)+69, offsetof(CWorldBase, m_penGradient19), "Gradient 19", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLAGS, &ClasificationBits_enum, (0x00000064<<8)+80, offsetof(CWorldBase, m_cbClassificationBits), "Clasification bits", 'C', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLAGS, &VisibilityBits_enum, (0x00000064<<8)+81, offsetof(CWorldBase, m_vbVisibilityBits), "Visibility bits", 'V', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000064<<8)+99, offsetof(CWorldBase, m_fOpacity), "Opacity", 0, 0x7F0000FFUL, 0),
};
#define CWorldBase_propertiesct ARRAYCOUNT(CWorldBase_properties)

CEntityComponent CWorldBase_components[] = {
  CEntityComponent()
};
#define CWorldBase_componentsct 0


CEventHandlerEntry CWorldBase_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CWorldBase::
#line 1322 "D:/SE1_GPL/Sources/EntitiesMP/WorldBase.es"
Main),DEBUGSTRING("CWorldBase::Main")},
};
#define CWorldBase_handlersct ARRAYCOUNT(CWorldBase_handlers)

CEntity *CWorldBase_New(void) { return new CWorldBase; };
void CWorldBase_OnInitClass(void);
void CWorldBase_OnEndClass(void);
void CWorldBase_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CWorldBase_OnWorldEnd(CWorld *pwo) {};
void CWorldBase_OnWorldInit(CWorld *pwo);
void CWorldBase_OnWorldTick(CWorld *pwo) {};
void CWorldBase_OnWorldRender(CWorld *pwo);
ENTITY_CLASSDEFINITION(CWorldBase, CEntity, "WorldBase", "Thumbnails\\WorldBase.tbn", 0x00000064);
DECLARE_CTFILENAME(_fnmCWorldBase_tbn, "Thumbnails\\WorldBase.tbn");
