/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#define ENTITYCLASS CPlayerAnimator

CEntityProperty CPlayerAnimator_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000196<<8)+1, offsetof(CPlayerAnimator, m_penPlayer), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000196<<8)+5, offsetof(CPlayerAnimator, m_bReference), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000196<<8)+6, offsetof(CPlayerAnimator, m_fLastActionTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x00000196<<8)+7, offsetof(CPlayerAnimator, m_iContent), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000196<<8)+8, offsetof(CPlayerAnimator, m_bWaitJumpAnim), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000196<<8)+9, offsetof(CPlayerAnimator, m_bCrouch), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000196<<8)+10, offsetof(CPlayerAnimator, m_iCrouchDownWait), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000196<<8)+11, offsetof(CPlayerAnimator, m_iRiseUpWait), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000196<<8)+12, offsetof(CPlayerAnimator, m_bChangeWeapon), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000196<<8)+13, offsetof(CPlayerAnimator, m_bSwim), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x00000196<<8)+14, offsetof(CPlayerAnimator, m_iFlare), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x00000196<<8)+15, offsetof(CPlayerAnimator, m_iSecondFlare), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000196<<8)+16, offsetof(CPlayerAnimator, m_bAttacking), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000196<<8)+19, offsetof(CPlayerAnimator, m_tmAttackingDue), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000196<<8)+17, offsetof(CPlayerAnimator, m_tmFlareAdded), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000196<<8)+18, offsetof(CPlayerAnimator, m_bDisableAnimating), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x00000196<<8)+20, offsetof(CPlayerAnimator, m_vLastPlayerPosition), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000196<<8)+21, offsetof(CPlayerAnimator, m_fEyesYLastOffset), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000196<<8)+22, offsetof(CPlayerAnimator, m_fEyesYOffset), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000196<<8)+23, offsetof(CPlayerAnimator, m_fEyesYSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000196<<8)+27, offsetof(CPlayerAnimator, m_fWeaponYLastOffset), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000196<<8)+28, offsetof(CPlayerAnimator, m_fWeaponYOffset), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000196<<8)+29, offsetof(CPlayerAnimator, m_fWeaponYSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000196<<8)+30, offsetof(CPlayerAnimator, m_bMoving), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000196<<8)+31, offsetof(CPlayerAnimator, m_fMoveLastBanking), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000196<<8)+32, offsetof(CPlayerAnimator, m_fMoveBanking), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000196<<8)+33, offsetof(CPlayerAnimator, m_iMovingSide), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000196<<8)+34, offsetof(CPlayerAnimator, m_bSidestepBankingLeft), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000196<<8)+35, offsetof(CPlayerAnimator, m_bSidestepBankingRight), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000196<<8)+36, offsetof(CPlayerAnimator, m_fSidestepLastBanking), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000196<<8)+37, offsetof(CPlayerAnimator, m_fSidestepBanking), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x00000196<<8)+38, offsetof(CPlayerAnimator, m_iWeaponLast), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000196<<8)+39, offsetof(CPlayerAnimator, m_fBodyAnimTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000196<<8)+255, offsetof(CPlayerAnimator, m_penPrediction), "", 0, 0, 0),
};
#define CPlayerAnimator_propertiesct ARRAYCOUNT(CPlayerAnimator_properties)

CEntityComponent CPlayerAnimator_components[] = {
#define CLASS_REMINDER ((0x00000196<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_REMINDER, "EFNM" "Classes\\Reminder.ecl"),
#define MODEL_KNIFE ((0x00000196<<8)+20)
 CEntityComponent(ECT_MODEL, MODEL_KNIFE, "EFNM" "Models\\Weapons\\Knife\\KnifeItem.mdl"),
#define TEXTURE_KNIFE ((0x00000196<<8)+22)
 CEntityComponent(ECT_TEXTURE, TEXTURE_KNIFE, "EFNM" "Models\\Weapons\\Knife\\KnifeItem.tex"),
#define MODEL_COLT ((0x00000196<<8)+30)
 CEntityComponent(ECT_MODEL, MODEL_COLT, "EFNM" "Models\\Weapons\\Colt\\ColtItem.mdl"),
#define MODEL_COLTCOCK ((0x00000196<<8)+31)
 CEntityComponent(ECT_MODEL, MODEL_COLTCOCK, "EFNM" "Models\\Weapons\\Colt\\ColtCock.mdl"),
#define MODEL_COLTMAIN ((0x00000196<<8)+32)
 CEntityComponent(ECT_MODEL, MODEL_COLTMAIN, "EFNM" "Models\\Weapons\\Colt\\ColtMain.mdl"),
#define MODEL_COLTBULLETS ((0x00000196<<8)+33)
 CEntityComponent(ECT_MODEL, MODEL_COLTBULLETS, "EFNM" "Models\\Weapons\\Colt\\ColtBullets.mdl"),
#define TEXTURE_COLTBULLETS ((0x00000196<<8)+34)
 CEntityComponent(ECT_TEXTURE, TEXTURE_COLTBULLETS, "EFNM" "Models\\Weapons\\Colt\\ColtBullets.tex"),
#define TEXTURE_COLTMAIN ((0x00000196<<8)+35)
 CEntityComponent(ECT_TEXTURE, TEXTURE_COLTMAIN, "EFNM" "Models\\Weapons\\Colt\\ColtMain.tex"),
#define TEXTURE_COLTCOCK ((0x00000196<<8)+36)
 CEntityComponent(ECT_TEXTURE, TEXTURE_COLTCOCK, "EFNM" "Models\\Weapons\\Colt\\ColtCock.tex"),
#define MODEL_SINGLESHOTGUN ((0x00000196<<8)+40)
 CEntityComponent(ECT_MODEL, MODEL_SINGLESHOTGUN, "EFNM" "Models\\Weapons\\SingleShotgun\\SingleShotgunItem.mdl"),
#define MODEL_SS_SLIDER ((0x00000196<<8)+41)
 CEntityComponent(ECT_MODEL, MODEL_SS_SLIDER, "EFNM" "Models\\Weapons\\SingleShotgun\\Slider.mdl"),
#define MODEL_SS_HANDLE ((0x00000196<<8)+42)
 CEntityComponent(ECT_MODEL, MODEL_SS_HANDLE, "EFNM" "Models\\Weapons\\SingleShotgun\\Handle.mdl"),
#define MODEL_SS_BARRELS ((0x00000196<<8)+43)
 CEntityComponent(ECT_MODEL, MODEL_SS_BARRELS, "EFNM" "Models\\Weapons\\SingleShotgun\\Barrels.mdl"),
#define TEXTURE_SS_HANDLE ((0x00000196<<8)+44)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SS_HANDLE, "EFNM" "Models\\Weapons\\SingleShotgun\\Handle.tex"),
#define TEXTURE_SS_BARRELS ((0x00000196<<8)+45)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SS_BARRELS, "EFNM" "Models\\Weapons\\SingleShotgun\\Barrels.tex"),
#define MODEL_DOUBLESHOTGUN ((0x00000196<<8)+50)
 CEntityComponent(ECT_MODEL, MODEL_DOUBLESHOTGUN, "EFNM" "Models\\Weapons\\DoubleShotgun\\DoubleShotgunItem.mdl"),
#define MODEL_DS_HANDLE ((0x00000196<<8)+51)
 CEntityComponent(ECT_MODEL, MODEL_DS_HANDLE, "EFNM" "Models\\Weapons\\DoubleShotgun\\Dshotgunhandle.mdl"),
#define MODEL_DS_BARRELS ((0x00000196<<8)+52)
 CEntityComponent(ECT_MODEL, MODEL_DS_BARRELS, "EFNM" "Models\\Weapons\\DoubleShotgun\\Dshotgunbarrels.mdl"),
#define MODEL_DS_SWITCH ((0x00000196<<8)+54)
 CEntityComponent(ECT_MODEL, MODEL_DS_SWITCH, "EFNM" "Models\\Weapons\\DoubleShotgun\\Switch.mdl"),
#define TEXTURE_DS_HANDLE ((0x00000196<<8)+56)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DS_HANDLE, "EFNM" "Models\\Weapons\\DoubleShotgun\\Handle.tex"),
#define TEXTURE_DS_BARRELS ((0x00000196<<8)+57)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DS_BARRELS, "EFNM" "Models\\Weapons\\DoubleShotgun\\Barrels.tex"),
#define TEXTURE_DS_SWITCH ((0x00000196<<8)+58)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DS_SWITCH, "EFNM" "Models\\Weapons\\DoubleShotgun\\Switch.tex"),
#define MODEL_TOMMYGUN ((0x00000196<<8)+70)
 CEntityComponent(ECT_MODEL, MODEL_TOMMYGUN, "EFNM" "Models\\Weapons\\TommyGun\\TommyGunItem.mdl"),
#define MODEL_TG_BODY ((0x00000196<<8)+71)
 CEntityComponent(ECT_MODEL, MODEL_TG_BODY, "EFNM" "Models\\Weapons\\TommyGun\\Body.mdl"),
#define MODEL_TG_SLIDER ((0x00000196<<8)+72)
 CEntityComponent(ECT_MODEL, MODEL_TG_SLIDER, "EFNM" "Models\\Weapons\\TommyGun\\Slider.mdl"),
#define TEXTURE_TG_BODY ((0x00000196<<8)+73)
 CEntityComponent(ECT_TEXTURE, TEXTURE_TG_BODY, "EFNM" "Models\\Weapons\\TommyGun\\Body.tex"),
#define MODEL_MINIGUN ((0x00000196<<8)+80)
 CEntityComponent(ECT_MODEL, MODEL_MINIGUN, "EFNM" "Models\\Weapons\\MiniGun\\MiniGunItem.mdl"),
#define MODEL_MG_BARRELS ((0x00000196<<8)+81)
 CEntityComponent(ECT_MODEL, MODEL_MG_BARRELS, "EFNM" "Models\\Weapons\\MiniGun\\Barrels.mdl"),
#define MODEL_MG_BODY ((0x00000196<<8)+82)
 CEntityComponent(ECT_MODEL, MODEL_MG_BODY, "EFNM" "Models\\Weapons\\MiniGun\\Body.mdl"),
#define MODEL_MG_ENGINE ((0x00000196<<8)+83)
 CEntityComponent(ECT_MODEL, MODEL_MG_ENGINE, "EFNM" "Models\\Weapons\\MiniGun\\Engine.mdl"),
#define TEXTURE_MG_BODY ((0x00000196<<8)+84)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MG_BODY, "EFNM" "Models\\Weapons\\MiniGun\\Body.tex"),
#define TEXTURE_MG_BARRELS ((0x00000196<<8)+99)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MG_BARRELS, "EFNM" "Models\\Weapons\\MiniGun\\Barrels.tex"),
#define MODEL_ROCKETLAUNCHER ((0x00000196<<8)+90)
 CEntityComponent(ECT_MODEL, MODEL_ROCKETLAUNCHER, "EFNM" "Models\\Weapons\\RocketLauncher\\RocketLauncherItem.mdl"),
#define MODEL_RL_BODY ((0x00000196<<8)+91)
 CEntityComponent(ECT_MODEL, MODEL_RL_BODY, "EFNM" "Models\\Weapons\\RocketLauncher\\Body.mdl"),
#define TEXTURE_RL_BODY ((0x00000196<<8)+92)
 CEntityComponent(ECT_TEXTURE, TEXTURE_RL_BODY, "EFNM" "Models\\Weapons\\RocketLauncher\\Body.tex"),
#define MODEL_RL_ROTATINGPART ((0x00000196<<8)+93)
 CEntityComponent(ECT_MODEL, MODEL_RL_ROTATINGPART, "EFNM" "Models\\Weapons\\RocketLauncher\\RotatingPart.mdl"),
#define TEXTURE_RL_ROTATINGPART ((0x00000196<<8)+94)
 CEntityComponent(ECT_TEXTURE, TEXTURE_RL_ROTATINGPART, "EFNM" "Models\\Weapons\\RocketLauncher\\RotatingPart.tex"),
#define MODEL_RL_ROCKET ((0x00000196<<8)+95)
 CEntityComponent(ECT_MODEL, MODEL_RL_ROCKET, "EFNM" "Models\\Weapons\\RocketLauncher\\Projectile\\Rocket.mdl"),
#define TEXTURE_RL_ROCKET ((0x00000196<<8)+96)
 CEntityComponent(ECT_TEXTURE, TEXTURE_RL_ROCKET, "EFNM" "Models\\Weapons\\RocketLauncher\\Projectile\\Rocket.tex"),
#define MODEL_GRENADELAUNCHER ((0x00000196<<8)+100)
 CEntityComponent(ECT_MODEL, MODEL_GRENADELAUNCHER, "EFNM" "Models\\Weapons\\GrenadeLauncher\\GrenadeLauncherItem.mdl"),
#define MODEL_GL_BODY ((0x00000196<<8)+101)
 CEntityComponent(ECT_MODEL, MODEL_GL_BODY, "EFNM" "Models\\Weapons\\GrenadeLauncher\\Body.mdl"),
#define MODEL_GL_MOVINGPART ((0x00000196<<8)+102)
 CEntityComponent(ECT_MODEL, MODEL_GL_MOVINGPART, "EFNM" "Models\\Weapons\\GrenadeLauncher\\MovingPipe.mdl"),
#define MODEL_GL_GRENADE ((0x00000196<<8)+103)
 CEntityComponent(ECT_MODEL, MODEL_GL_GRENADE, "EFNM" "Models\\Weapons\\GrenadeLauncher\\GrenadeBack.mdl"),
#define TEXTURE_GL_BODY ((0x00000196<<8)+104)
 CEntityComponent(ECT_TEXTURE, TEXTURE_GL_BODY, "EFNM" "Models\\Weapons\\GrenadeLauncher\\Body.tex"),
#define TEXTURE_GL_MOVINGPART ((0x00000196<<8)+105)
 CEntityComponent(ECT_TEXTURE, TEXTURE_GL_MOVINGPART, "EFNM" "Models\\Weapons\\GrenadeLauncher\\MovingPipe.tex"),
#define MODEL_SNIPER ((0x00000196<<8)+110)
 CEntityComponent(ECT_MODEL, MODEL_SNIPER, "EFNM" "ModelsMP\\Weapons\\Sniper\\Sniper.mdl"),
#define MODEL_SNIPER_BODY ((0x00000196<<8)+111)
 CEntityComponent(ECT_MODEL, MODEL_SNIPER_BODY, "EFNM" "ModelsMP\\Weapons\\Sniper\\Body.mdl"),
#define TEXTURE_SNIPER_BODY ((0x00000196<<8)+112)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SNIPER_BODY, "EFNM" "ModelsMP\\Weapons\\Sniper\\Body.tex"),
#define MODEL_FLAMER ((0x00000196<<8)+130)
 CEntityComponent(ECT_MODEL, MODEL_FLAMER, "EFNM" "ModelsMP\\Weapons\\Flamer\\FlamerItem.mdl"),
#define MODEL_FL_BODY ((0x00000196<<8)+131)
 CEntityComponent(ECT_MODEL, MODEL_FL_BODY, "EFNM" "ModelsMP\\Weapons\\Flamer\\Body.mdl"),
#define MODEL_FL_RESERVOIR ((0x00000196<<8)+132)
 CEntityComponent(ECT_MODEL, MODEL_FL_RESERVOIR, "EFNM" "ModelsMP\\Weapons\\Flamer\\FuelReservoir.mdl"),
#define MODEL_FL_FLAME ((0x00000196<<8)+133)
 CEntityComponent(ECT_MODEL, MODEL_FL_FLAME, "EFNM" "ModelsMP\\Weapons\\Flamer\\Flame.mdl"),
#define TEXTURE_FL_BODY ((0x00000196<<8)+134)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FL_BODY, "EFNM" "ModelsMP\\Weapons\\Flamer\\Body.tex"),
#define TEXTURE_FL_FLAME ((0x00000196<<8)+135)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FL_FLAME, "EFNM" "ModelsMP\\Effects\\Flame\\Flame.tex"),
#define TEXTURE_FL_FUELRESERVOIR ((0x00000196<<8)+136)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FL_FUELRESERVOIR, "EFNM" "ModelsMP\\Weapons\\Flamer\\FuelReservoir.tex"),
#define MODEL_LASER ((0x00000196<<8)+140)
 CEntityComponent(ECT_MODEL, MODEL_LASER, "EFNM" "Models\\Weapons\\Laser\\LaserItem.mdl"),
#define MODEL_LS_BODY ((0x00000196<<8)+141)
 CEntityComponent(ECT_MODEL, MODEL_LS_BODY, "EFNM" "Models\\Weapons\\Laser\\Body.mdl"),
#define MODEL_LS_BARREL ((0x00000196<<8)+142)
 CEntityComponent(ECT_MODEL, MODEL_LS_BARREL, "EFNM" "Models\\Weapons\\Laser\\Barrel.mdl"),
#define TEXTURE_LS_BODY ((0x00000196<<8)+143)
 CEntityComponent(ECT_TEXTURE, TEXTURE_LS_BODY, "EFNM" "Models\\Weapons\\Laser\\Body.tex"),
#define TEXTURE_LS_BARREL ((0x00000196<<8)+144)
 CEntityComponent(ECT_TEXTURE, TEXTURE_LS_BARREL, "EFNM" "Models\\Weapons\\Laser\\Barrel.tex"),
#define MODEL_CHAINSAW ((0x00000196<<8)+150)
 CEntityComponent(ECT_MODEL, MODEL_CHAINSAW, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\ChainsawForPlayer.mdl"),
#define MODEL_CS_BODY ((0x00000196<<8)+151)
 CEntityComponent(ECT_MODEL, MODEL_CS_BODY, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\BodyForPlayer.mdl"),
#define MODEL_CS_BLADE ((0x00000196<<8)+152)
 CEntityComponent(ECT_MODEL, MODEL_CS_BLADE, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Blade.mdl"),
#define MODEL_CS_TEETH ((0x00000196<<8)+153)
 CEntityComponent(ECT_MODEL, MODEL_CS_TEETH, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Teeth.mdl"),
#define TEXTURE_CS_BODY ((0x00000196<<8)+154)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CS_BODY, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Body.tex"),
#define TEXTURE_CS_BLADE ((0x00000196<<8)+155)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CS_BLADE, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Blade.tex"),
#define TEXTURE_CS_TEETH ((0x00000196<<8)+156)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CS_TEETH, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Teeth.tex"),
#define MODEL_CANNON ((0x00000196<<8)+170)
 CEntityComponent(ECT_MODEL, MODEL_CANNON, "EFNM" "Models\\Weapons\\Cannon\\Cannon.mdl"),
#define MODEL_CN_BODY ((0x00000196<<8)+171)
 CEntityComponent(ECT_MODEL, MODEL_CN_BODY, "EFNM" "Models\\Weapons\\Cannon\\Body.mdl"),
#define TEXTURE_CANNON ((0x00000196<<8)+173)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CANNON, "EFNM" "Models\\Weapons\\Cannon\\Body.tex"),
#define MODEL_GOLDAMON ((0x00000196<<8)+180)
 CEntityComponent(ECT_MODEL, MODEL_GOLDAMON, "EFNM" "Models\\Ages\\Egypt\\Gods\\Amon\\AmonGold.mdl"),
#define TEXTURE_GOLDAMON ((0x00000196<<8)+181)
 CEntityComponent(ECT_TEXTURE, TEXTURE_GOLDAMON, "EFNM" "Models\\Ages\\Egypt\\Gods\\Amon\\AmonGold.tex"),
#define TEX_REFL_BWRIPLES01 ((0x00000196<<8)+200)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_BWRIPLES01, "EFNM" "Models\\ReflectionTextures\\BWRiples01.tex"),
#define TEX_REFL_BWRIPLES02 ((0x00000196<<8)+201)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_BWRIPLES02, "EFNM" "Models\\ReflectionTextures\\BWRiples02.tex"),
#define TEX_REFL_LIGHTMETAL01 ((0x00000196<<8)+202)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_LIGHTMETAL01, "EFNM" "Models\\ReflectionTextures\\LightMetal01.tex"),
#define TEX_REFL_LIGHTBLUEMETAL01 ((0x00000196<<8)+203)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_LIGHTBLUEMETAL01, "EFNM" "Models\\ReflectionTextures\\LightBlueMetal01.tex"),
#define TEX_REFL_DARKMETAL ((0x00000196<<8)+204)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_DARKMETAL, "EFNM" "Models\\ReflectionTextures\\DarkMetal.tex"),
#define TEX_REFL_PURPLE01 ((0x00000196<<8)+205)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_PURPLE01, "EFNM" "Models\\ReflectionTextures\\Purple01.tex"),
#define TEX_REFL_GOLD01 ((0x00000196<<8)+206)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_GOLD01, "EFNM" "Models\\ReflectionTextures\\Gold01.tex"),
#define TEX_SPEC_WEAK ((0x00000196<<8)+210)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_WEAK, "EFNM" "Models\\SpecularTextures\\Weak.tex"),
#define TEX_SPEC_MEDIUM ((0x00000196<<8)+211)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_MEDIUM, "EFNM" "Models\\SpecularTextures\\Medium.tex"),
#define TEX_SPEC_STRONG ((0x00000196<<8)+212)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_STRONG, "EFNM" "Models\\SpecularTextures\\Strong.tex"),
#define MODEL_FLARE02 ((0x00000196<<8)+250)
 CEntityComponent(ECT_MODEL, MODEL_FLARE02, "EFNM" "Models\\Effects\\Weapons\\Flare02\\Flare.mdl"),
#define TEXTURE_FLARE02 ((0x00000196<<8)+251)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLARE02, "EFNM" "Models\\Effects\\Weapons\\Flare02\\Flare.tex"),
};
#define CPlayerAnimator_componentsct ARRAYCOUNT(CPlayerAnimator_components)

CEventHandlerEntry CPlayerAnimator_handlers[] = {
 {0x01960001, -1, CEntity::pEventHandler(&CPlayerAnimator::
#line 1580 "D:/SE1_GPL/Sources/EntitiesMP/PlayerAnimator.es"
ReminderAction),DEBUGSTRING("CPlayerAnimator::ReminderAction")},
 {1, -1, CEntity::pEventHandler(&CPlayerAnimator::
#line 1592 "D:/SE1_GPL/Sources/EntitiesMP/PlayerAnimator.es"
Main),DEBUGSTRING("CPlayerAnimator::Main")},
 {0x01960002, -1, CEntity::pEventHandler(&CPlayerAnimator::H0x01960002_Main_01), DEBUGSTRING("CPlayerAnimator::H0x01960002_Main_01")},
 {0x01960003, -1, CEntity::pEventHandler(&CPlayerAnimator::H0x01960003_Main_02), DEBUGSTRING("CPlayerAnimator::H0x01960003_Main_02")},
};
#define CPlayerAnimator_handlersct ARRAYCOUNT(CPlayerAnimator_handlers)

CEntity *CPlayerAnimator_New(void) { return new CPlayerAnimator; };
void CPlayerAnimator_OnInitClass(void) {};
void CPlayerAnimator_OnEndClass(void) {};
void CPlayerAnimator_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CPlayerAnimator_OnWorldEnd(CWorld *pwo) {};
void CPlayerAnimator_OnWorldInit(CWorld *pwo) {};
void CPlayerAnimator_OnWorldTick(CWorld *pwo) {};
void CPlayerAnimator_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CPlayerAnimator, CRationalEntity, "Player Animator", "", 0x00000196);
DECLARE_CTFILENAME(_fnmCPlayerAnimator_tbn, "");
