/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 4 "D:/SE1_GPL/Sources/EntitiesMP/Terrain.es"

#include "StdH.h"
#include <Engine/Terrain/Terrain.h>

#include <EntitiesMP/Terrain.h>
#include <EntitiesMP/Terrain_tables.h>
void CTerrainEntity::SetDefaultProperties(void) {
  CEntity::SetDefaultProperties();
}
BOOL CTerrainEntity::
#line 17 "D:/SE1_GPL/Sources/EntitiesMP/Terrain.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CTerrainEntity_Main
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CTerrainEntity::Main expects 'EVoid' as input!");  const EVoid &e = (const EVoid &)__eeInput;
#line 20 "D:/SE1_GPL/Sources/EntitiesMP/Terrain.es"
InitAsTerrain  ();
#line 21 "D:/SE1_GPL/Sources/EntitiesMP/Terrain.es"
TerrainChangeNotify  ();
#line 22 "D:/SE1_GPL/Sources/EntitiesMP/Terrain.es"
SetCollisionFlags  (ECF_BRUSH );
#line 23 "D:/SE1_GPL/Sources/EntitiesMP/Terrain.es"
Return(STATE_CURRENT,EVoid());
#line 23 "D:/SE1_GPL/Sources/EntitiesMP/Terrain.es"
return TRUE; ASSERT(FALSE); return TRUE;};