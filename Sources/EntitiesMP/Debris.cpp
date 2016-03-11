/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 4 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"

#include "StdH.h"

#include <EntitiesMP/Debris.h>
#include <EntitiesMP/Debris_tables.h>
CEntityEvent *ESpawnDebris::MakeCopy(void) { CEntityEvent *peeCopy = new ESpawnDebris(*this); return peeCopy;}
ESpawnDebris::ESpawnDebris() : CEntityEvent(EVENTCODE_ESpawnDebris) {;
 ClearToDefault(Eeibt);
 ClearToDefault(pmd);
 ClearToDefault(fSize);
 ClearToDefault(ptd);
 ClearToDefault(ptdRefl);
 ClearToDefault(ptdSpec);
 ClearToDefault(ptdBump);
 ClearToDefault(iModelAnim);
 ClearToDefault(dptParticles);
 ClearToDefault(betStain);
 ClearToDefault(colDebris);
 ClearToDefault(bCustomShading);
 ClearToDefault(aShadingDirection);
 ClearToDefault(colCustomAmbient);
 ClearToDefault(colCustomDiffuse);
 ClearToDefault(bImmaterialASAP);
 ClearToDefault(fDustStretch);
 ClearToDefault(vStretch);
 ClearToDefault(penFallFXPapa);
};
#line 42 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"


void CDebris::SetDefaultProperties(void) {
  m_dptParticles = DPT_NONE ;
  m_iBodyType = 0;
  m_bFade = FALSE ;
  m_fFadeStartTime = 0.0f;
  m_fFadeTime = 0.0f;
  m_fLastStainHitPoint = FLOAT3D(0 , 0 , 0);
  m_betStain = BET_NONE ;
  m_ctLeftStains = 0;
  m_tmStarted = 0.0f;
  m_fStretch = 1.0f;
  m_aShadingDirection = ANGLE3D(0 , 0 , 0);
  m_bCustomShading = FALSE ;
  m_colCustomAmbient = COLOR(C_WHITE  | CT_OPAQUE );
  m_colCustomDiffuse = COLOR(C_WHITE  | CT_OPAQUE );
  m_bImmaterialASAP = FALSE ;
  m_fDustStretch = 0.0f;
  m_bTouchedGround = FALSE ;
  m_penFallFXPapa = NULL;
  CMovableModelEntity::SetDefaultProperties();
}
  
#line 79 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
void * CDebris::GetEntityInfo(void) {
#line 80 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
return GetStdEntityInfo  ((EntityInfoBodyType ) m_iBodyType );
#line 81 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
  
#line 84 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
void CDebris::ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,
#line 85 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection) 
#line 86 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
{
#line 88 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
if((_pTimer  -> CurrentTick  () - m_tmStarted  < 1.0f) 
#line 89 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
|| (dmtType  == DMT_CANNONBALL_EXPLOSION ) && (_pTimer  -> CurrentTick  () - m_tmStarted  < 5.0f)){
#line 90 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
return ;
#line 91 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
#line 92 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
CMovableModelEntity  :: ReceiveDamage  (penInflictor  , dmtType  , fDamageAmmount  , vHitPoint  , vDirection );
#line 93 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
  
#line 99 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
BOOL CDebris::AdjustShadingParameters(FLOAT3D & vLightDirection,COLOR & colLight,COLOR & colAmbient) 
#line 100 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
{
#line 101 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
if(m_bCustomShading )
#line 102 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
{
#line 103 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
colLight  = m_colCustomDiffuse ;
#line 104 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
colAmbient  = m_colCustomAmbient ;
#line 105 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
AnglesToDirectionVector  (m_aShadingDirection  , vLightDirection );
#line 106 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
vLightDirection  = - vLightDirection ;
#line 107 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
#line 109 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
if(m_bFade ){
#line 110 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
FLOAT fTimeRemain  = m_fFadeStartTime  + m_fFadeTime  - _pTimer  -> CurrentTick  ();
#line 111 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
if(fTimeRemain  < 0.0f){fTimeRemain  = 0.0f;}
#line 112 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
COLOR colAlpha  = GetModelObject  () -> mo_colBlendColor ;
#line 113 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
colAlpha  = (colAlpha  & 0xffffff00) + (COLOR (fTimeRemain  / m_fFadeTime  * 0xff) & 0xff);
#line 114 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
GetModelObject  () -> mo_colBlendColor  = colAlpha ;
#line 115 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
#line 117 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
return FALSE ;
#line 118 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
  
#line 127 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
void CDebris::LeaveStain(void) 
#line 128 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
{
#line 130 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
if(m_betStain  == BET_NONE ){
#line 132 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
return ;
#line 133 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
#line 136 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
if(m_ctLeftStains  > 5){
#line 137 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
return ;
#line 138 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
#line 139 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
ESpawnEffect  ese ;
#line 140 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
FLOAT3D vPoint ;
#line 141 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
FLOATplane3D plPlaneNormal ;
#line 142 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
FLOAT fDistanceToEdge ;
#line 145 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
if(GetNearestPolygon  (vPoint  , plPlaneNormal  , fDistanceToEdge )){
#line 147 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
if((m_fLastStainHitPoint  - vPoint ) . Length  () > 3.0f && 
#line 148 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
(vPoint  - GetPlacement  () . pl_PositionVector ) . Length  () < 3.5f){
#line 149 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
m_fLastStainHitPoint  = vPoint ;
#line 151 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
ese  . colMuliplier  = C_WHITE  | CT_OPAQUE ;
#line 152 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
ese  . betType  = m_betStain ;
#line 153 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
ese  . vNormal  = FLOAT3D (plPlaneNormal );
#line 154 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
GetNormalComponent  (en_vCurrentTranslationAbsolute  , plPlaneNormal  , ese  . vDirection );
#line 155 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
FLOAT fLength  = ese  . vDirection  . Length  () / 7.5f;
#line 156 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
fLength  = Clamp  (fLength  , 1.0f , 15.0f);
#line 157 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
ese  . vStretch  = FLOAT3D (1.0f , fLength  * 1.0f , 1.0f);
#line 158 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
SpawnEffect  (CPlacement3D (vPoint  + ese  . vNormal  / 50.0f * (FRnd  () + 0.5f) , ANGLE3D (0 , 0 , 0)) , ese );
#line 159 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
m_ctLeftStains  ++;
#line 160 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
#line 161 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
#line 162 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
  
#line 165 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
void CDebris::SpawnEffect(const CPlacement3D & plEffect,const class ESpawnEffect & eSpawnEffect) 
#line 166 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
{
#line 167 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
CEntityPointer penEffect  = CreateEntity  (plEffect  , CLASS_BASIC_EFFECT );
#line 168 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
penEffect  -> Initialize  (eSpawnEffect );
#line 169 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
  
#line 172 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
void CDebris::RenderParticles(void) 
#line 173 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
{
#line 175 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
if(en_vCurrentTranslationAbsolute  . Length  () < 0.1f){
#line 177 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
return ;
#line 178 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
#line 179 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
switch(m_dptParticles ){
#line 180 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
case DPT_BLOODTRAIL : {
#line 181 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
Particles_BloodTrail  (this );
#line 182 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}break ;
#line 183 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
case DPR_SMOKETRAIL : {
#line 184 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
Particles_GrenadeTrail  (this );
#line 185 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}break ;
#line 186 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
case DPR_SPARKS : {
#line 187 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
Particles_ColoredStarsTrail  (this );
#line 188 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}break ;
#line 189 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
case DPR_FLYINGTRAIL : {
#line 191 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
Particles_BombTrail  (this );
#line 192 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}break ;
#line 193 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
case DPT_AFTERBURNER : {
#line 194 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
Particles_AfterBurner  (this  , m_tmStarted  , 0.5f);
#line 195 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}break ;
#line 196 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
default  : ASSERT  (FALSE );
#line 197 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
case DPT_NONE : 
#line 198 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
return ;
#line 199 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
#line 200 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
  
#line 203 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
void CDebris::Explode(void) 
#line 204 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
{
#line 206 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
CPlacement3D plExplosion  = GetPlacement  ();
#line 207 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
CEntityPointer penExplosion  = CreateEntity  (plExplosion  , CLASS_BASIC_EFFECT );
#line 208 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
ESpawnEffect  eSpawnEffect ;
#line 209 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
eSpawnEffect  . colMuliplier  = C_WHITE  | CT_OPAQUE ;
#line 210 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
eSpawnEffect  . betType  = BET_BOMB ;
#line 211 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
eSpawnEffect  . vStretch  = FLOAT3D (0.3f , 0.3f , 0.3f);
#line 212 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
penExplosion  -> Initialize  (eSpawnEffect );
#line 213 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
BOOL CDebris::
#line 221 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CDebris_Main
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_ESpawnDebris, "CDebris::Main expects 'ESpawnDebris' as input!");  const ESpawnDebris &eSpawn = (const ESpawnDebris &)__eeInput;
#line 223 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
InitAsModel  ();
#line 224 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
SetPhysicsFlags  (EPF_MODEL_BOUNCING  | EPF_CANFADESPINNING );
#line 225 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
SetCollisionFlags  (ECF_DEBRIS );
#line 226 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
SetFlags  (GetFlags  () | ENF_SEETHROUGH );
#line 227 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
SetHealth  (25.0f);
#line 228 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
en_fBounceDampNormal  = 0.15f;
#line 229 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
en_fBounceDampParallel  = 0.5f;
#line 230 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
en_fJumpControlMultiplier  = 0.0f;
#line 233 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
if(eSpawn  . Eeibt  == EIBT_ICE ){
#line 234 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
en_fDensity  = 500.0f;
#line 235 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}else if(eSpawn  . Eeibt  == EIBT_WOOD ){
#line 236 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
en_fDensity  = 500.0f;
#line 237 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}else if(eSpawn  . Eeibt  == EIBT_FLESH ){
#line 238 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
en_fDensity  = 5000.0f;
#line 239 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
en_fBounceDampNormal  = 0.25f;
#line 240 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
en_fBounceDampParallel  = 0.75f;
#line 241 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}else if(TRUE ){
#line 242 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
en_fDensity  = 5000.0f;
#line 243 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
#line 246 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
m_dptParticles  = eSpawn  . dptParticles ;
#line 247 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
if(m_dptParticles  == DPT_AFTERBURNER )
#line 248 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
{
#line 249 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
Particles_AfterBurner_Prepare  (this );
#line 250 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
#line 251 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
m_betStain  = eSpawn  . betStain ;
#line 252 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
m_iBodyType  = (INDEX) eSpawn  . Eeibt ;
#line 253 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
GetModelObject  () -> SetData  (eSpawn  . pmd );
#line 254 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
GetModelObject  () -> mo_toTexture  . SetData  (eSpawn  . ptd );
#line 255 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
GetModelObject  () -> mo_toReflection  . SetData  (eSpawn  . ptdRefl );
#line 256 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
GetModelObject  () -> mo_toSpecular  . SetData  (eSpawn  . ptdSpec );
#line 257 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
GetModelObject  () -> mo_toBump  . SetData  (eSpawn  . ptdBump );
#line 258 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
GetModelObject  () -> PlayAnim  (eSpawn  . iModelAnim  , AOF_LOOPING );
#line 259 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
GetModelObject  () -> mo_Stretch  = FLOAT3D (eSpawn  . fSize  , eSpawn  . fSize  , eSpawn  . fSize );
#line 260 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
GetModelObject  () -> mo_Stretch  (1) *= eSpawn  . vStretch  (1);
#line 261 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
GetModelObject  () -> mo_Stretch  (2) *= eSpawn  . vStretch  (2);
#line 262 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
GetModelObject  () -> mo_Stretch  (3) *= eSpawn  . vStretch  (3);
#line 265 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
GetModelObject  () -> mo_colBlendColor  = eSpawn  . colDebris  | CT_OPAQUE ;
#line 266 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
m_bCustomShading  = eSpawn  . bCustomShading ;
#line 267 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
if(m_bCustomShading )
#line 268 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
{
#line 269 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
en_ulFlags  |= ENF_NOSHADINGINFO ;
#line 270 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
#line 271 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
m_aShadingDirection  = eSpawn  . aShadingDirection ;
#line 272 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
m_colCustomAmbient  = eSpawn  . colCustomAmbient ;
#line 273 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
m_colCustomDiffuse  = eSpawn  . colCustomDiffuse ;
#line 274 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
m_bImmaterialASAP  = eSpawn  . bImmaterialASAP ;
#line 275 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
m_fDustStretch  = eSpawn  . fDustStretch ;
#line 276 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
m_penFallFXPapa  = eSpawn  . penFallFXPapa ;
#line 278 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
ModelChangeNotify  ();
#line 279 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
FLOATaabbox3D box ;
#line 280 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
GetBoundingBox  (box );
#line 281 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
FLOAT fEntitySize  = box  . Size  () . MaxNorm  ();
#line 282 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
if(fEntitySize  > 0.5f){
#line 283 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
SetCollisionFlags  (ECF_MODEL );
#line 284 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
#line 285 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
en_fCollisionSpeedLimit  += ClampDn  (0.0f , fEntitySize  * 10.0f);
#line 286 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
m_bFade  = FALSE ;
#line 287 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
m_fLastStainHitPoint  = FLOAT3D (32000.0f , 32000.0f , 32000.0f);
#line 288 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
m_ctLeftStains  = 0;
#line 289 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
m_tmStarted  = _pTimer  -> CurrentTick  ();
#line 290 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
m_bTouchedGround  = FALSE ;
#line 293 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
FLOAT fWaitBeforeFade  = FRnd  () * 2.0f + 3.0f;
#line 294 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
SetTimerAfter(fWaitBeforeFade );
Jump(STATE_CURRENT, 0x025a0001, FALSE, EBegin());return TRUE;}BOOL CDebris::H0x025a0001_Main_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x025a0001
switch(__eeInput.ee_slEvent)
#line 295 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
{case(EVENTCODE_EBegin):{const EBegin&e= (EBegin&)__eeInput;
return TRUE;}ASSERT(FALSE);break;case(EVENTCODE_ETouch):{const ETouch&etouch= (ETouch&)__eeInput;

#line 300 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
if(etouch  . penOther  -> GetRenderType  () == RT_BRUSH )
#line 301 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
{
#line 303 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
if(m_penFallFXPapa  != NULL  && ! m_bTouchedGround )
#line 304 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
{
#line 306 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
FOREACHINLIST  (CEntity  , en_lnInParent  , m_penFallFXPapa  -> en_lhChildren  , iten )
#line 307 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
{
#line 309 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
CEntity  * penNew  = GetWorld  () -> CopyEntityInWorld  (* iten  , GetPlacement  ());
#line 310 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
penNew  -> SetParent  (NULL );
#line 311 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
if(IsOfClass  (& * penNew  , "SoundHolder"))
#line 312 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
{
#line 313 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
penNew  -> SendEvent  (EStart  ());
#line 314 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
#line 315 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
else 
#line 316 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
{
#line 317 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
penNew  -> SendEvent  (ETrigger  ());
#line 318 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
#line 319 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
#line 320 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
#line 322 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
if(m_fDustStretch  > 0 && ! m_bTouchedGround )
#line 323 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
{
#line 325 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
CPlacement3D plDust  = GetPlacement  ();
#line 326 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
plDust  . pl_PositionVector  = plDust  . pl_PositionVector  + FLOAT3D (0 , m_fDustStretch  * 0.25f , 0);
#line 328 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
ESpawnEffect  ese ;
#line 329 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
ese  . colMuliplier  = C_WHITE  | CT_OPAQUE ;
#line 330 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
ese  . vStretch  = FLOAT3D (m_fDustStretch  , m_fDustStretch  , m_fDustStretch );
#line 331 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
ese  . vNormal  = FLOAT3D (0 , 1 , 0);
#line 332 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
ese  . betType  = BET_DUST_FALL ;
#line 333 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
CEntityPointer penFX  = CreateEntity  (plDust  , CLASS_BASIC_EFFECT );
#line 334 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
penFX  -> Initialize  (ese );
#line 335 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
#line 336 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
m_bTouchedGround  = TRUE ;
#line 339 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
LeaveStain  ();
#line 341 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
if(m_iBodyType  == EIBT_ROBOT )
#line 342 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
{
#line 344 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
Explode  ();
#line 345 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
SendEvent  (EDeath  ());
#line 346 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
return TRUE;
#line 347 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
#line 348 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
#line 349 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
if(m_bImmaterialASAP )
#line 350 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
{
#line 351 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
SetCollisionFlags  (ECF_DEBRIS );
#line 352 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}
#line 353 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
return TRUE;
#line 354 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}ASSERT(FALSE);break;case(EVENTCODE_EDeath):{const EDeath&e= (EDeath&)__eeInput;
Destroy  ();Return(STATE_CURRENT,EVoid());return TRUE;}ASSERT(FALSE);break;case(EVENTCODE_ETimer):{const ETimer&e= (ETimer&)__eeInput;
UnsetTimer();Jump(STATE_CURRENT,0x025a0002, FALSE, EInternal());return TRUE;}ASSERT(FALSE);break;default: return FALSE; break;
#line 357 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
}return TRUE;}BOOL CDebris::H0x025a0002_Main_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x025a0002

#line 360 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
SetCollisionFlags  (ECF_DEBRIS );
#line 361 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
m_fFadeStartTime  = _pTimer  -> CurrentTick  ();
#line 362 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
m_fFadeTime  = 5.0f;
#line 363 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
m_bFade  = TRUE ;
#line 364 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
SetTimerAfter(m_fFadeTime );
Jump(STATE_CURRENT, 0x025a0003, FALSE, EBegin());return TRUE;}BOOL CDebris::H0x025a0003_Main_03(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x025a0003
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x025a0004, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CDebris::H0x025a0004_Main_04(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x025a0004
;
#line 367 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
Destroy  ();
#line 369 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
Return(STATE_CURRENT,EVoid());
#line 369 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
return TRUE; ASSERT(FALSE); return TRUE;};