/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _EntitiesMP_NavigationMarker_INCLUDED
#define _EntitiesMP_NavigationMarker_INCLUDED 1
#include <EntitiesMP/Marker.h>
extern "C" DECL_DLL CDLLEntityClass CNavigationMarker_DLLClass;
class DECL_DLL  CNavigationMarker : public CEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
   virtual void SetDefaultProperties(void);
  CTString m_strName;
  RANGE m_fMarkerRange;
  CEntityPointer m_penTarget0;
  CEntityPointer m_penTarget1;
  CEntityPointer m_penTarget2;
  CEntityPointer m_penTarget3;
  CEntityPointer m_penTarget4;
  CEntityPointer m_penTarget5;
CPathNode * m_ppnNode;
    CNavigationMarker(void);
     ~ CNavigationMarker(void);
   
#line 58 "D:/SE1_GPL/Sources/EntitiesMP/NavigationMarker.es"
void Read_t(CTStream * istr);
   
#line 64 "D:/SE1_GPL/Sources/EntitiesMP/NavigationMarker.es"
CEntity * GetTarget(void)const;
   
#line 67 "D:/SE1_GPL/Sources/EntitiesMP/NavigationMarker.es"
void * GetEntityInfo(void);
   
#line 72 "D:/SE1_GPL/Sources/EntitiesMP/NavigationMarker.es"
CPathNode * GetPathNode(void);
   
#line 81 "D:/SE1_GPL/Sources/EntitiesMP/NavigationMarker.es"
CEntityPointer & TargetPointer(INDEX i);
   
#line 86 "D:/SE1_GPL/Sources/EntitiesMP/NavigationMarker.es"
CNavigationMarker & Target(INDEX i);
   
#line 92 "D:/SE1_GPL/Sources/EntitiesMP/NavigationMarker.es"
CNavigationMarker * GetLink(INDEX i);
   
#line 106 "D:/SE1_GPL/Sources/EntitiesMP/NavigationMarker.es"
const CTString & GetDescription(void)const;
   
#line 111 "D:/SE1_GPL/Sources/EntitiesMP/NavigationMarker.es"
BOOL MovesByTargetedRoute(CTString & strTargetProperty)const;
   
#line 116 "D:/SE1_GPL/Sources/EntitiesMP/NavigationMarker.es"
BOOL DropsMarker(CTFileName & fnmMarkerClass,CTString & strTargetProperty)const;
  
#line 122 "D:/SE1_GPL/Sources/EntitiesMP/NavigationMarker.es"
virtual BOOL IsMarker(void)const;
#define  STATE_CNavigationMarker_Main 1
  BOOL 
#line 127 "D:/SE1_GPL/Sources/EntitiesMP/NavigationMarker.es"
Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesMP_NavigationMarker_INCLUDED
