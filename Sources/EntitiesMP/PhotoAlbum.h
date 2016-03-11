/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _EntitiesMP_PhotoAlbum_INCLUDED
#define _EntitiesMP_PhotoAlbum_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CPhotoAlbum_DLLClass;
class CPhotoAlbum : public CMovableModelEntity {
public:
virtual BOOL IsTargetable(void) const { return TRUE; };
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsImportant(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  FLOAT m_fStretch;
  CTString m_strName;
  INDEX m_iCurrentPage;
  FLOAT m_tmPageWait;
  CSoundObject m_soPage;
   
#line 42 "D:/SE1_GPL/Sources/EntitiesMP/PhotoAlbum.es"
void Precache(void);
#define  STATE_CPhotoAlbum_OpenBook 0x02660000
  BOOL 
#line 56 "D:/SE1_GPL/Sources/EntitiesMP/PhotoAlbum.es"
OpenBook(const CEntityEvent &__eeInput);
  BOOL H0x02660001_OpenBook_01(const CEntityEvent &__eeInput);
  BOOL H0x02660002_OpenBook_02(const CEntityEvent &__eeInput);
  BOOL H0x02660003_OpenBook_03(const CEntityEvent &__eeInput);
  BOOL H0x02660004_OpenBook_04(const CEntityEvent &__eeInput);
  BOOL H0x02660005_OpenBook_05(const CEntityEvent &__eeInput);
  BOOL H0x02660006_OpenBook_06(const CEntityEvent &__eeInput);
  BOOL H0x02660007_OpenBook_07(const CEntityEvent &__eeInput);
  BOOL H0x02660008_OpenBook_08(const CEntityEvent &__eeInput);
  BOOL H0x02660009_OpenBook_09(const CEntityEvent &__eeInput);
  BOOL H0x0266000a_OpenBook_10(const CEntityEvent &__eeInput);
  BOOL H0x0266000b_OpenBook_11(const CEntityEvent &__eeInput);
  BOOL H0x0266000c_OpenBook_12(const CEntityEvent &__eeInput);
#define  STATE_CPhotoAlbum_Main 1
  BOOL 
#line 97 "D:/SE1_GPL/Sources/EntitiesMP/PhotoAlbum.es"
Main(const CEntityEvent &__eeInput);
  BOOL H0x0266000d_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x0266000e_Main_02(const CEntityEvent &__eeInput);
};
#endif // _EntitiesMP_PhotoAlbum_INCLUDED
