/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _EntitiesMP_Flame_INCLUDED
#define _EntitiesMP_Flame_INCLUDED 1
#include <EntitiesMP/Light.h>
#define EVENTCODE_EFlame 0x01f80000
class DECL_DLL EFlame : public CEntityEvent {
public:
EFlame();
CEntityEvent *MakeCopy(void);
CEntityPointer penOwner;
CEntityPointer penAttach;
};
DECL_DLL inline void ClearToDefault(EFlame &e) { e = EFlame(); } ;
#define EVENTCODE_EStopFlaming 0x01f80001
class DECL_DLL EStopFlaming : public CEntityEvent {
public:
EStopFlaming();
CEntityEvent *MakeCopy(void);
BOOL m_bNow;
};
DECL_DLL inline void ClearToDefault(EStopFlaming &e) { e = EStopFlaming(); } ;
extern "C" DECL_DLL CDLLEntityClass CFlame_DLLClass;
class CFlame : public CMovableModelEntity {
public:
virtual CEntity *GetPredictionPair(void) { return m_penPrediction; };
virtual void SetPredictionPair(CEntity *penPair) { m_penPrediction = penPair; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CEntityPointer m_penOwner;
  CEntityPointer m_penAttach;
  BOOL m_bLoop;
  FLOAT3D m_vHitPoint;
  CSoundObject m_soEffect;
  FLOAT m_tmStart;
  FLOAT m_fDamageToApply;
  FLOAT m_fDamageStep;
  FLOAT m_fAppliedDamage;
  FLOAT m_tmFirstStart;
  INDEX m_ctFlames;
  FLOAT3D m_vPos01;
  FLOAT3D m_vPos02;
  FLOAT3D m_vPos03;
  FLOAT3D m_vPos04;
  FLOAT3D m_vPos05;
  FLOAT3D m_vPos06;
  FLOAT3D m_vPos07;
  FLOAT3D m_vPos08;
  FLOAT3D m_vPos09;
  FLOAT3D m_vPos10;
  FLOAT3D m_vPlaneNormal;
  BOOL m_bBurningBrush;
  FLOAT m_tmDeathParticlesStart;
  CEntityPointer m_penPrediction;
CLightSource m_lsLightSource;
   
#line 88 "D:/SE1_GPL/Sources/EntitiesMP/Flame.es"
void AddDependentsToPrediction(void);
   
#line 93 "D:/SE1_GPL/Sources/EntitiesMP/Flame.es"
void PostMoving(void);
   
#line 112 "D:/SE1_GPL/Sources/EntitiesMP/Flame.es"
void Read_t(CTStream * istr);
   
#line 118 "D:/SE1_GPL/Sources/EntitiesMP/Flame.es"
BOOL IsPointInsidePolygon(const FLOAT3D & vPos,CBrushPolygon * pbpo);
   
#line 142 "D:/SE1_GPL/Sources/EntitiesMP/Flame.es"
CLightSource * GetLightSource(void);
   
#line 152 "D:/SE1_GPL/Sources/EntitiesMP/Flame.es"
void RenderParticles(void);
   
#line 178 "D:/SE1_GPL/Sources/EntitiesMP/Flame.es"
void SetupLightSource(void);
#define  STATE_CFlame_Main 1
  BOOL 
#line 212 "D:/SE1_GPL/Sources/EntitiesMP/Flame.es"
Main(const CEntityEvent &__eeInput);
  BOOL H0x01f80002_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x01f80003_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x01f80004_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x01f80005_Main_04(const CEntityEvent &__eeInput);
};
#endif // _EntitiesMP_Flame_INCLUDED
