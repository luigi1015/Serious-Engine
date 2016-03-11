/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 4 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"

#include "StdH.h"
#include "ModelsMP/Enemies/CannonStatic/Turret.h"


#include <EntitiesMP/CannonStatic.h>
#include <EntitiesMP/CannonStatic_tables.h>
#line 16 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"

#define CANNONS_SIZE 2.0f
  
// info structure
static EntityInfo eiCannonStatic = {
  EIBT_WOOD, 10000.0f,
  0.0f, 1.5f*CANNONS_SIZE, 0.0f,     // source (eyes)
  0.0f, 0.5f*CANNONS_SIZE, 0.0f,     // target (body)
};

#define FIRING_POSITION_MUZZLE FLOAT3D(0.0f, 0.4f, -1.0f)
#define MUZZLE_ROTATION_SPEED 45.0f //deg/sec


void CCannonStatic::SetDefaultProperties(void) {
  m_fHealth = 100.0f;
  m_fFiringRangeClose = 50.0f;
  m_fFiringRangeFar = 150.0f;
  m_fShootingPeriod = 5.0f;
  m_fSize = CANNONS_SIZE ;
  m_fMaxPitch = 20.0f;
  m_fViewAngle = 2.5f;
  m_bActive = TRUE ;
  m_fRotSpeedMuzzle = ANGLE3D(0.0f , 0.0f , 0.0f);
  m_fDistanceToPlayer = 0.0f;
  m_fDesiredMuzzlePitch = 0.0f;
  m_iMuzzleDir = 1;
  m_vFiringPos = FLOAT3D(0.0f , 0.0f , 0.0f);
  m_vTarget = FLOAT3D(0.0f , 0.0f , 0.0f);
  m_aBeginMuzzleRotation = ANGLE3D(0.0f , 0.0f , 0.0f);
  m_aEndMuzzleRotation = ANGLE3D(0.0f , 0.0f , 0.0f);
  CEnemyBase::SetDefaultProperties();
}
  CTString CCannonStatic::GetPlayerKillDescription(const CTString & strPlayerName,const EDeath & eDeath) 
#line 82 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
{
#line 83 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
CTString str ;
#line 84 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
str  . PrintF  (TRANS  ("A Cannon killed %s") , strPlayerName );
#line 85 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
return str ;
#line 86 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
  
#line 89 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
void * CCannonStatic::GetEntityInfo(void) {
#line 90 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
return & eiCannonStatic ;
#line 91 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
  const CTFileName & CCannonStatic::GetComputerMessageName(void)const {
#line 94 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
static DECLARE_CTFILENAME  (fnmCannon  , "DataMP\\Messages\\Enemies\\CannonStatic.txt");
#line 95 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
return fnmCannon ;
#line 96 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
  
#line 98 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
void CCannonStatic::Precache(void) {
#line 99 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
CEnemyBase  :: Precache  ();
#line 100 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
PrecacheModel  (MODEL_DEBRIS_MUZZLE );
#line 101 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
PrecacheModel  (MODEL_DEBRIS_WHEEL );
#line 102 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
PrecacheModel  (MODEL_DEBRIS_WOOD );
#line 103 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
PrecacheModel  (MODEL_BALL );
#line 105 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
PrecacheTexture  (TEXTURE_BALL );
#line 107 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
PrecacheSound  (SOUND_FIRE );
#line 109 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
PrecacheClass  (CLASS_CANNONBALL );
#line 110 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
  
#line 113 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
void CCannonStatic::ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,
#line 114 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection) 
#line 115 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
{
#line 117 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
if(dmtType  == DMT_BULLET  && fDamageAmmount  > 100.0f)
#line 118 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
{
#line 119 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
fDamageAmmount  *= 0.5f;
#line 120 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
#line 122 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
CEnemyBase  :: ReceiveDamage  (penInflictor  , dmtType  , fDamageAmmount  , 
#line 123 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
vHitPoint  , vDirection );
#line 124 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
  
#line 127 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
INDEX CCannonStatic::AnimForDamage(FLOAT fDamage) {
#line 128 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
return 0;
#line 129 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
  
#line 132 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
INDEX CCannonStatic::AnimForDeath(void) {
#line 133 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
return 0;
#line 134 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
  
#line 137 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
BOOL CCannonStatic::IsVisible(CEntity * penEntity) 
#line 138 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
{
#line 139 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
ASSERT  (penEntity  != NULL );
#line 141 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT3D vSource  , vTarget ;
#line 142 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
GetPositionCastRay  (this  , penEntity  , vSource  , vTarget );
#line 145 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
CCastRay  crRay  (this  , vSource  , vTarget );
#line 146 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
crRay  . cr_ttHitModels  = CCastRay  :: TT_NONE ;
#line 147 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
crRay  . cr_bHitTranslucentPortals  = FALSE ;
#line 148 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
en_pwoWorld  -> CastRay  (crRay );
#line 151 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
return (crRay  . cr_penHit  == NULL );
#line 152 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
  
#line 154 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
BOOL CCannonStatic::IsInTheLineOfFire(CEntity * penEntity,FLOAT fAngle) 
#line 155 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
{
#line 156 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
ASSERT  (penEntity  != NULL );
#line 158 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT fCosAngle ;
#line 159 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT3D vHeading ;
#line 160 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT3D vToPlayer ;
#line 162 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT3D vSide  = FLOAT3D (1.0f , 0.0f , 0.0f) * GetRotationMatrix  ();
#line 163 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT3D vFront  = FLOAT3D (0.0f , 0.0f , - 1.0f) * GetRotationMatrix  ();
#line 164 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
vToPlayer  = penEntity  -> GetPlacement  () . pl_PositionVector  - GetPlacement  () . pl_PositionVector ;
#line 165 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
vToPlayer  . Normalize  ();
#line 167 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
fCosAngle  = vToPlayer  % vSide ;
#line 170 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
if(Abs  (fCosAngle ) < CosFast  (90.0f - fAngle )){
#line 172 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
if((vToPlayer  % vFront ) > 0.0f){
#line 173 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
return TRUE ;
#line 174 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
#line 175 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
#line 176 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
return FALSE ;
#line 177 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
  
#line 179 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
CPlayer * CCannonStatic::AcquireTarget() {
#line 181 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
INDEX ctMaxPlayers  = GetMaxPlayers  ();
#line 182 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
CEntity  * penPlayer ;
#line 184 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
for(INDEX i  = 0;i  < ctMaxPlayers ;i  ++){
#line 185 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
penPlayer  = GetPlayerEntity  (i );
#line 186 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
if(penPlayer  != NULL  && DistanceTo  (this  , penPlayer ) < m_fFiringRangeFar ){
#line 188 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
if(IsInTheLineOfFire  (penPlayer  , m_fViewAngle )){
#line 190 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
if(IsVisible  (penPlayer )){
#line 191 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
return (CPlayer  *) penPlayer ;
#line 192 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
#line 193 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
#line 194 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
#line 195 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
#line 196 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
return NULL ;
#line 197 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
  
#line 200 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
void CCannonStatic::CannonBlowUp(void) 
#line 201 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
{
#line 202 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT3D vNormalizedDamage  = m_vDamage  - m_vDamage  * (m_fBlowUpAmount  / m_vDamage  . Length  ());
#line 203 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
vNormalizedDamage  /= Sqrt  (vNormalizedDamage  . Length  ());
#line 204 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
vNormalizedDamage  *= 0.75f;
#line 205 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
vNormalizedDamage  += FLOAT3D (0.0f , 10.0f + FRnd  () * 10.0f , 0.0f);
#line 207 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT3D vBodySpeed  = en_vCurrentTranslationAbsolute  - en_vGravityDir  * (en_vGravityDir  % en_vCurrentTranslationAbsolute );
#line 210 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Debris_Begin  (EIBT_WOOD  , DPT_NONE  , BET_NONE  , 1.0f , vNormalizedDamage  , vBodySpeed  , 5.0f , 2.0f);
#line 212 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Debris_Spawn  (this  , this  , MODEL_DEBRIS_MUZZLE  , TEXTURE_CANNON  , 0 , 0 , 0 , 0 , m_fSize  , 
#line 213 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT3D (FRnd  () * 0.6f + 0.2f , FRnd  () * 0.6f + 0.2f , FRnd  () * 0.6f + 0.2f));
#line 214 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Debris_Spawn  (this  , this  , MODEL_DEBRIS_WHEEL  , TEXTURE_TURRET  , 0 , 0 , 0 , 0 , m_fSize  , 
#line 215 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT3D (FRnd  () * 0.6f + 0.2f , FRnd  () * 0.6f + 0.2f , FRnd  () * 0.6f + 0.2f));
#line 216 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Debris_Spawn  (this  , this  , MODEL_DEBRIS_WHEEL  , TEXTURE_TURRET  , 0 , 0 , 0 , 0 , m_fSize  , 
#line 217 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT3D (FRnd  () * 0.6f + 0.2f , FRnd  () * 0.6f + 0.2f , FRnd  () * 0.6f + 0.2f));
#line 218 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Debris_Spawn  (this  , this  , MODEL_DEBRIS_WOOD  , TEXTURE_TURRET  , 0 , 0 , 0 , 0 , m_fSize  , 
#line 219 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT3D (FRnd  () * 0.6f + 0.2f , FRnd  () * 0.6f + 0.2f , FRnd  () * 0.6f + 0.2f));
#line 220 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Debris_Spawn  (this  , this  , MODEL_DEBRIS_WOOD  , TEXTURE_TURRET  , 0 , 0 , 0 , 0 , m_fSize  , 
#line 221 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT3D (FRnd  () * 0.6f + 0.2f , FRnd  () * 0.6f + 0.2f , FRnd  () * 0.6f + 0.2f));
#line 222 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Debris_Spawn  (this  , this  , MODEL_BALL  , TEXTURE_BALL  , 0 , 0 , 0 , 0 , m_fSize  / 2.0f , 
#line 223 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT3D (FRnd  () * 0.6f + 0.2f , FRnd  () * 0.6f + 0.2f , FRnd  () * 0.6f + 0.2f));
#line 226 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
CPlacement3D plExplosion  = GetPlacement  ();
#line 227 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
CEntityPointer penExplosion  = CreateEntity  (plExplosion  , CLASS_BASIC_EFFECT );
#line 228 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
ESpawnEffect  eSpawnEffect ;
#line 229 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
eSpawnEffect  . colMuliplier  = C_WHITE  | CT_OPAQUE ;
#line 230 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
eSpawnEffect  . betType  = BET_CANNON ;
#line 231 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT fSize  = m_fBlowUpSize  * 1.0f;
#line 232 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
eSpawnEffect  . vStretch  = FLOAT3D (fSize  , fSize  , fSize );
#line 233 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
penExplosion  -> Initialize  (eSpawnEffect );
#line 236 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
plExplosion  = GetPlacement  ();
#line 237 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
penExplosion  = CreateEntity  (plExplosion  , CLASS_BASIC_EFFECT );
#line 238 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
eSpawnEffect  . colMuliplier  = C_WHITE  | CT_OPAQUE ;
#line 239 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
eSpawnEffect  . betType  = BET_CANNONSHOCKWAVE ;
#line 240 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
fSize  = m_fBlowUpSize  * 1.0f;
#line 241 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
eSpawnEffect  . vStretch  = FLOAT3D (fSize  , fSize  , fSize );
#line 242 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
penExplosion  -> Initialize  (eSpawnEffect );
#line 245 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
SwitchToEditorModel  ();
#line 246 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
SetPhysicsFlags  (EPF_MODEL_IMMATERIAL );
#line 247 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 248 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
  
#line 250 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
void CCannonStatic::PreMoving() {
#line 252 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
UpdateAttachmentRotations  ();
#line 253 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
CEnemyBase  :: PreMoving  ();
#line 254 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
  
#line 256 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
void CCannonStatic::PostMoving() {
#line 257 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
CEnemyBase  :: PostMoving  ();
#line 259 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
SetFlags  (GetFlags  () & ~ ENF_INRENDERING );
#line 260 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
  
#line 262 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
BOOL CCannonStatic::AdjustShadingParameters(FLOAT3D & vLightDirection,COLOR & colLight,COLOR & colAmbient) {
#line 263 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
CAttachmentModelObject  & amo0  = * GetModelObject  () -> GetAttachmentModel  (TURRET_ATTACHMENT_CANNON );
#line 265 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
amo0  . amo_plRelative  . pl_OrientationAngle  = Lerp  (m_aBeginMuzzleRotation  , m_aEndMuzzleRotation  , _pTimer  -> GetLerpFactor  ());
#line 266 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
return CEnemyBase  :: AdjustShadingParameters  (vLightDirection  , colLight  , colAmbient );
#line 267 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
  
#line 269 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
void CCannonStatic::UpdateAttachmentRotations(void) 
#line 270 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
{
#line 272 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_aBeginMuzzleRotation  = m_aEndMuzzleRotation ;
#line 273 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_aEndMuzzleRotation  += m_fRotSpeedMuzzle  * _pTimer  -> TickQuantum ;
#line 274 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
  
#line 276 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
void CCannonStatic::UpdateFiringPos() {
#line 277 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOATmatrix3D m ;
#line 279 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_vFiringPos  = FIRING_POSITION_MUZZLE  * m_fSize ;
#line 282 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
MakeRotationMatrixFast  (m  , m_aBeginMuzzleRotation );
#line 283 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_vFiringPos  = m_vFiringPos  * m ;
#line 286 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
CAttachmentModelObject  & amo0  = * GetModelObject  () -> GetAttachmentModel  (TURRET_ATTACHMENT_CANNON );
#line 287 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_vFiringPos  += amo0  . amo_plRelative  . pl_PositionVector ;
#line 288 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
BOOL CCannonStatic::
#line 292 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
MainLoop(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CCannonStatic_MainLoop
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CCannonStatic::MainLoop expects 'EVoid' as input!");  const EVoid &e = (const EVoid &)__eeInput;
#line 293 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
SetTimerAt(THINKTIME_NEVER);
Jump(STATE_CURRENT, 0x01590001, FALSE, EBegin());return TRUE;}BOOL CCannonStatic::H0x01590001_MainLoop_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x01590001
switch(__eeInput.ee_slEvent){case(EVENTCODE_EBegin):{const EBegin&e= (EBegin&)__eeInput;

#line 295 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Call(STATE_CURRENT, STATE_CCannonStatic_WatchPlayers, TRUE, EVoid());return TRUE;
#line 296 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
return TRUE;
#line 297 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}ASSERT(FALSE);break;case(EVENTCODE_EDeactivate):{const EDeactivate&e= (EDeactivate&)__eeInput;

#line 299 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Jump(STATE_CURRENT, STATE_CCannonStatic_Inactive, TRUE, EVoid());return TRUE;
#line 300 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}ASSERT(FALSE);break;case(EVENTCODE_EDeath):{const EDeath&eDeath= (EDeath&)__eeInput;

#line 302 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Jump(STATE_CURRENT, STATE_CCannonStatic_Die, TRUE, eDeath );return TRUE;
#line 303 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}ASSERT(FALSE);break;default: return FALSE; break;
#line 304 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}return TRUE;}BOOL CCannonStatic::H0x01590002_MainLoop_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x01590002
;
#line 305 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Return(STATE_CURRENT,EVoid());
#line 305 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
return TRUE; ASSERT(FALSE); return TRUE;};BOOL CCannonStatic::
#line 309 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Die(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CCannonStatic_Die
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EDeath, "CCannonStatic::Die expects 'EDeath' as input!");  const EDeath &eDeath = (const EDeath &)__eeInput;
#line 311 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
SetFlags  (GetFlags  () & ~ ENF_ALIVE );
#line 314 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
CEntityPointer penKiller  = eDeath  . eLastDamage  . penInflictor ;
#line 315 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
if(penKiller  == NULL  || ! IsOfClass  (penKiller  , "Player")){
#line 316 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
penKiller  = m_penEnemy ;
#line 317 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
#line 319 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
if(penKiller  == NULL  || ! IsOfClass  (penKiller  , "Player")){
#line 320 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
penKiller  = FixupCausedToPlayer  (this  , penKiller  , FALSE );
#line 321 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
#line 324 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
if(penKiller  != NULL ){
#line 326 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
EReceiveScore  eScore ;
#line 327 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
eScore  . iPoints  = m_iScore ;
#line 328 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
penKiller  -> SendEvent  (eScore );
#line 329 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
if(CountAsKill  ())
#line 330 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
{
#line 331 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
penKiller  -> SendEvent  (EKilledEnemy  ());
#line 332 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
#line 334 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
EComputerMessage  eMsg ;
#line 335 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
eMsg  . fnmMessage  = GetComputerMessageName  ();
#line 336 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
if(eMsg  . fnmMessage  != ""){
#line 337 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
penKiller  -> SendEvent  (eMsg );
#line 338 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
#line 339 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
#line 342 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
SendToTarget  (m_penDeathTarget  , m_eetDeathType  , penKiller );
#line 345 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
if(m_penSpawnerTarget ){
#line 346 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
SendToTarget  (m_penSpawnerTarget  , EET_TRIGGER  , this );
#line 347 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
#line 350 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
CannonBlowUp  ();
#line 351 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Destroy  ();
#line 352 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Return(STATE_CURRENT,EVoid());
#line 352 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
return TRUE; ASSERT(FALSE); return TRUE;};BOOL CCannonStatic::
#line 356 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
RotateMuzzle(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CCannonStatic_RotateMuzzle
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CCannonStatic::RotateMuzzle expects 'EVoid' as input!");  const EVoid &e = (const EVoid &)__eeInput;
#line 358 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT fDeltaP  = m_fDesiredMuzzlePitch  - m_aBeginMuzzleRotation  (2);
#line 361 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
if(Abs  (fDeltaP ) < 5.0f){Return(STATE_CURRENT,EReturn  ());return TRUE;}
#line 363 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_fRotSpeedMuzzle  = ANGLE3D (0.0f , MUZZLE_ROTATION_SPEED  * Sgn  (fDeltaP ) , 0.0f);
#line 364 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
SetTimerAfter(Abs  (fDeltaP  / MUZZLE_ROTATION_SPEED ));
Jump(STATE_CURRENT, 0x01590005, FALSE, EBegin());return TRUE;}BOOL CCannonStatic::H0x01590005_RotateMuzzle_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x01590005
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x01590006, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CCannonStatic::H0x01590006_RotateMuzzle_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x01590006
;
#line 365 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_fRotSpeedMuzzle  = ANGLE3D (0.0f , 0.0f , 0.0f);
#line 366 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
UpdateFiringPos  ();
#line 368 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Return(STATE_CURRENT,EReturn  ());
#line 368 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
return TRUE; ASSERT(FALSE); return TRUE;};BOOL CCannonStatic::
#line 371 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FireCannon(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CCannonStatic_FireCannon
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CCannonStatic::FireCannon expects 'EVoid' as input!");  const EVoid &e = (const EVoid &)__eeInput;
#line 373 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT3D vToTarget  = m_penEnemy  -> GetPlacement  () . pl_PositionVector  - 
#line 374 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
GetPlacement  () . pl_PositionVector  + m_vFiringPos ;
#line 375 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
vToTarget  . Normalize  ();
#line 378 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT3D vCannonFront  = FLOAT3D (0.0f , 0.0f , - 1.0f) * GetRotationMatrix  ();
#line 379 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
ANGLE aToPlayer  = ACos  (vToTarget  % vCannonFront );
#line 381 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT fPitch  = aToPlayer  + 5.0f;
#line 382 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT3D vCannonUp  = FLOAT3D (0.0 , 1.0f , 0.0f) * GetRotationMatrix  ();
#line 385 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
if(m_fDistanceToPlayer  > m_fFiringRangeFar ){
#line 386 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Return(STATE_CURRENT,EReturn  ());
#line 386 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
return TRUE;
#line 388 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}else if(vToTarget  % vCannonUp  < 0.0f){
#line 389 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
fPitch  = 5.0f;
#line 391 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}else if(m_fDistanceToPlayer  > m_fFiringRangeClose ){
#line 392 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
if(aToPlayer  < m_fMaxPitch ){
#line 393 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
fPitch  = aToPlayer  + m_fMaxPitch  * (m_fDistanceToPlayer  - m_fFiringRangeClose ) / (m_fFiringRangeFar  - m_fFiringRangeClose );
#line 394 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}else if(TRUE ){
#line 395 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
fPitch  = aToPlayer  + 10.0f + m_fMaxPitch  * (m_fDistanceToPlayer  - m_fFiringRangeClose ) / (m_fFiringRangeFar  - m_fFiringRangeClose );
#line 396 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
#line 398 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
fPitch  = Clamp  (fPitch  , 1.0f , 80.0f);
#line 399 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}
#line 401 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_vTarget  = m_penEnemy  -> GetPlacement  () . pl_PositionVector ;
#line 403 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_fDesiredMuzzlePitch  = fPitch ;
#line 404 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
STATE_CCannonStatic_RotateMuzzle, TRUE;
Jump(STATE_CURRENT, 0x01590008, FALSE, EBegin());return TRUE;}BOOL CCannonStatic::H0x01590008_FireCannon_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x01590008
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: Call(STATE_CURRENT, STATE_CCannonStatic_RotateMuzzle, TRUE, EVoid());return TRUE;case EVENTCODE_EReturn: Jump(STATE_CURRENT,0x01590009, FALSE, __eeInput); return TRUE;default: return FALSE; }}BOOL CCannonStatic::H0x01590009_FireCannon_02(const CEntityEvent &__eeInput){
#undef STATE_CURRENT
#define STATE_CURRENT 0x01590009
const EReturn&__e= (EReturn&)__eeInput;
;
#line 406 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT3D vShooting  = GetPlacement  () . pl_PositionVector  + m_vFiringPos ;
#line 407 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT3D vSpeedDest  = FLOAT3D (0.0f , 0.0f , 0.0f);
#line 408 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT fLaunchSpeed ;
#line 409 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT fRelativeHdg ;
#line 412 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
EntityInfo  * peiTarget  = (EntityInfo  *) (m_penEnemy  -> GetEntityInfo  ());
#line 413 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
CalculateAngularLaunchParams  (vShooting  , peiTarget  -> vTargetCenter  [ 1 ] - 6.0f / 3.0f , m_vTarget  , 
#line 414 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
vSpeedDest  , m_fDesiredMuzzlePitch  , fLaunchSpeed  , fRelativeHdg );
#line 417 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
FLOAT3D vShootTarget ;
#line 418 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
GetEntityInfoPosition  (m_penEnemy  , peiTarget  -> vTargetCenter  , vShootTarget );
#line 420 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
CPlacement3D pl ;
#line 421 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
PrepareFreeFlyingProjectile  (pl  , vShootTarget  , m_vFiringPos  , ANGLE3D (fRelativeHdg  , m_fDesiredMuzzlePitch  , 0));
#line 422 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
CEntityPointer penBall  = CreateEntity  (pl  , CLASS_CANNONBALL );
#line 423 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
ELaunchCannonBall  eLaunch ;
#line 424 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
eLaunch  . penLauncher  = this ;
#line 425 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
eLaunch  . fLaunchPower  = fLaunchSpeed ;
#line 426 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
eLaunch  . cbtType  = CBT_IRON ;
#line 427 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
eLaunch  . fSize  = 1.0f;
#line 428 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
penBall  -> Initialize  (eLaunch );
#line 430 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Return(STATE_CURRENT,EReturn  ());
#line 430 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
return TRUE; ASSERT(FALSE); return TRUE;};BOOL CCannonStatic::
#line 434 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
WatchPlayers(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CCannonStatic_WatchPlayers
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CCannonStatic::WatchPlayers expects 'EVoid' as input!");  const EVoid &e = (const EVoid &)__eeInput;
#line 438 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Jump(STATE_CURRENT,0x01590013, FALSE, EInternal());return TRUE;}BOOL CCannonStatic::H0x01590013_WatchPlayers_09(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x01590013
if(!(TRUE )){ Jump(STATE_CURRENT,0x01590014, FALSE, EInternal());return TRUE;}
#line 439 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
SetTimerAfter(0.20f);
Jump(STATE_CURRENT, 0x0159000b, FALSE, EBegin());return TRUE;}BOOL CCannonStatic::H0x0159000b_WatchPlayers_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x0159000b
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x0159000c, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CCannonStatic::H0x0159000c_WatchPlayers_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x0159000c
;
#line 440 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
CPlayer  * pTarget  = AcquireTarget  ();
#line 441 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
if(!(pTarget )){ Jump(STATE_CURRENT,0x01590012, FALSE, EInternal());return TRUE;}
#line 442 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
if(!((pTarget  -> GetFlags  () & ENF_ALIVE ) && ! (pTarget  -> GetFlags  () & ENF_DELETED ))){ Jump(STATE_CURRENT,0x01590011, FALSE, EInternal());return TRUE;}
#line 443 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_penEnemy  = pTarget ;
#line 444 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_fDistanceToPlayer  = DistanceTo  (this  , pTarget );
#line 445 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
STATE_CCannonStatic_FireCannon, TRUE;
Jump(STATE_CURRENT, 0x0159000d, FALSE, EBegin());return TRUE;}BOOL CCannonStatic::H0x0159000d_WatchPlayers_03(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x0159000d
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: Call(STATE_CURRENT, STATE_CCannonStatic_FireCannon, TRUE, EVoid());return TRUE;case EVENTCODE_EReturn: Jump(STATE_CURRENT,0x0159000e, FALSE, __eeInput); return TRUE;default: return FALSE; }}BOOL CCannonStatic::H0x0159000e_WatchPlayers_04(const CEntityEvent &__eeInput){
#undef STATE_CURRENT
#define STATE_CURRENT 0x0159000e
const EReturn&__e= (EReturn&)__eeInput;
;
#line 446 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
SetTimerAfter(m_fShootingPeriod );
Jump(STATE_CURRENT, 0x0159000f, FALSE, EBegin());return TRUE;}BOOL CCannonStatic::H0x0159000f_WatchPlayers_05(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x0159000f
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x01590010, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CCannonStatic::H0x01590010_WatchPlayers_06(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x01590010
;Jump(STATE_CURRENT,0x01590011, FALSE, EInternal());return TRUE;}BOOL CCannonStatic::H0x01590011_WatchPlayers_07(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x01590011
Jump(STATE_CURRENT,0x01590012, FALSE, EInternal());return TRUE;}BOOL CCannonStatic::H0x01590012_WatchPlayers_08(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x01590012
Jump(STATE_CURRENT,0x01590013, FALSE, EInternal());return TRUE;
#line 449 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}BOOL CCannonStatic::H0x01590014_WatchPlayers_10(const CEntityEvent &__eeInput) {
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x01590014
 ASSERT(FALSE); return TRUE;};BOOL CCannonStatic::
#line 452 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Inactive(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CCannonStatic_Inactive
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CCannonStatic::Inactive expects 'EVoid' as input!");  const EVoid &e = (const EVoid &)__eeInput;
#line 454 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_fRotSpeedMuzzle  = ANGLE3D (0.0f , 0.0f , 0.0f);
#line 455 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
SetTimerAt(THINKTIME_NEVER);
Jump(STATE_CURRENT, 0x01590016, FALSE, EBegin());return TRUE;}BOOL CCannonStatic::H0x01590016_Inactive_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x01590016
switch(__eeInput.ee_slEvent){case(EVENTCODE_EBegin):{const EBegin&e= (EBegin&)__eeInput;
return TRUE;}ASSERT(FALSE);break;case(EVENTCODE_EActivate):{const EActivate&e= (EActivate&)__eeInput;

#line 458 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Jump(STATE_CURRENT, STATE_CCannonStatic_MainLoop, TRUE, EVoid());return TRUE;
#line 459 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}ASSERT(FALSE);break;case(EVENTCODE_EDeath):{const EDeath&eDeath= (EDeath&)__eeInput;

#line 461 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Jump(STATE_CURRENT, STATE_CCannonStatic_Die, TRUE, eDeath );return TRUE;
#line 462 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}ASSERT(FALSE);break;default:{return TRUE;}ASSERT(FALSE);break;
#line 464 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
}return TRUE;}BOOL CCannonStatic::H0x01590017_Inactive_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x01590017
 ASSERT(FALSE); return TRUE;};BOOL CCannonStatic::
#line 467 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CCannonStatic_Main
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CCannonStatic::Main expects 'EVoid' as input!");  const EVoid &e = (const EVoid &)__eeInput;
#line 469 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
InitAsModel  ();
#line 470 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
SetPhysicsFlags  (EPF_MODEL_WALKING  | EPF_HASLUNGS );
#line 471 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
SetCollisionFlags  (ECF_MODEL );
#line 472 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
SetFlags  (GetFlags  () | ENF_ALIVE );
#line 473 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
en_fDensity  = 2000.0f;
#line 476 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
SetModel  (MODEL_TURRET );
#line 477 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
SetModelMainTexture  (TEXTURE_TURRET );
#line 479 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
AddAttachment  (TURRET_ATTACHMENT_CANNON  , MODEL_CANNON  , TEXTURE_CANNON );
#line 481 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_fWalkSpeed  = 0.0f;
#line 482 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_aWalkRotateSpeed  = 0.0f;
#line 483 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_fAttackRunSpeed  = 0.0f;
#line 484 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_aAttackRotateSpeed  = 0.0f;
#line 485 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_fCloseRunSpeed  = 0.0f;
#line 486 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_aCloseRotateSpeed  = 0.0f;
#line 488 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_fStopDistance  = 100.0f;
#line 490 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_fBlowUpAmount  = 100.0f;
#line 491 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_fBodyParts  = 4;
#line 492 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_fDamageWounded  = 0.0f;
#line 493 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_iScore  = 750;
#line 494 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_sptType  = SPT_WOOD ;
#line 497 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
if(m_fHealth  <= 0.0f){m_fHealth  = 1.0f;}
#line 498 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
m_fCloseFireTime  = m_fAttackFireTime  = m_fShootingPeriod ;
#line 499 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
SetHealth  (m_fHealth );m_fMaxHealth  = m_fHealth ;
#line 500 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
if(m_fFiringRangeFar  < m_fFiringRangeClose ){m_fFiringRangeFar  = m_fFiringRangeClose  + 1.0f;}
#line 503 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
GetModelObject  () -> StretchModel  (FLOAT3D (m_fSize  , m_fSize  , m_fSize ));
#line 505 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
ModelChangeNotify  ();
#line 506 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
StandingAnim  ();
#line 510 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
SetTimerAfter(0.05f);
Jump(STATE_CURRENT, 0x01590018, FALSE, EBegin());return TRUE;}BOOL CCannonStatic::H0x01590018_Main_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x01590018
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x01590019, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CCannonStatic::H0x01590019_Main_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x01590019
;
#line 511 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
SetDesiredTranslation  (FLOAT3D (0.0f , 0.0f , 0.0f));
#line 512 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
UpdateFiringPos  ();
#line 514 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
if(! m_bActive ){Jump(STATE_CURRENT, STATE_CCannonStatic_Inactive, TRUE, EVoid());return TRUE;}
#line 515 "D:/SE1_GPL/Sources/EntitiesMP/CannonStatic.es"
Jump(STATE_CURRENT, STATE_CCannonStatic_MainLoop, TRUE, EVoid());return TRUE; ASSERT(FALSE); return TRUE;};