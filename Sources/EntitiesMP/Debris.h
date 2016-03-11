/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _EntitiesMP_Debris_INCLUDED
#define _EntitiesMP_Debris_INCLUDED 1
#include <EntitiesMP/BasicEffects.h>
extern DECL_DLL CEntityPropertyEnumType DebrisParticlesType_enum;
enum DebrisParticlesType {
  DPT_NONE = 0,
  DPT_BLOODTRAIL = 1,
  DPR_SMOKETRAIL = 2,
  DPR_SPARKS = 3,
  DPR_FLYINGTRAIL = 4,
  DPT_AFTERBURNER = 5,
};
DECL_DLL inline void ClearToDefault(DebrisParticlesType &e) { e = (DebrisParticlesType)0; } ;
#define EVENTCODE_ESpawnDebris 0x025a0000
class DECL_DLL ESpawnDebris : public CEntityEvent {
public:
ESpawnDebris();
CEntityEvent *MakeCopy(void);
EntityInfoBodyType Eeibt;
CModelData * pmd;
FLOAT fSize;
CTextureData * ptd;
CTextureData * ptdRefl;
CTextureData * ptdSpec;
CTextureData * ptdBump;
INDEX iModelAnim;
enum DebrisParticlesType dptParticles;
enum BasicEffectType betStain;
COLOR colDebris;
BOOL bCustomShading;
ANGLE3D aShadingDirection;
COLOR colCustomAmbient;
COLOR colCustomDiffuse;
BOOL bImmaterialASAP;
FLOAT fDustStretch;
FLOAT3D vStretch;
CEntityPointer penFallFXPapa;
};
DECL_DLL inline void ClearToDefault(ESpawnDebris &e) { e = ESpawnDebris(); } ;
extern "C" DECL_DLL CDLLEntityClass CDebris_DLLClass;
class CDebris : public CMovableModelEntity {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  enum DebrisParticlesType m_dptParticles;
  INDEX m_iBodyType;
  BOOL m_bFade;
  FLOAT m_fFadeStartTime;
  FLOAT m_fFadeTime;
  FLOAT3D m_fLastStainHitPoint;
  enum BasicEffectType m_betStain;
  INDEX m_ctLeftStains;
  FLOAT m_tmStarted;
  FLOAT m_fStretch;
  ANGLE3D m_aShadingDirection;
  BOOL m_bCustomShading;
  COLOR m_colCustomAmbient;
  COLOR m_colCustomDiffuse;
  BOOL m_bImmaterialASAP;
  FLOAT m_fDustStretch;
  BOOL m_bTouchedGround;
  CEntityPointer m_penFallFXPapa;
   
#line 79 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
void * GetEntityInfo(void);
   
#line 84 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,
#line 85 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   
#line 99 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
BOOL AdjustShadingParameters(FLOAT3D & vLightDirection,COLOR & colLight,COLOR & colAmbient);
   
#line 127 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
void LeaveStain(void);
   
#line 165 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
void SpawnEffect(const CPlacement3D & plEffect,const class ESpawnEffect & eSpawnEffect);
   
#line 172 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
void RenderParticles(void);
   
#line 203 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
void Explode(void);
#define  STATE_CDebris_Main 1
  BOOL 
#line 221 "D:/SE1_GPL/Sources/EntitiesMP/Debris.es"
Main(const CEntityEvent &__eeInput);
  BOOL H0x025a0001_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x025a0002_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x025a0003_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x025a0004_Main_04(const CEntityEvent &__eeInput);
};
#endif // _EntitiesMP_Debris_INCLUDED
