/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 4 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"

#include "StdH.h"
#include "EntitiesMP/BackgroundViewer.h"
#include "EntitiesMP/WorldSettingsController.h"
#include "EntitiesMP/EnemyBase.h"

#include <EntitiesMP/SeriousBomb.h>
#include <EntitiesMP/SeriousBomb_tables.h>
CEntityEvent *ESeriousBomb::MakeCopy(void) { CEntityEvent *peeCopy = new ESeriousBomb(*this); return peeCopy;}
ESeriousBomb::ESeriousBomb() : CEntityEvent(EVENTCODE_ESeriousBomb) {;
 ClearToDefault(penOwner);
};
#line 16 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"

void CSeriousBomb_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) 
{
  pdec->  PrecacheSound(SOUND_BLOW);
};

void CSeriousBomb::SetDefaultProperties(void) {
  m_penOwner = NULL;
  m_soBlow.SetOwner(this);
m_soBlow.Stop_internal();
  CRationalEntity::SetDefaultProperties();
}
  
#line 44 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
void CSeriousBomb::ShakeItBaby(FLOAT tmShaketime,FLOAT fPower,FLOAT fFade,BOOL bFadeIn) 
#line 45 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
{
#line 46 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
CWorldSettingsController  * pwsc  = GetWSC  (this );
#line 47 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
if(pwsc  != NULL ){
#line 48 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
pwsc  -> m_tmShakeStarted  = tmShaketime ;
#line 49 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
pwsc  -> m_vShakePos  = GetPlacement  () . pl_PositionVector ;
#line 50 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
pwsc  -> m_fShakeFalloff  = 450.0f;
#line 51 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
pwsc  -> m_fShakeFade  = fFade ;
#line 53 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
pwsc  -> m_fShakeIntensityZ  = 0;
#line 54 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
pwsc  -> m_tmShakeFrequencyZ  = 5.0f;
#line 55 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
pwsc  -> m_fShakeIntensityY  = 0.1f * fPower ;
#line 56 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
pwsc  -> m_tmShakeFrequencyY  = 5.0f;
#line 57 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
pwsc  -> m_fShakeIntensityB  = 2.5f * fPower ;
#line 58 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
pwsc  -> m_tmShakeFrequencyB  = 7.2f;
#line 60 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
pwsc  -> m_bShakeFadeIn  = bFadeIn ;
#line 61 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
}
#line 62 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
}
  
#line 64 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
void CSeriousBomb::Glare(FLOAT fStart,FLOAT fEnd,FLOAT fFinR,FLOAT fFoutR) 
#line 65 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
{
#line 66 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
CWorldSettingsController  * pwsc  = GetWSC  (this );
#line 67 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
if(pwsc  != NULL )
#line 68 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
{
#line 69 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
pwsc  -> m_colGlade  = C_WHITE ;
#line 70 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
pwsc  -> m_tmGlaringStarted  = _pTimer  -> CurrentTick  () + fStart ;
#line 71 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
pwsc  -> m_tmGlaringEnded  = pwsc  -> m_tmGlaringStarted  + fEnd ;
#line 72 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
pwsc  -> m_fGlaringFadeInRatio  = fFinR ;
#line 73 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
pwsc  -> m_fGlaringFadeOutRatio  = fFoutR ;
#line 74 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
}
#line 75 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
}
  
#line 78 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
void CSeriousBomb::ExplodeBomb(void) 
#line 79 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
{
#line 81 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
{FOREACHINDYNAMICCONTAINER  (this  -> GetWorld  () -> wo_cenEntities  , CEntity  , iten ){
#line 82 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
CEntity  * pen  = iten ;
#line 83 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
if(IsDerivedFromClass  (pen  , "Enemy Base")){
#line 84 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
CEnemyBase  * penEnemy  = (CEnemyBase  *) pen ;
#line 85 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
if(penEnemy  -> m_bBoss  == TRUE  || DistanceTo  (this  , penEnemy ) > 250.0f){
#line 86 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
continue ;
#line 87 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
}
#line 88 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
this  -> InflictDirectDamage  (pen  , this  , DMT_EXPLOSION  , penEnemy  -> GetHealth  () + 100.0f , pen  -> GetPlacement  () . pl_PositionVector  , FLOAT3D (0 , 1 , 0));
#line 89 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
}
#line 90 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
}}
#line 91 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
}
BOOL CSeriousBomb::
#line 95 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CSeriousBomb_Main
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_ESeriousBomb, "CSeriousBomb::Main expects 'ESeriousBomb' as input!");  const ESeriousBomb &esb = (const ESeriousBomb &)__eeInput;
#line 97 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
InitAsVoid  ();
#line 99 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
if(!(esb  . penOwner )){ Jump(STATE_CURRENT,0x01620007, FALSE, EInternal());return TRUE;}
#line 100 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
m_penOwner  = esb  . penOwner ;
#line 102 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
m_soBlow  . Set3DParameters  (500.0f , 250.0f , 3.0f , 1.0f);
#line 103 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
PlaySound  (m_soBlow  , SOUND_BLOW  , SOF_3D );
#line 104 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
if(_pNetwork  -> IsPlayerLocal  (m_penOwner )){IFeel_PlayEffect  ("SeriousBombBlow");}
#line 107 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
Glare  (1.0f , 2.8f , 0.3f , 0.3f);
#line 109 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
ShakeItBaby  (_pTimer  -> CurrentTick  () , 4.0f , 1.0f , TRUE );
#line 110 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
SetTimerAfter(1.5f);
Jump(STATE_CURRENT, 0x01620001, FALSE, EBegin());return TRUE;}BOOL CSeriousBomb::H0x01620001_Main_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x01620001
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x01620002, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CSeriousBomb::H0x01620002_Main_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x01620002
;
#line 113 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
ShakeItBaby  (_pTimer  -> CurrentTick  () , 8.0f , 2.0f , FALSE );
#line 116 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
ExplodeBomb  ();
#line 117 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
SetTimerAfter(0.25f);
Jump(STATE_CURRENT, 0x01620003, FALSE, EBegin());return TRUE;}BOOL CSeriousBomb::H0x01620003_Main_03(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x01620003
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x01620004, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CSeriousBomb::H0x01620004_Main_04(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x01620004
;
#line 118 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
ExplodeBomb  ();
#line 119 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
SetTimerAfter(1.75f);
Jump(STATE_CURRENT, 0x01620005, FALSE, EBegin());return TRUE;}BOOL CSeriousBomb::H0x01620005_Main_05(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x01620005
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x01620006, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CSeriousBomb::H0x01620006_Main_06(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x01620006
;Jump(STATE_CURRENT,0x01620007, FALSE, EInternal());return TRUE;}BOOL CSeriousBomb::H0x01620007_Main_07(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x01620007

#line 122 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
Destroy  ();
#line 123 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
Return(STATE_CURRENT,EVoid());
#line 123 "D:/SE1_GPL/Sources/EntitiesMP/SeriousBomb.es"
return TRUE; ASSERT(FALSE); return TRUE;};