/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _EntitiesMP_Eruptor_INCLUDED
#define _EntitiesMP_Eruptor_INCLUDED 1
#include <EntitiesMP/ModelHolder2.h>
#include <EntitiesMP/Projectile.h>
extern "C" DECL_DLL CDLLEntityClass CEruptor_DLLClass;
class CEruptor : public CModelHolder2 {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  FLOAT m_fStretchAll;
  FLOAT m_fStretchX;
  FLOAT m_fStretchY;
  FLOAT m_fStretchZ;
  BOOL m_bRandomStretch;
  FLOAT m_fStretchHeight;
  FLOAT m_fStretchWidth;
  FLOAT m_fStretchDepth;
  FLOAT m_fAngle;
  FLOAT m_fMaxSpeed;
  FLOAT m_fMinSpeed;
  FLOAT m_fTime;
  FLOAT m_fRandomWait;
  enum ProjectileType m_ptType;
  BOOL m_bShootInArc;
  FLOAT m_fProjectileStretch;
   
#line 44 "D:/SE1_GPL/Sources/EntitiesMP/Eruptor.es"
void Precache(void);
   
#line 49 "D:/SE1_GPL/Sources/EntitiesMP/Eruptor.es"
void CalculateAngularLaunchParams(
#line 50 "D:/SE1_GPL/Sources/EntitiesMP/Eruptor.es"
CMovableEntity * penTarget,
#line 51 "D:/SE1_GPL/Sources/EntitiesMP/Eruptor.es"
FLOAT3D vShooting,
#line 52 "D:/SE1_GPL/Sources/EntitiesMP/Eruptor.es"
FLOAT3D vTarget,FLOAT3D vSpeedDest,
#line 53 "D:/SE1_GPL/Sources/EntitiesMP/Eruptor.es"
ANGLE aPitch,
#line 54 "D:/SE1_GPL/Sources/EntitiesMP/Eruptor.es"
ANGLE & aHeading,
#line 55 "D:/SE1_GPL/Sources/EntitiesMP/Eruptor.es"
FLOAT & fLaunchSpeed);
   
#line 91 "D:/SE1_GPL/Sources/EntitiesMP/Eruptor.es"
void SpawnShoot(CEntity * penTarget);
   
#line 142 "D:/SE1_GPL/Sources/EntitiesMP/Eruptor.es"
void SpawnRandom(void);
   
#line 155 "D:/SE1_GPL/Sources/EntitiesMP/Eruptor.es"
void SpawnProjectile(const CPlacement3D & pl,FLOAT fSpeed);
#define  STATE_CEruptor_Active 0x00d50000
  BOOL 
#line 188 "D:/SE1_GPL/Sources/EntitiesMP/Eruptor.es"
Active(const CEntityEvent &__eeInput);
  BOOL H0x00d50001_Active_01(const CEntityEvent &__eeInput);
  BOOL H0x00d50002_Active_02(const CEntityEvent &__eeInput);
#define  STATE_CEruptor_Inactive 0x00d50003
  BOOL 
#line 197 "D:/SE1_GPL/Sources/EntitiesMP/Eruptor.es"
Inactive(const CEntityEvent &__eeInput);
  BOOL H0x00d50004_Inactive_01(const CEntityEvent &__eeInput);
  BOOL H0x00d50005_Inactive_02(const CEntityEvent &__eeInput);
#define  STATE_CEruptor_AutoSpawns 0x00d50006
  BOOL 
#line 206 "D:/SE1_GPL/Sources/EntitiesMP/Eruptor.es"
AutoSpawns(const CEntityEvent &__eeInput);
  BOOL H0x00d50007_AutoSpawns_01(const CEntityEvent &__eeInput);
  BOOL H0x00d50008_AutoSpawns_02(const CEntityEvent &__eeInput);
  BOOL H0x00d50009_AutoSpawns_03(const CEntityEvent &__eeInput);
  BOOL H0x00d5000a_AutoSpawns_04(const CEntityEvent &__eeInput);
  BOOL H0x00d5000b_AutoSpawns_05(const CEntityEvent &__eeInput);
  BOOL H0x00d5000c_AutoSpawns_06(const CEntityEvent &__eeInput);
  BOOL H0x00d5000d_AutoSpawns_07(const CEntityEvent &__eeInput);
#define  STATE_CEruptor_MainLoop 0x00d5000e
  BOOL 
#line 226 "D:/SE1_GPL/Sources/EntitiesMP/Eruptor.es"
MainLoop(const CEntityEvent &__eeInput);
  BOOL H0x00d5000f_MainLoop_01(const CEntityEvent &__eeInput);
  BOOL H0x00d50010_MainLoop_02(const CEntityEvent &__eeInput);
#define  STATE_CEruptor_Main 1
  BOOL 
#line 244 "D:/SE1_GPL/Sources/EntitiesMP/Eruptor.es"
Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesMP_Eruptor_INCLUDED
