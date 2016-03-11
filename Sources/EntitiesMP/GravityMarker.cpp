/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 4 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"

#include "StdH.h"

#include <EntitiesMP/GravityMarker.h>
#include <EntitiesMP/GravityMarker_tables.h>
void CGravityMarker::SetDefaultProperties(void) {
  m_gtType = LT_PARALLEL ;
  m_fStrength = 1;
  m_rFallOff = 50;
  m_rHotSpot = 50;
  m_rTorusR = 100;
  m_fAcc = 0;
  m_fSign = 1;
  m_fStep = 0;
  m_aForceDir = ANGLE3D(0 , 0 , 0);
  m_fForceA = 0.0f;
  m_fForceV = 0.0f;
  m_vForceDir = FLOAT3D(1 , 0 , 0);
  CMarker::SetDefaultProperties();
}
  
#line 45 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
inline FLOAT CGravityMarker::StrengthAtDistance(FLOAT fDistance) 
#line 46 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
{
#line 47 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
FLOAT fStrength  = (m_rFallOff  - fDistance ) * m_fStep ;
#line 48 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
return Clamp  (fStrength  , 0.0f , m_fAcc );
#line 49 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
}
  
#line 52 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
const CTString & CGravityMarker::GetForceName(INDEX i) 
#line 53 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
{
#line 54 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
return m_strName ;
#line 55 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
}
  
#line 57 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
void CGravityMarker::GetForce(INDEX i,const FLOAT3D & vPoint,
#line 58 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
CForceStrength & fsGravity,CForceStrength & fsField) 
#line 59 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
{
#line 60 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
const FLOATmatrix3D & m  = GetRotationMatrix  ();
#line 61 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
switch(m_gtType ){
#line 62 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
case LT_PARALLEL : {
#line 63 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsGravity  . fs_vDirection  (1) = - m  (1 , 2) * m_fSign ;
#line 64 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsGravity  . fs_vDirection  (2) = - m  (2 , 2) * m_fSign ;
#line 65 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsGravity  . fs_vDirection  (3) = - m  (3 , 2) * m_fSign ;
#line 66 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
FLOAT fDistance  = (vPoint  - GetPlacement  () . pl_PositionVector ) % fsGravity  . fs_vDirection ;
#line 67 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsGravity  . fs_fAcceleration  = StrengthAtDistance  (fDistance );
#line 68 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsGravity  . fs_fVelocity  = 70;
#line 69 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
}break ;
#line 70 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
case LT_CENTRAL : {
#line 71 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsGravity  . fs_vDirection  = (GetPlacement  () . pl_PositionVector  - vPoint ) * m_fSign ;
#line 72 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
FLOAT fDistance  = fsGravity  . fs_vDirection  . Length  ();
#line 73 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
if(fDistance  > 0.01f){
#line 74 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsGravity  . fs_vDirection  /= fDistance ;
#line 75 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
}
#line 76 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsGravity  . fs_fAcceleration  = StrengthAtDistance  (fDistance );
#line 77 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsGravity  . fs_fVelocity  = 70;
#line 78 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
}break ;
#line 79 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
case LT_CYLINDRICAL : {
#line 80 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
FLOAT3D vDelta  = GetPlacement  () . pl_PositionVector  - vPoint ;
#line 81 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
FLOAT3D vAxis ;
#line 82 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
vAxis  (1) = m  (1 , 2);
#line 83 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
vAxis  (2) = m  (2 , 2);
#line 84 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
vAxis  (3) = m  (3 , 2);
#line 85 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
GetNormalComponent  (vDelta  , vAxis  , fsGravity  . fs_vDirection );
#line 86 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsGravity  . fs_vDirection  *= m_fSign ;
#line 87 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
FLOAT fDistance  = fsGravity  . fs_vDirection  . Length  ();
#line 88 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
if(fDistance  > 0.01f){
#line 89 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsGravity  . fs_vDirection  /= fDistance ;
#line 90 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
}
#line 91 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsGravity  . fs_fAcceleration  = StrengthAtDistance  (fDistance );
#line 92 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsGravity  . fs_fVelocity  = 70;
#line 93 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
}break ;
#line 94 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
case LT_TORUS : {
#line 96 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
FLOAT3D vDelta  = vPoint  - GetPlacement  () . pl_PositionVector ;
#line 97 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
FLOAT3D vAxis ;
#line 98 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
vAxis  (1) = m  (1 , 2);
#line 99 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
vAxis  (2) = m  (2 , 2);
#line 100 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
vAxis  (3) = m  (3 , 2);
#line 101 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
FLOAT3D vR ;
#line 102 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
GetNormalComponent  (vDelta  , vAxis  , vR );
#line 103 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
vR  . Normalize  ();
#line 104 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsGravity  . fs_vDirection  = (vDelta  - vR  * m_rTorusR ) * m_fSign ;
#line 105 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
FLOAT fDistance  = fsGravity  . fs_vDirection  . Length  ();
#line 106 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
if(fDistance  > 0.01f){
#line 107 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsGravity  . fs_vDirection  /= fDistance ;
#line 108 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
}
#line 109 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsGravity  . fs_fAcceleration  = StrengthAtDistance  (fDistance );
#line 110 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsGravity  . fs_fVelocity  = 70;
#line 112 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
}break ;
#line 113 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
default  : 
#line 114 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsGravity  . fs_fAcceleration  = m_fAcc ;
#line 115 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsGravity  . fs_fVelocity  = 70;
#line 116 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsGravity  . fs_vDirection  = FLOAT3D (0 , - 1 , 0);
#line 117 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
}
#line 120 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsField  . fs_fAcceleration  = m_fForceA ;
#line 121 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsField  . fs_fVelocity  = m_fForceV ;
#line 122 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
fsField  . fs_vDirection  = m_vForceDir ;
#line 123 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
}
  
#line 126 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
BOOL CGravityMarker::HandleEvent(const CEntityEvent & ee) 
#line 127 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
{
#line 128 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
if(ee  . ee_slEvent  == EVENTCODE_ETrigger )
#line 129 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
{
#line 130 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
EChangeGravity  eChangeGravity ;
#line 131 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
eChangeGravity  . penNewGravity  = this ;
#line 132 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
m_penTarget  -> SendEvent  (eChangeGravity );
#line 133 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
return TRUE ;
#line 134 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
}
#line 135 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
return FALSE ;
#line 136 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
}
BOOL CGravityMarker::
#line 139 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CGravityMarker_Main
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CGravityMarker::Main expects 'EVoid' as input!");  const EVoid &e = (const EVoid &)__eeInput;
#line 141 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
InitAsEditorModel  ();
#line 142 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
SetPhysicsFlags  (EPF_MODEL_IMMATERIAL );
#line 143 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 146 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
SetModel  (MODEL_MARKER );
#line 147 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
SetModelMainTexture  (TEXTURE_MARKER );
#line 150 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
if(m_strName  == "Marker"){
#line 151 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
m_strName  = "Gravity Marker";
#line 152 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
}
#line 155 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
m_fAcc  = Abs  (30 * m_fStrength ) , 
#line 156 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
m_fSign  = SgnNZ  (m_fStrength ) , 
#line 157 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
m_fStep  = m_fAcc  / (m_rFallOff  - m_rHotSpot );
#line 159 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
AnglesToDirectionVector  (m_aForceDir  , m_vForceDir );
#line 161 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
Return(STATE_CURRENT,EVoid());
#line 161 "D:/SE1_GPL/Sources/EntitiesMP/GravityMarker.es"
return TRUE; ASSERT(FALSE); return TRUE;};