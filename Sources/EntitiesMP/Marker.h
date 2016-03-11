/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _EntitiesMP_Marker_INCLUDED
#define _EntitiesMP_Marker_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CMarker_DLLClass;
class CMarker : public CEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual CEntity *GetTarget(void) const { return m_penTarget; };
virtual BOOL IsTargetable(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;
  CTString m_strDescription;
  CEntityPointer m_penTarget;
   
#line 28 "D:/SE1_GPL/Sources/EntitiesMP/Marker.es"
const CTString & GetDescription(void)const;
   
#line 38 "D:/SE1_GPL/Sources/EntitiesMP/Marker.es"
BOOL MovesByTargetedRoute(CTString & strTargetProperty)const;
   
#line 43 "D:/SE1_GPL/Sources/EntitiesMP/Marker.es"
BOOL DropsMarker(CTFileName & fnmMarkerClass,CTString & strTargetProperty)const;
  
#line 51 "D:/SE1_GPL/Sources/EntitiesMP/Marker.es"
virtual BOOL IsMarker(void)const;
   
#line 58 "D:/SE1_GPL/Sources/EntitiesMP/Marker.es"
SLONG GetUsedMemory(void);
#define  STATE_CMarker_Main 1
  BOOL 
#line 72 "D:/SE1_GPL/Sources/EntitiesMP/Marker.es"
Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesMP_Marker_INCLUDED
