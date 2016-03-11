/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _EntitiesMP_ParticlesHolder_INCLUDED
#define _EntitiesMP_ParticlesHolder_INCLUDED 1
extern DECL_DLL CEntityPropertyEnumType ParticlesHolderType_enum;
enum ParticlesHolderType {
  PHT_SPIRAL = 1,
  PHT_EMANATE = 2,
  PHT_STARDUST = 3,
  PHT_ATOMIC = 4,
  PHT_RISING = 5,
  PHT_FOUNTAIN = 6,
  PHT_SMOKE = 7,
  PHT_BLOOD = 8,
  PHT_EMANATEPLANE = 9,
  PHT_SANDFLOW = 10,
  PHT_WATERFLOW = 11,
  PHT_LAVAFLOW = 12,
  PHT_LAVAERUPTING = 13,
  PHT_WATERFALLFOAM = 14,
  PHT_CHIMNEYSMOKE = 15,
  PHT_WATERFALL = 16,
  PHT_TWISTER = 17,
  PHT_ROCKETMOTOR = 18,
  PHT_COLLECT_ENERGY = 19,
};
DECL_DLL inline void ClearToDefault(ParticlesHolderType &e) { e = (ParticlesHolderType)0; } ;
extern "C" DECL_DLL CDLLEntityClass CParticlesHolder_DLLClass;
class CParticlesHolder : public CMovableModelEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual const CTString &GetDescription(void) const { return m_strDescription; };
  DECL_DLL virtual void SetDefaultProperties(void);
  enum ParticlesHolderType m_phtType;
  enum ParticleTexture m_ptTexture;
  INDEX m_ctCount;
  FLOAT m_fStretchAll;
  FLOAT m_fStretchX;
  FLOAT m_fStretchY;
  FLOAT m_fStretchZ;
  CTString m_strName;
  CTString m_strDescription;
  BOOL m_bBackground;
  BOOL m_bTargetable;
  FLOAT m_fSize;
  FLOAT m_fParam1;
  FLOAT m_fParam2;
  FLOAT m_fParam3;
  BOOL m_bActive;
  FLOAT m_fActivateTime;
  FLOAT m_fDeactivateTime;
  FLOAT m_fMipFactorDisappear;
   
#line 68 "D:/SE1_GPL/Sources/EntitiesMP/ParticlesHolder.es"
void RenderParticles(void);
   
#line 141 "D:/SE1_GPL/Sources/EntitiesMP/ParticlesHolder.es"
BOOL IsTargetable(void)const;
   
#line 147 "D:/SE1_GPL/Sources/EntitiesMP/ParticlesHolder.es"
void MirrorAndStretch(FLOAT fStretch,BOOL bMirrorX);
   
#line 156 "D:/SE1_GPL/Sources/EntitiesMP/ParticlesHolder.es"
void StretchModel(void);
   
#line 175 "D:/SE1_GPL/Sources/EntitiesMP/ParticlesHolder.es"
CPlacement3D GetLerpedPlacement(void)const;
   
#line 182 "D:/SE1_GPL/Sources/EntitiesMP/ParticlesHolder.es"
SLONG GetUsedMemory(void);
#define  STATE_CParticlesHolder_Active 0x00df0000
  BOOL 
#line 197 "D:/SE1_GPL/Sources/EntitiesMP/ParticlesHolder.es"
Active(const CEntityEvent &__eeInput);
  BOOL H0x00df0001_Active_01(const CEntityEvent &__eeInput);
  BOOL H0x00df0002_Active_02(const CEntityEvent &__eeInput);
  BOOL H0x00df0003_Active_03(const CEntityEvent &__eeInput);
  BOOL H0x00df0004_Active_04(const CEntityEvent &__eeInput);
#define  STATE_CParticlesHolder_Inactive 0x00df0005
  BOOL 
#line 229 "D:/SE1_GPL/Sources/EntitiesMP/ParticlesHolder.es"
Inactive(const CEntityEvent &__eeInput);
  BOOL H0x00df0006_Inactive_01(const CEntityEvent &__eeInput);
  BOOL H0x00df0007_Inactive_02(const CEntityEvent &__eeInput);
#define  STATE_CParticlesHolder_Main 1
  BOOL 
#line 243 "D:/SE1_GPL/Sources/EntitiesMP/ParticlesHolder.es"
Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesMP_ParticlesHolder_INCLUDED
