/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _EntitiesMP_ScrollHolder_INCLUDED
#define _EntitiesMP_ScrollHolder_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CScrollHolder_DLLClass;
class CScrollHolder : public CRationalEntity {
public:
virtual BOOL IsTargetable(void) const { return TRUE; };
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsImportant(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;
  CTString m_strDescription;
  CTFileName m_fnmMessage;
  FLOAT m_fMyTimer;
  FLOAT m_fMyTimerLast;
  FLOAT m_fSpeed;
  CEntityPointer m_penEndCreditsTrigger;
  BOOL m_bDataError;
BOOL bDataLoaded;
   
#line 42 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
const CTString & GetDescription(void)const;
    CScrollHolder(void);
   
#line 52 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
BOOL ReloadData(void);
   
#line 63 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
BOOL LoadOneFile(const CTFileName & fnm);
   
#line 101 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
BOOL Credits_On(CTFileName fnScrollText);
   
#line 108 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
void Credits_Off(void);
   
#line 114 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
FLOAT Credits_Render(CScrollHolder * penThis,CDrawPort * pdp);
#define  STATE_CScrollHolder_WaitScrollingToEnd 0x00ee0000
  BOOL 
#line 186 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
WaitScrollingToEnd(const CEntityEvent &__eeInput);
  BOOL H0x00ee0001_WaitScrollingToEnd_01(const CEntityEvent &__eeInput);
  BOOL H0x00ee0002_WaitScrollingToEnd_02(const CEntityEvent &__eeInput);
  BOOL H0x00ee0003_WaitScrollingToEnd_03(const CEntityEvent &__eeInput);
  BOOL H0x00ee0004_WaitScrollingToEnd_04(const CEntityEvent &__eeInput);
#define  STATE_CScrollHolder_Main 1
  BOOL 
#line 197 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
Main(const CEntityEvent &__eeInput);
  BOOL H0x00ee0005_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x00ee0006_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x00ee0007_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x00ee0008_Main_04(const CEntityEvent &__eeInput);
};
#endif // _EntitiesMP_ScrollHolder_INCLUDED
