/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _EntitiesMP_PlayerMarker_INCLUDED
#define _EntitiesMP_PlayerMarker_INCLUDED 1
#include <EntitiesMP/Marker.h>
extern "C" DECL_DLL CDLLEntityClass CPlayerMarker_DLLClass;
class CPlayerMarker : public CMarker {
public:
virtual BOOL IsImportant(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  FLOAT m_fHealth;
  FLOAT m_fShield;
  INDEX m_iGiveWeapons;
  INDEX m_iTakeWeapons;
  CTString m_strGroup;
  BOOL m_bQuickStart;
  BOOL m_bStartInComputer;
  CEntityPointer m_penMessage;
  FLOAT m_fMaxAmmoRatio;
  FLOAT m_tmLastSpawned;
  INDEX m_iTakeAmmo;
  BOOL m_bNoRespawnInPlace;
   
#line 39 "D:/SE1_GPL/Sources/EntitiesMP/PlayerMarker.es"
void Precache(void);
   
#line 44 "D:/SE1_GPL/Sources/EntitiesMP/PlayerMarker.es"
BOOL HandleEvent(const CEntityEvent & ee);
#define  STATE_CPlayerMarker_Main 1
  BOOL 
#line 73 "D:/SE1_GPL/Sources/EntitiesMP/PlayerMarker.es"
Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesMP_PlayerMarker_INCLUDED
