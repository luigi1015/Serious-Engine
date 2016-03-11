/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 4 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"

#include "StdH.h"

#include <EntitiesMP/Damager.h>
#include <EntitiesMP/Damager_tables.h>
void CDamager::SetDefaultProperties(void) {
  m_strName = "Damager";
  m_strDescription = "";
  m_dmtType = DMT_ABYSS ;
  m_fAmmount = 1000.0f;
  m_penToDamage = NULL;
  m_bDamageFromTriggerer = FALSE ;
  m_penLastDamaged = NULL;
  m_tmLastDamage = 0.0f;
  CRationalEntity::SetDefaultProperties();
}
  
#line 28 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
const CTString & CDamager::GetDescription(void)const {
#line 29 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
return m_strDescription ;
#line 30 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
}
BOOL CDamager::
#line 33 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CDamager_Main
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CDamager::Main expects 'EVoid' as input!");  const EVoid &e = (const EVoid &)__eeInput;
#line 35 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
InitAsEditorModel  ();
#line 36 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
SetPhysicsFlags  (EPF_MODEL_IMMATERIAL );
#line 37 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 40 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
SetModel  (MODEL_TELEPORT );
#line 41 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
SetModelMainTexture  (TEXTURE_TELEPORT );
#line 43 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
((CTString &) m_strDescription ) . PrintF  ("%s:%g" , 
#line 44 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
DamageType_enum  . NameForValue  (INDEX (m_dmtType )) , m_fAmmount );
#line 46 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
Jump(STATE_CURRENT,0x00e50002, FALSE, EInternal());return TRUE;}BOOL CDamager::H0x00e50002_Main_03(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x00e50002
if(!(TRUE )){ Jump(STATE_CURRENT,0x00e50003, FALSE, EInternal());return TRUE;}
#line 48 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
SetTimerAt(THINKTIME_NEVER);
Jump(STATE_CURRENT, 0x00e50000, FALSE, EBegin());return TRUE;}BOOL CDamager::H0x00e50000_Main_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x00e50000
switch(__eeInput.ee_slEvent){case(EVENTCODE_ETrigger):{const ETrigger&eTrigger= (ETrigger&)__eeInput;

#line 51 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
CEntity  * penInflictor  = this ;
#line 52 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
if(m_bDamageFromTriggerer ){
#line 53 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
penInflictor  = eTrigger  . penCaused ;
#line 54 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
}
#line 56 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
CEntity  * penVictim  = NULL ;
#line 57 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
if(m_penToDamage  != NULL ){
#line 58 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
penVictim  = m_penToDamage ;
#line 59 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
}else if(eTrigger  . penCaused  != NULL ){
#line 60 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
penVictim  = eTrigger  . penCaused ;
#line 61 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
}
#line 63 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
if(penVictim  != NULL ){
#line 64 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
if(! (penVictim  == m_penLastDamaged  && _pTimer  -> CurrentTick  () < m_tmLastDamage  + 0.1f))
#line 65 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
{
#line 66 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
InflictDirectDamage  (penVictim  , penInflictor  , m_dmtType  , m_fAmmount  , 
#line 67 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
penVictim  -> GetPlacement  () . pl_PositionVector  , FLOAT3D (0 , 1 , 0));
#line 68 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
m_penLastDamaged  = penVictim ;
#line 69 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
m_tmLastDamage  = _pTimer  -> CurrentTick  ();
#line 70 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
}
#line 71 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
}
#line 72 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
UnsetTimer();Jump(STATE_CURRENT,0x00e50001, FALSE, EInternal());return TRUE;
#line 73 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
}ASSERT(FALSE);break;default:{
#line 75 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
return TRUE;
#line 76 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
}ASSERT(FALSE);break;
#line 77 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
}return TRUE;}BOOL CDamager::H0x00e50001_Main_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x00e50001
;Jump(STATE_CURRENT,0x00e50002, FALSE, EInternal());return TRUE;
#line 81 "D:/SE1_GPL/Sources/EntitiesMP/Damager.es"
}BOOL CDamager::H0x00e50003_Main_04(const CEntityEvent &__eeInput) {
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x00e50003
 ASSERT(FALSE); return TRUE;};