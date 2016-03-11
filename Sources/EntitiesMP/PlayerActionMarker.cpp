/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 4 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"

#include "StdH.h"

#include <EntitiesMP/PlayerActionMarker.h>
#include <EntitiesMP/PlayerActionMarker_tables.h>
void CPlayerActionMarker::SetDefaultProperties(void) {
  m_paaAction = PAA_RUN ;
  m_tmWait = 0.0f;
  m_penDoorController = NULL;
  m_penTrigger = NULL;
  m_fSpeed = 1.0f;
  m_penItem = NULL;
  CMarker::SetDefaultProperties();
}
  
#line 59 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
const CTString & CPlayerActionMarker::GetDescription(void)const {
#line 60 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
CTString strAction  = PlayerAutoAction_enum  . NameForValue  (INDEX (m_paaAction ));
#line 61 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
if(m_penTarget  == NULL ){
#line 62 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
((CTString &) m_strDescription ) . PrintF  ("%s (%s)-><none>" , m_strName  , strAction );
#line 63 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
}else {
#line 64 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
((CTString &) m_strDescription ) . PrintF  ("%s (%s)->%s" , m_strName  , strAction  , 
#line 65 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
m_penTarget  -> GetName  ());
#line 66 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
}
#line 67 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
return m_strDescription ;
#line 68 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
}
  
#line 71 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
BOOL CPlayerActionMarker::DropsMarker(CTFileName & fnmMarkerClass,CTString & strTargetProperty)const {
#line 72 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
fnmMarkerClass  = CTFILENAME  ("Classes\\PlayerActionMarker.ecl");
#line 73 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
strTargetProperty  = "Target";
#line 74 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
return TRUE ;
#line 75 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
}
  
#line 78 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
BOOL CPlayerActionMarker::HandleEvent(const CEntityEvent & ee) 
#line 79 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
{
#line 81 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
if(ee  . ee_slEvent  == EVENTCODE_ETrigger ){
#line 82 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
ETrigger  & eTrigger  = (ETrigger  &) ee ;
#line 84 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
if(IsDerivedFromClass  (eTrigger  . penCaused  , "Player")){
#line 86 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
EAutoAction  eAutoAction ;
#line 87 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
eAutoAction  . penFirstMarker  = this ;
#line 88 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
eTrigger  . penCaused  -> SendEvent  (eAutoAction );
#line 89 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
}
#line 90 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
return TRUE ;
#line 91 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
}
#line 92 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
return FALSE ;
#line 93 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
}
BOOL CPlayerActionMarker::
#line 97 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CPlayerActionMarker_Main
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CPlayerActionMarker::Main expects 'EVoid' as input!");  const EVoid &e = (const EVoid &)__eeInput;
#line 99 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
InitAsEditorModel  ();
#line 100 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
SetPhysicsFlags  (EPF_MODEL_IMMATERIAL );
#line 101 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 104 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
SetModel  (MODEL_MARKER );
#line 105 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
SetModelMainTexture  (TEXTURE_MARKER );
#line 107 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
m_tmWait  = ClampDn  (m_tmWait  , 0.05f);
#line 109 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
Return(STATE_CURRENT,EVoid());
#line 109 "D:/SE1_GPL/Sources/EntitiesMP/PlayerActionMarker.es"
return TRUE; ASSERT(FALSE); return TRUE;};