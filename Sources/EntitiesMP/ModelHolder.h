/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _EntitiesMP_ModelHolder_INCLUDED
#define _EntitiesMP_ModelHolder_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CModelHolder_DLLClass;
class CModelHolder : public CEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual const CTString &GetDescription(void) const { return m_strDescription; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTFileName m_fnModel;
  CTFileName m_fnTexture;
  FLOAT m_fStretchAll;
  FLOAT m_fStretchX;
  FLOAT m_fStretchY;
  FLOAT m_fStretchZ;
  CTString m_strName;
  CTString m_strDescription;
  BOOL m_bColliding;
  ANIMATION m_iModelAnimation;
  ANIMATION m_iTextureAnimation;
  BOOL m_bClusterShadows;
  BOOL m_bBackground;
  BOOL m_bCustomShading;
  ANGLE3D m_aShadingDirection;
  COLOR m_colLight;
  COLOR m_colAmbient;
  CTFileName m_fnmLightAnimation;
  ANIMATION m_iLightAnimation;
  CAnimObject m_aoLightAnimation;
CTFileName m_fnOldModel;
   
#line 44 "D:/SE1_GPL/Sources/EntitiesMP/ModelHolder.es"
CAnimData * GetAnimData(SLONG slPropertyOffset);
   
#line 58 "D:/SE1_GPL/Sources/EntitiesMP/ModelHolder.es"
BOOL AdjustShadingParameters(FLOAT3D & vLightDirection,COLOR & colLight,COLOR & colAmbient);
   
#line 97 "D:/SE1_GPL/Sources/EntitiesMP/ModelHolder.es"
void InitModelHolder(void);
#define  STATE_CModelHolder_Main 1
  BOOL 
#line 173 "D:/SE1_GPL/Sources/EntitiesMP/ModelHolder.es"
Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesMP_ModelHolder_INCLUDED
