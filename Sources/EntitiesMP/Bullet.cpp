/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 4 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"

#include "StdH.h"

#include <EntitiesMP/Bullet.h>
#include <EntitiesMP/Bullet_tables.h>
CEntityEvent *EBulletInit::MakeCopy(void) { CEntityEvent *peeCopy = new EBulletInit(*this); return peeCopy;}
EBulletInit::EBulletInit() : CEntityEvent(EVENTCODE_EBulletInit) {;
 ClearToDefault(penOwner);
 ClearToDefault(fDamage);
};
#line 18 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"

void CBullet_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) 
{
  pdec->PrecacheClass(CLASS_BASIC_EFFECT, BET_BULLETSTAINSTONE);
  pdec->PrecacheClass(CLASS_BASIC_EFFECT, BET_BULLETSTAINSAND);
  pdec->PrecacheClass(CLASS_BASIC_EFFECT, BET_BULLETSTAINREDSAND);
  pdec->PrecacheClass(CLASS_BASIC_EFFECT, BET_BULLETSTAINWATER);
  pdec->PrecacheClass(CLASS_BASIC_EFFECT, BET_BULLETSTAINSTONENOSOUND);
  pdec->PrecacheClass(CLASS_BASIC_EFFECT, BET_BULLETSTAINSANDNOSOUND);
  pdec->PrecacheClass(CLASS_BASIC_EFFECT, BET_BULLETSTAINREDSANDNOSOUND);
  pdec->PrecacheClass(CLASS_BASIC_EFFECT, BET_BULLETSTAINWATERNOSOUND);
  pdec->PrecacheClass(CLASS_BASIC_EFFECT, BET_BLOODSPILL);
  pdec->PrecacheClass(CLASS_BASIC_EFFECT, BET_BULLETTRAIL);
}

void CBullet::SetDefaultProperties(void) {
  m_penOwner = NULL;
  m_fDamage = 0.0f;
  m_vTarget = FLOAT3D(0 , 0 , 0);
  m_vTargetCopy = FLOAT3D(0 , 0 , 0);
  m_vHitPoint = FLOAT3D(0 , 0 , 0);
  m_iBullet = 0;
  m_EdtDamage = DMT_BULLET ;
  m_fBulletSize = 0.0f;
  CEntity::SetDefaultProperties();
}
  
#line 58 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
void CBullet::SetDamage(FLOAT fDamage) {
#line 59 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
m_fDamage  = fDamage ;
#line 60 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
  
#line 63 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
void CBullet::CalcTarget(FLOAT fRange) {
#line 65 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
AnglesToDirectionVector  (GetPlacement  () . pl_OrientationAngle  , m_vTarget );
#line 66 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
m_vTarget  *= fRange ;
#line 67 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
m_vTarget  += GetPlacement  () . pl_PositionVector ;
#line 68 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
m_vTargetCopy  = m_vTarget ;
#line 69 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
  
#line 71 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
void CBullet::CalcTarget(CEntity * pen,FLOAT fRange) {
#line 72 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
FLOAT3D vTarget ;
#line 75 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
EntityInfo  * peiTarget  = (EntityInfo  *) (pen  -> GetEntityInfo  ());
#line 76 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
GetEntityInfoPosition  (pen  , peiTarget  -> vTargetCenter  , vTarget );
#line 79 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
m_vTarget  = (vTarget  - GetPlacement  () . pl_PositionVector ) . Normalize  ();
#line 80 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
m_vTarget  *= fRange ;
#line 81 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
m_vTarget  += GetPlacement  () . pl_PositionVector ;
#line 82 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
m_vTargetCopy  = m_vTarget ;
#line 83 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
  
#line 86 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
void CBullet::CalcJitterTarget(FLOAT fR) {
#line 87 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
FLOAT3D vJitter ;
#line 98 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
FLOAT fZ  = FRnd  () * 2.0f - 1.0f;
#line 99 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
FLOAT fA  = FRnd  () * 360.0f;
#line 100 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
FLOAT fT  = Sqrt  (1 - (fZ  * fZ ));
#line 101 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
vJitter  (1) = fT  * CosFast  (fA );
#line 102 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
vJitter  (2) = fT  * SinFast  (fA );
#line 103 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
vJitter  (3) = fZ ;
#line 104 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
vJitter  = vJitter  * fR  * FRnd  ();
#line 107 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
m_vTarget  = m_vTargetCopy  + vJitter ;
#line 108 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
  
#line 111 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
void CBullet::CalcJitterTargetFixed(FLOAT fX,FLOAT fY,FLOAT fJitter) {
#line 112 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
FLOAT fRndX  = FRnd  () * 2.0f - 1.0f;
#line 113 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
FLOAT fRndY  = FRnd  () * 2.0f - 1.0f;
#line 114 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
FLOAT3D vX  , vY ;
#line 115 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
const FLOATmatrix3D & m  = GetRotationMatrix  ();
#line 116 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
vX  (1) = m  (1 , 1);vX  (2) = m  (2 , 1);vX  (3) = m  (3 , 1);
#line 117 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
vY  (1) = m  (1 , 2);vY  (2) = m  (2 , 2);vY  (3) = m  (3 , 2);
#line 119 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
m_vTarget  = m_vTargetCopy  + (vX  * (fX  + fRndX  * fJitter )) + (vY  * (fY  + fRndY  * fJitter ));
#line 120 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
  
#line 123 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
void CBullet::LaunchBullet(BOOL bSound,BOOL bTrail,BOOL bHitFX) 
#line 124 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
{
#line 126 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
CCastRay  crRay  (m_penOwner  , GetPlacement  () . pl_PositionVector  , m_vTarget );
#line 127 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
crRay  . cr_bHitPortals  = TRUE ;
#line 128 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
crRay  . cr_bHitTranslucentPortals  = TRUE ;
#line 129 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
crRay  . cr_ttHitModels  = CCastRay  :: TT_COLLISIONBOX ;
#line 130 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
crRay  . cr_bPhysical  = FALSE ;
#line 131 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
crRay  . cr_fTestR  = m_fBulletSize ;
#line 132 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
FLOAT3D vHitDirection ;
#line 133 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
AnglesToDirectionVector  (GetPlacement  () . pl_OrientationAngle  , vHitDirection );
#line 135 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
INDEX ctCasts  = 0;
#line 136 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
while(ctCasts  < 10)
#line 137 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
{
#line 138 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
if(ctCasts  == 0)
#line 139 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
{
#line 141 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
GetWorld  () -> CastRay  (crRay );
#line 142 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
#line 143 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
else 
#line 144 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
{
#line 146 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
GetWorld  () -> ContinueCast  (crRay );
#line 147 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
#line 148 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
ctCasts  ++;
#line 151 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
if(crRay  . cr_penHit  == NULL )
#line 152 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
{
#line 153 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
break ;
#line 154 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
#line 156 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
const FLOAT fDamageMul  = GetSeriousDamageMultiplier  (m_penOwner );
#line 157 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
InflictDirectDamage  (crRay  . cr_penHit  , m_penOwner  , m_EdtDamage  , m_fDamage  * fDamageMul  , 
#line 158 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
crRay  . cr_vHit  , vHitDirection );
#line 160 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
m_vHitPoint  = crRay  . cr_vHit ;
#line 163 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
if(crRay  . cr_penHit  -> GetRenderType  () == RT_BRUSH  && crRay  . cr_pbpoBrushPolygon  != NULL )
#line 164 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
{
#line 165 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
CBrushPolygon  * pbpo  = crRay  . cr_pbpoBrushPolygon ;
#line 166 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
FLOAT3D vHitNormal  = FLOAT3D (pbpo  -> bpo_pbplPlane  -> bpl_plAbsolute );
#line 168 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
INDEX iSurfaceType  = pbpo  -> bpo_bppProperties  . bpp_ubSurfaceType ;
#line 169 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
BulletHitType  bhtType  = BHT_BRUSH_STONE ;
#line 171 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
INDEX iContent  = pbpo  -> bpo_pbscSector  -> GetContentType  ();
#line 172 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
CContentType  & ct  = GetWorld  () -> wo_actContentTypes  [ iContent  ];
#line 174 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
bhtType  = (BulletHitType ) GetBulletHitTypeForSurface  (iSurfaceType );
#line 176 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
if(ct  . ct_ulFlags  & CTF_BREATHABLE_GILLS )
#line 177 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
{
#line 179 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
if(iSurfaceType  == SURFACE_WATER )
#line 180 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
{
#line 181 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
vHitNormal  = - vHitNormal ;
#line 183 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
bhtType  = BHT_BRUSH_WATER ;
#line 184 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
#line 186 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
else 
#line 187 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
{
#line 188 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
bhtType  = BHT_BRUSH_UNDER_WATER ;
#line 189 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
#line 190 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
#line 192 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
BOOL bPassable  = pbpo  -> bpo_ulFlags  & (BPOF_PASSABLE  | BPOF_SHOOTTHRU );
#line 193 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
if(! bPassable  || iSurfaceType  == SURFACE_WATER ){
#line 194 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
SpawnHitTypeEffect  (this  , bhtType  , bSound  , vHitNormal  , crRay  . cr_vHit  , vHitDirection  , FLOAT3D (0.0f , 0.0f , 0.0f));
#line 195 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
#line 196 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
if(! bPassable ){
#line 197 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
break ;
#line 198 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
#line 200 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}else {
#line 203 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
if(crRay  . cr_penHit  -> GetEntityInfo  () != NULL ){
#line 204 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
if(((EntityInfo  *) crRay  . cr_penHit  -> GetEntityInfo  ()) -> Eeibt  == EIBT_FLESH )
#line 205 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
{
#line 206 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
CEntity  * penOfFlesh  = crRay  . cr_penHit ;
#line 207 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
FLOAT3D vHitNormal  = (GetPlacement  () . pl_PositionVector  - m_vTarget ) . Normalize  ();
#line 208 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
FLOAT3D vOldHitPos  = crRay  . cr_vHit ;
#line 209 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
FLOAT3D vDistance ;
#line 212 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
GetWorld  () -> ContinueCast  (crRay );
#line 213 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
if(crRay  . cr_penHit  != NULL  && crRay  . cr_pbpoBrushPolygon  != NULL  && 
#line 214 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
crRay  . cr_penHit  -> GetRenderType  () == RT_BRUSH )
#line 215 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
{
#line 216 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
vDistance  = crRay  . cr_vHit  - vOldHitPos ;
#line 217 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
vHitNormal  = FLOAT3D (crRay  . cr_pbpoBrushPolygon  -> bpo_pbplPlane  -> bpl_plAbsolute );
#line 218 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
#line 219 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
else 
#line 220 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
{
#line 221 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
vDistance  = FLOAT3D (0.0f , 0.0f , 0.0f);
#line 222 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
vHitNormal  = FLOAT3D (0 , 0 , 0);
#line 223 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
#line 225 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
if(IsOfClass  (penOfFlesh  , "Gizmo") || 
#line 226 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
IsOfClass  (penOfFlesh  , "Beast"))
#line 227 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
{
#line 229 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
SpawnHitTypeEffect  (this  , BHT_ACID  , bSound  , vHitNormal  , crRay  . cr_vHit  , vHitDirection  , vDistance );
#line 230 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
#line 231 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
else 
#line 232 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
{
#line 234 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
SpawnHitTypeEffect  (this  , BHT_FLESH  , bSound  , vHitNormal  , crRay  . cr_vHit  , vHitDirection  , vDistance );
#line 235 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
#line 236 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
break ;
#line 237 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
#line 238 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
#line 241 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
break ;
#line 242 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
#line 243 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
#line 245 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
if(bTrail )
#line 246 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
{
#line 247 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
SpawnTrail  ();
#line 248 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
#line 249 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
  
#line 252 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
void CBullet::DestroyBullet(void) {
#line 253 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
Destroy  ();
#line 254 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
  
#line 262 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
void CBullet::SpawnTrail(void) 
#line 263 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
{
#line 265 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
const FLOAT3D & v0  = GetPlacement  () . pl_PositionVector ;
#line 266 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
const FLOAT3D & v1  = m_vHitPoint ;
#line 268 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
FLOAT3D vD  = v1  - v0 ;
#line 269 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
FLOAT fD  = vD  . Length  ();
#line 271 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
if(fD  < 1.0f){
#line 273 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
return ;
#line 274 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
#line 277 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
FLOAT fLen  = Min  (20.0f , fD );
#line 279 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
FLOAT3D vPos ;
#line 280 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
if(fLen  < fD ){
#line 281 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
vPos  = Lerp  (v0  , v1  , FRnd  () * (fD  - fLen ) / fD );
#line 282 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}else {
#line 283 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
vPos  = v0 ;
#line 284 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
#line 286 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
ESpawnEffect  ese ;
#line 287 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
UBYTE  ubRndH  = UBYTE  (8 + FRnd  () * 32);
#line 288 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
UBYTE  ubRndS  = UBYTE  (8 + FRnd  () * 32);
#line 289 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
UBYTE  ubRndV  = UBYTE  (224 + FRnd  () * 32);
#line 290 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
UBYTE  ubRndA  = UBYTE  (32 + FRnd  () * 128);
#line 291 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
ese  . colMuliplier  = HSVToColor  (ubRndH  , ubRndS  , ubRndV ) | ubRndA ;
#line 292 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
ese  . betType  = BET_BULLETTRAIL ;
#line 293 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
ese  . vNormal  = vD  / fD ;
#line 294 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
ese  . vStretch  = FLOAT3D (0.1f , fLen  , 1.0f);
#line 297 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
FLOAT3D vBulletIncommingDirection ;
#line 298 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
vBulletIncommingDirection  = (m_vTarget  - GetPlacement  () . pl_PositionVector ) . Normalize  ();
#line 299 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
CPlacement3D plHit  = CPlacement3D (vPos  - vBulletIncommingDirection  * 0.1f , GetPlacement  () . pl_OrientationAngle );
#line 300 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
CEntityPointer penHit  = CreateEntity  (plHit  , CLASS_BASIC_EFFECT );
#line 301 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
penHit  -> Initialize  (ese );
#line 302 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
}
BOOL CBullet::
#line 306 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CBullet_Main
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EBulletInit, "CBullet::Main expects 'EBulletInit' as input!");  const EBulletInit &eInit = (const EBulletInit &)__eeInput;
#line 309 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
ASSERT  (eInit  . penOwner  != NULL );
#line 310 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
m_penOwner  = eInit  . penOwner ;
#line 311 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
m_fDamage  = eInit  . fDamage ;
#line 313 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
InitAsVoid  ();
#line 314 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
SetPhysicsFlags  (EPF_MODEL_IMMATERIAL );
#line 315 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 318 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
m_iBullet  = 0;
#line 319 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
Return(STATE_CURRENT,EVoid());
#line 319 "D:/SE1_GPL/Sources/EntitiesMP/Bullet.es"
return TRUE; ASSERT(FALSE); return TRUE;};