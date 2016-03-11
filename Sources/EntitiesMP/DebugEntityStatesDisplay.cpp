/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 4 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"

#include "StdH.h"
void HUD_SetEntityForStackDisplay(CRationalEntity *pren);

#include <EntitiesMP/DebugEntityStatesDisplay.h>
#include <EntitiesMP/DebugEntityStatesDisplay_tables.h>
void CEntityStateDisplay::SetDefaultProperties(void) {
  m_strName = "EntityStateDisplay";
  m_penTarget = NULL;
  CRationalEntity::SetDefaultProperties();
}
   CEntityStateDisplay:: ~ CEntityStateDisplay() 
#line 26 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
{
#line 27 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
HUD_SetEntityForStackDisplay  (NULL );
#line 28 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
}
BOOL CEntityStateDisplay::
#line 31 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CEntityStateDisplay_Main
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CEntityStateDisplay::Main expects 'EVoid' as input!");  const EVoid &e = (const EVoid &)__eeInput;
#line 34 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
InitAsEditorModel  ();
#line 35 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
SetPhysicsFlags  (EPF_MODEL_IMMATERIAL );
#line 36 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 38 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
SetModel  (MODEL_MARKER );
#line 39 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
SetModelMainTexture  (TEXTURE_MARKER );
#line 41 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
GetModelObject  () -> StretchModel  (FLOAT3D (0.4f , 0.4f , 0.4f));
#line 45 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
Jump(STATE_CURRENT,0x00e90002, FALSE, EInternal());return TRUE;}BOOL CEntityStateDisplay::H0x00e90002_Main_03(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x00e90002
if(!(TRUE )){ Jump(STATE_CURRENT,0x00e90003, FALSE, EInternal());return TRUE;}
#line 46 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
SetTimerAfter(0.1f);
Jump(STATE_CURRENT, 0x00e90000, FALSE, EBegin());return TRUE;}BOOL CEntityStateDisplay::H0x00e90000_Main_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x00e90000
switch(__eeInput.ee_slEvent)
#line 47 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
{case(EVENTCODE_EBegin):{const EBegin&e= (EBegin&)__eeInput;

#line 49 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
if(m_penTarget  != NULL ){
#line 50 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
HUD_SetEntityForStackDisplay  ((CRationalEntity  *) & * m_penTarget );
#line 51 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
}else {
#line 52 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
HUD_SetEntityForStackDisplay  (NULL );
#line 53 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
}
#line 54 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
return TRUE;
#line 55 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
}ASSERT(FALSE);break;case(EVENTCODE_ETimer):{const ETimer&e= (ETimer&)__eeInput;

#line 57 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
UnsetTimer();Jump(STATE_CURRENT,0x00e90001, FALSE, EInternal());return TRUE;
#line 58 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
}ASSERT(FALSE);break;default: return FALSE; break;
#line 59 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
}return TRUE;}BOOL CEntityStateDisplay::H0x00e90001_Main_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x00e90001
Jump(STATE_CURRENT,0x00e90002, FALSE, EInternal());return TRUE;
#line 60 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
}BOOL CEntityStateDisplay::H0x00e90003_Main_04(const CEntityEvent &__eeInput) {
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x00e90003

#line 61 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
Return(STATE_CURRENT,EVoid());
#line 61 "D:/SE1_GPL/Sources/EntitiesMP/DebugEntityStatesDisplay.es"
return TRUE; ASSERT(FALSE); return TRUE;};