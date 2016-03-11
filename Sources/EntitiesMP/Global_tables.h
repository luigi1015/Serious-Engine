/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

EP_ENUMBEG(BoolEType)
  EP_ENUMVALUE(BET_TRUE, "True"),
  EP_ENUMVALUE(BET_FALSE, "False"),
  EP_ENUMVALUE(BET_IGNORE, "Ignore"),
EP_ENUMEND(BoolEType);

EP_ENUMBEG(EventEType)
  EP_ENUMVALUE(EET_START, "Start event"),
  EP_ENUMVALUE(EET_STOP, "Stop event"),
  EP_ENUMVALUE(EET_TRIGGER, "Trigger event"),
  EP_ENUMVALUE(EET_IGNORE, "Don't send event"),
  EP_ENUMVALUE(EET_ACTIVATE, "Activate event"),
  EP_ENUMVALUE(EET_DEACTIVATE, "Deactivate event"),
  EP_ENUMVALUE(EET_ENVIRONMENTSTART, "Start environment event"),
  EP_ENUMVALUE(EET_ENVIRONMENTSTOP, "Stop environment event"),
  EP_ENUMVALUE(EET_STARTATTACK, "OBSOLETE! - Start attack event"),
  EP_ENUMVALUE(EET_STOPATTACK, "OBSOLETE! - Stop attack event"),
  EP_ENUMVALUE(EET_STOPBLINDNESS, "Stop blindness event"),
  EP_ENUMVALUE(EET_STOPDEAFNESS, "Stop deafness event"),
  EP_ENUMVALUE(EET_TELEPORTMOVINGBRUSH, "Teleport moving brush"),
EP_ENUMEND(EventEType);

EP_ENUMBEG(EntityInfoBodyType)
  EP_ENUMVALUE(EIBT_FLESH, "Flesh"),
  EP_ENUMVALUE(EIBT_WATER, "Water"),
  EP_ENUMVALUE(EIBT_ROCK, "Rock "),
  EP_ENUMVALUE(EIBT_FIRE, "Fire "),
  EP_ENUMVALUE(EIBT_AIR, "Air  "),
  EP_ENUMVALUE(EIBT_BONES, "Bones"),
  EP_ENUMVALUE(EIBT_WOOD, "Wood "),
  EP_ENUMVALUE(EIBT_METAL, "Metal"),
  EP_ENUMVALUE(EIBT_ROBOT, "Robot"),
  EP_ENUMVALUE(EIBT_ICE, "Ice"),
EP_ENUMEND(EntityInfoBodyType);

EP_ENUMBEG(MessageSound)
  EP_ENUMVALUE(MSS_NONE, "None"),
  EP_ENUMVALUE(MSS_INFO, "Info"),
EP_ENUMEND(MessageSound);

EP_ENUMBEG(ParticleTexture)
  EP_ENUMVALUE(PT_STAR01, "Star01"),
  EP_ENUMVALUE(PT_STAR02, "Star02"),
  EP_ENUMVALUE(PT_STAR03, "Star03"),
  EP_ENUMVALUE(PT_STAR04, "Star04"),
  EP_ENUMVALUE(PT_STAR05, "Star05"),
  EP_ENUMVALUE(PT_STAR06, "Star06"),
  EP_ENUMVALUE(PT_STAR07, "Star07"),
  EP_ENUMVALUE(PT_STAR08, "Star08"),
  EP_ENUMVALUE(PT_BOUBBLE01, "Boubble01"),
  EP_ENUMVALUE(PT_BOUBBLE02, "Boubble02"),
  EP_ENUMVALUE(PT_WATER01, "Water01"),
  EP_ENUMVALUE(PT_WATER02, "Water02"),
  EP_ENUMVALUE(PT_SANDFLOW, "Sand flow"),
  EP_ENUMVALUE(PT_WATERFLOW, "Water flow"),
  EP_ENUMVALUE(PT_LAVAFLOW, "Lava flow"),
EP_ENUMEND(ParticleTexture);

EP_ENUMBEG(SoundType)
  EP_ENUMVALUE(SNDT_NONE, ""),
  EP_ENUMVALUE(SNDT_SHOUT, ""),
  EP_ENUMVALUE(SNDT_YELL, ""),
  EP_ENUMVALUE(SNDT_EXPLOSION, ""),
  EP_ENUMVALUE(SNDT_PLAYER, ""),
EP_ENUMEND(SoundType);

EP_ENUMBEG(BulletHitType)
  EP_ENUMVALUE(BHT_NONE, ""),
  EP_ENUMVALUE(BHT_FLESH, ""),
  EP_ENUMVALUE(BHT_BRUSH_STONE, ""),
  EP_ENUMVALUE(BHT_BRUSH_SAND, ""),
  EP_ENUMVALUE(BHT_BRUSH_WATER, ""),
  EP_ENUMVALUE(BHT_BRUSH_UNDER_WATER, ""),
  EP_ENUMVALUE(BHT_ACID, ""),
  EP_ENUMVALUE(BHT_BRUSH_RED_SAND, ""),
  EP_ENUMVALUE(BHT_BRUSH_GRASS, ""),
  EP_ENUMVALUE(BHT_BRUSH_WOOD, ""),
  EP_ENUMVALUE(BHT_BRUSH_SNOW, ""),
EP_ENUMEND(BulletHitType);

EP_ENUMBEG(EffectParticlesType)
  EP_ENUMVALUE(EPT_NONE, ""),
  EP_ENUMVALUE(EPT_BULLET_STONE, ""),
  EP_ENUMVALUE(EPT_BULLET_SAND, ""),
  EP_ENUMVALUE(EPT_BULLET_WATER, ""),
  EP_ENUMVALUE(EPT_BULLET_UNDER_WATER, ""),
  EP_ENUMVALUE(EPT_BULLET_RED_SAND, ""),
  EP_ENUMVALUE(EPT_BULLET_GRASS, ""),
  EP_ENUMVALUE(EPT_BULLET_WOOD, ""),
  EP_ENUMVALUE(EPT_BULLET_SNOW, ""),
EP_ENUMEND(EffectParticlesType);

EP_ENUMBEG(SprayParticlesType)
  EP_ENUMVALUE(SPT_NONE, "None"),
  EP_ENUMVALUE(SPT_BLOOD, "Blood"),
  EP_ENUMVALUE(SPT_BONES, "Bones"),
  EP_ENUMVALUE(SPT_FEATHER, "Feather"),
  EP_ENUMVALUE(SPT_STONES, "Stones"),
  EP_ENUMVALUE(SPT_WOOD, "Wood"),
  EP_ENUMVALUE(SPT_SLIME, "Slime"),
  EP_ENUMVALUE(SPT_LAVA_STONES, "Lava Stones"),
  EP_ENUMVALUE(SPT_ELECTRICITY_SPARKS, "Electricity sparks"),
  EP_ENUMVALUE(SPT_BEAST_PROJECTILE_SPRAY, "Beast projectile spray"),
  EP_ENUMVALUE(SPT_SMALL_LAVA_STONES, "Small Lava Stones"),
  EP_ENUMVALUE(SPT_AIRSPOUTS, "Air"),
  EP_ENUMVALUE(SPT_ELECTRICITY_SPARKS_NO_BLOOD, "Electricity w/o blood"),
  EP_ENUMVALUE(SPT_PLASMA, "Plasma"),
  EP_ENUMVALUE(SPT_GOO, "Goo"),
  EP_ENUMVALUE(SPT_TREE01, "Tree 01"),
  EP_ENUMVALUE(SPT_COLOREDSTONE, "Colored stone"),
EP_ENUMEND(SprayParticlesType);

EP_ENUMBEG(WeaponBits)
  EP_ENUMVALUE(WB_00, "Knife"),
  EP_ENUMVALUE(WB_01, "Colt"),
  EP_ENUMVALUE(WB_02, "Double colt"),
  EP_ENUMVALUE(WB_03, "Single shotgun"),
  EP_ENUMVALUE(WB_04, "Double shotgun"),
  EP_ENUMVALUE(WB_05, "Tommygun"),
  EP_ENUMVALUE(WB_06, "Minigun"),
  EP_ENUMVALUE(WB_07, "Rocket launcher"),
  EP_ENUMVALUE(WB_08, "Grenade launcher"),
  EP_ENUMVALUE(WB_09, "Chainsaw"),
  EP_ENUMVALUE(WB_10, "Flamer"),
  EP_ENUMVALUE(WB_11, "Laser"),
  EP_ENUMVALUE(WB_12, "Sniper"),
  EP_ENUMVALUE(WB_13, "Ironcannon"),
  EP_ENUMVALUE(WB_14, ""),
  EP_ENUMVALUE(WB_15, ""),
  EP_ENUMVALUE(WB_16, ""),
  EP_ENUMVALUE(WB_17, ""),
  EP_ENUMVALUE(WB_18, ""),
  EP_ENUMVALUE(WB_19, ""),
  EP_ENUMVALUE(WB_20, ""),
  EP_ENUMVALUE(WB_21, ""),
  EP_ENUMVALUE(WB_22, ""),
  EP_ENUMVALUE(WB_23, ""),
  EP_ENUMVALUE(WB_24, ""),
  EP_ENUMVALUE(WB_25, ""),
  EP_ENUMVALUE(WB_26, ""),
  EP_ENUMVALUE(WB_27, ""),
  EP_ENUMVALUE(WB_28, ""),
  EP_ENUMVALUE(WB_29, ""),
  EP_ENUMVALUE(WB_30, ""),
  EP_ENUMVALUE(WB_31, ""),
EP_ENUMEND(WeaponBits);

EP_ENUMBEG(ClasificationBits)
  EP_ENUMVALUE(CB_00, "Bit 16"),
  EP_ENUMVALUE(CB_01, "Bit 17"),
  EP_ENUMVALUE(CB_02, "Bit 18"),
  EP_ENUMVALUE(CB_03, "Bit 19"),
  EP_ENUMVALUE(CB_04, "Bit 20"),
  EP_ENUMVALUE(CB_05, "Bit 21"),
  EP_ENUMVALUE(CB_06, "Bit 22"),
  EP_ENUMVALUE(CB_07, "Bit 23"),
  EP_ENUMVALUE(CB_08, "Bit 24"),
  EP_ENUMVALUE(CB_09, "Bit 25"),
  EP_ENUMVALUE(CB_10, "Bit 26"),
  EP_ENUMVALUE(CB_11, "Bit 27"),
  EP_ENUMVALUE(CB_12, "Bit 28"),
  EP_ENUMVALUE(CB_13, "Bit 29"),
  EP_ENUMVALUE(CB_14, "Bit 30"),
  EP_ENUMVALUE(CB_15, "Bit 31"),
EP_ENUMEND(ClasificationBits);

EP_ENUMBEG(VisibilityBits)
  EP_ENUMVALUE(VB_00, "Bit 00"),
  EP_ENUMVALUE(VB_01, "Bit 01"),
  EP_ENUMVALUE(VB_02, "Bit 02"),
  EP_ENUMVALUE(VB_03, "Bit 03"),
  EP_ENUMVALUE(VB_04, "Bit 04"),
  EP_ENUMVALUE(VB_05, "Bit 05"),
  EP_ENUMVALUE(VB_06, "Bit 06"),
  EP_ENUMVALUE(VB_07, "Bit 07"),
  EP_ENUMVALUE(VB_08, "Bit 08"),
  EP_ENUMVALUE(VB_09, "Bit 09"),
  EP_ENUMVALUE(VB_10, "Bit 10"),
  EP_ENUMVALUE(VB_11, "Bit 11"),
  EP_ENUMVALUE(VB_12, "Bit 12"),
  EP_ENUMVALUE(VB_13, "Bit 13"),
  EP_ENUMVALUE(VB_14, "Bit 14"),
  EP_ENUMVALUE(VB_15, "Bit 15"),
EP_ENUMEND(VisibilityBits);

#define ENTITYCLASS CGlobal

CEntityProperty CGlobal_properties[] = {
  CEntityProperty()
};
#define CGlobal_propertiesct 0


CEntityComponent CGlobal_components[] = {
  CEntityComponent()
};
#define CGlobal_componentsct 0


CEventHandlerEntry CGlobal_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CGlobal::
#line 297 "D:/SE1_GPL/Sources/EntitiesMP/Global.es"
Main),DEBUGSTRING("CGlobal::Main")},
};
#define CGlobal_handlersct ARRAYCOUNT(CGlobal_handlers)

CEntity *CGlobal_New(void) { return new CGlobal; };
void CGlobal_OnInitClass(void) {};
void CGlobal_OnEndClass(void) {};
void CGlobal_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CGlobal_OnWorldEnd(CWorld *pwo) {};
void CGlobal_OnWorldInit(CWorld *pwo) {};
void CGlobal_OnWorldTick(CWorld *pwo) {};
void CGlobal_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CGlobal, CEntity, "", "", 0x00000000);
DECLARE_CTFILENAME(_fnmCGlobal_tbn, "");
