/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 4 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"

#include "StdH.h"
#include "EntitiesMP/WorldSettingsController.h"
#include "EntitiesMP/BackgroundViewer.h"

#include <EntitiesMP/ScrollHolder.h>
#include <EntitiesMP/ScrollHolder_tables.h>
#line 10 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"

#define CT_LINESONSCREEN 18 // this number must be fixed due to desinchronisation in different resolutions
static CStaticStackArray<CTString> _astrCredits;
static CTFileName _fnLastLoaded;

void CScrollHolder::SetDefaultProperties(void) {
  m_strName = "Scroll holder";
  m_strDescription = "";
  m_fnmMessage = CTString("");
  m_fMyTimer = 0.0f;
  m_fMyTimerLast = 0.0f;
  m_fSpeed = 1.0f;
  m_penEndCreditsTrigger = NULL;
  m_bDataError = FALSE ;
  CRationalEntity::SetDefaultProperties();
}
  
#line 42 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
const CTString & CScrollHolder::GetDescription(void)const {
#line 43 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
((CTString &) m_strDescription ) . PrintF  ("%s" , m_fnmMessage  . FileName  ());
#line 44 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
return m_strDescription ;
#line 45 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}
   CScrollHolder::CScrollHolder(void) 
#line 48 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
{
#line 49 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
bDataLoaded  = FALSE ;
#line 50 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}
  
#line 52 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
BOOL CScrollHolder::ReloadData(void) 
#line 53 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
{
#line 54 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
m_bDataError  = FALSE ;
#line 55 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
if(! Credits_On  (m_fnmMessage ))
#line 56 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
{
#line 57 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
Credits_Off  ();
#line 58 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
return FALSE ;
#line 59 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}
#line 60 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
return TRUE ;
#line 61 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}
  
#line 63 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
BOOL CScrollHolder::LoadOneFile(const CTFileName & fnm) 
#line 64 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
{
#line 65 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
if(fnm  == ""){return FALSE ;}
#line 66 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
try 
#line 67 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
{
#line 69 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
CTFileStream  strm ;
#line 70 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
strm  . Open_t  (fnm );
#line 73 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
INDEX ctLines  = 0;
#line 74 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
while(! strm  . AtEOF  ())
#line 75 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
{
#line 76 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
CTString strLine ;
#line 77 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
strm  . GetLine_t  (strLine );
#line 78 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
ctLines  ++;
#line 79 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}
#line 80 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
strm  . SetPos_t  (0);
#line 83 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
CTString * astr  = _astrCredits  . Push  (ctLines );
#line 85 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
for(INDEX iLine  = 0;iLine  < ctLines  && ! strm  . AtEOF  ();iLine  ++)
#line 86 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
{
#line 87 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
strm  . GetLine_t  (astr  [ iLine  ]);
#line 88 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}
#line 89 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
strm  . Close  ();
#line 90 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
return TRUE ;
#line 91 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}
#line 92 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
catch  (char  * strError )
#line 93 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
{
#line 94 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
CPrintF  ("%s\n" , strError );
#line 95 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
return FALSE ;
#line 96 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}
#line 97 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
_fnLastLoaded  = fnm ;
#line 98 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}
  
#line 101 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
BOOL CScrollHolder::Credits_On(CTFileName fnScrollText) 
#line 102 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
{
#line 103 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
_astrCredits  . PopAll  ();
#line 104 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
return LoadOneFile  (fnScrollText );
#line 105 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}
  
#line 108 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
void CScrollHolder::Credits_Off(void) 
#line 109 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
{
#line 110 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
_astrCredits  . Clear  ();
#line 111 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}
  
#line 114 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
FLOAT CScrollHolder::Credits_Render(CScrollHolder * penThis,CDrawPort * pdp) 
#line 115 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
{
#line 116 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
if(m_bDataError ){return 0;}
#line 118 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
if(! bDataLoaded ){
#line 119 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
if(! ReloadData  ()){
#line 120 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
m_bDataError  = TRUE ;
#line 121 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
return 0;
#line 122 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}
#line 123 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
bDataLoaded  = TRUE ;
#line 124 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
return 1;
#line 125 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}
#line 127 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
PIX  pixW  = 0;
#line 128 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
PIX  pixH  = 0;
#line 129 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
PIX  pixJ  = 0;
#line 130 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
FLOAT fResolutionScaling ;
#line 131 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
PIX  pixLineHeight ;
#line 132 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
CTString strEmpty ;
#line 134 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
FLOAT fTime  = Lerp  (m_fMyTimerLast  , m_fMyTimer  , _pTimer  -> GetLerpFactor  ());
#line 135 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
CDrawPort  * pdpCurr  = pdp ;
#line 137 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
pdp  -> Unlock  ();
#line 138 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
pdpCurr  -> Lock  ();
#line 141 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
pixW  = pdpCurr  -> GetWidth  ();
#line 142 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
pixH  = pdpCurr  -> GetHeight  ();
#line 143 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
fResolutionScaling  = (FLOAT) pixH  / 360.0f;
#line 144 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
pdpCurr  -> SetFont  (_pfdDisplayFont );
#line 145 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
pixLineHeight  = floor  (20 * fResolutionScaling );
#line 147 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
const FLOAT fLinesPerSecond  = penThis  -> m_fSpeed ;
#line 148 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
FLOAT fOffset  = fTime  * fLinesPerSecond ;
#line 149 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
INDEX ctLinesOnScreen  = pixH  / pixLineHeight ;
#line 150 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
INDEX iLine1  = fOffset ;
#line 152 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
pixJ  = iLine1  * pixLineHeight  - fOffset  * pixLineHeight ;
#line 153 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
iLine1  -= ctLinesOnScreen ;
#line 155 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
INDEX ctLines  = _astrCredits  . Count  ();
#line 156 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
BOOL bOver  = TRUE ;
#line 158 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
for(INDEX i  = iLine1 ;i  < iLine1  + ctLinesOnScreen  + 1;i  ++){
#line 159 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
CTString * pstr  = & strEmpty ;
#line 160 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
INDEX iLine  = i ;
#line 161 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
if(iLine  >= 0 && iLine  < ctLines ){
#line 162 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
pstr  = & _astrCredits  [ iLine  ];
#line 163 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
bOver  = FALSE ;
#line 164 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}
#line 165 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
pdp  -> SetFont  (_pfdDisplayFont );
#line 166 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
pdp  -> SetTextScaling  (fResolutionScaling );
#line 167 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
pdp  -> SetTextAspect  (1.0f);
#line 168 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
pdp  -> PutTextC  (* pstr  , pixW  / 2 , pixJ  , C_WHITE  | 255);
#line 169 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
pixJ  += pixLineHeight ;
#line 170 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}
#line 172 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
pdpCurr  -> Unlock  ();
#line 173 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
pdp  -> Lock  ();
#line 175 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
if(bOver ){
#line 176 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
return 0;
#line 177 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}else if(ctLines  - iLine1  < ctLinesOnScreen ){
#line 178 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
return FLOAT (ctLines  - iLine1 ) / ctLinesOnScreen ;
#line 179 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}else {
#line 180 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
return 1;
#line 181 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}
#line 182 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}
BOOL CScrollHolder::
#line 186 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
WaitScrollingToEnd(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CScrollHolder_WaitScrollingToEnd
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CScrollHolder::WaitScrollingToEnd expects 'EVoid' as input!");  const EVoid &e = (const EVoid &)__eeInput;
#line 188 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
Jump(STATE_CURRENT,0x00ee0003, FALSE, EInternal());return TRUE;}BOOL CScrollHolder::H0x00ee0003_WaitScrollingToEnd_03(const CEntityEvent &__eeInput)
#line 189 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
{
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x00ee0003
if(!(m_fMyTimer  < (_astrCredits  . Count  () + CT_LINESONSCREEN ) * m_fSpeed )){ Jump(STATE_CURRENT,0x00ee0004, FALSE, EInternal());return TRUE;}
#line 190 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
SetTimerAfter(_pTimer  -> TickQuantum );
Jump(STATE_CURRENT, 0x00ee0001, FALSE, EBegin());return TRUE;}BOOL CScrollHolder::H0x00ee0001_WaitScrollingToEnd_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x00ee0001
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x00ee0002, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CScrollHolder::H0x00ee0002_WaitScrollingToEnd_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x00ee0002
;
#line 191 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
m_fMyTimerLast  = m_fMyTimer ;
#line 192 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
m_fMyTimer  += _pTimer  -> TickQuantum  / _pNetwork  -> GetRealTimeFactor  ();Jump(STATE_CURRENT,0x00ee0003, FALSE, EInternal());return TRUE;
#line 193 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}BOOL CScrollHolder::H0x00ee0004_WaitScrollingToEnd_04(const CEntityEvent &__eeInput) {
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x00ee0004

#line 194 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
Return(STATE_CURRENT,EStop  ());
#line 194 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
return TRUE; ASSERT(FALSE); return TRUE;};BOOL CScrollHolder::
#line 197 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CScrollHolder_Main
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CScrollHolder::Main expects 'EVoid' as input!");  const EVoid &e = (const EVoid &)__eeInput;
#line 199 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
InitAsEditorModel  ();
#line 200 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
SetPhysicsFlags  (EPF_MODEL_IMMATERIAL );
#line 201 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 204 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
SetModel  (MODEL_MARKER );
#line 205 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
SetModelMainTexture  (TEXTURE_MARKER );
#line 207 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
SetTimerAfter(0.05f);
Jump(STATE_CURRENT, 0x00ee0005, FALSE, EBegin());return TRUE;}BOOL CScrollHolder::H0x00ee0005_Main_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x00ee0005
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x00ee0006, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CScrollHolder::H0x00ee0006_Main_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x00ee0006
;
#line 209 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
if(! Credits_On  (m_fnmMessage ))
#line 210 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
{
#line 211 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
Credits_Off  ();
#line 212 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
Return(STATE_CURRENT,EVoid());
#line 212 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
return TRUE;
#line 213 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}
#line 214 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
m_bDataError  = FALSE ;
#line 216 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
SetTimerAt(THINKTIME_NEVER);
Jump(STATE_CURRENT, 0x00ee0007, FALSE, EBegin());return TRUE;}BOOL CScrollHolder::H0x00ee0007_Main_03(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x00ee0007
switch(__eeInput.ee_slEvent){case(EVENTCODE_EStart):
#line 218 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
{const EStart&eStart= (EStart&)__eeInput;

#line 219 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
CWorldSettingsController  * pwsc  = GetWSC  (this );
#line 220 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
if(pwsc  != NULL )
#line 221 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
{
#line 222 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
m_fMyTimer  = 0;
#line 223 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
m_fMyTimerLast  = 0;
#line 224 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
EScroll  escr ;
#line 225 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
escr  . bStart  = TRUE ;
#line 226 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
escr  . penSender  = this ;
#line 227 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
pwsc  -> SendEvent  (escr );
#line 228 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}
#line 229 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
Call(STATE_CURRENT, STATE_CScrollHolder_WaitScrollingToEnd, TRUE, EVoid());return TRUE;
#line 230 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}ASSERT(FALSE);break;case(EVENTCODE_EStop):
#line 232 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
{const EStop&eStop= (EStop&)__eeInput;

#line 233 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
CWorldSettingsController  * pwsc  = GetWSC  (this );
#line 234 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
if(pwsc  != NULL )
#line 235 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
{
#line 236 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
EScroll  escr ;
#line 237 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
escr  . bStart  = FALSE ;
#line 238 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
escr  . penSender  = this ;
#line 239 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
pwsc  -> SendEvent  (escr );
#line 240 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}
#line 241 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
UnsetTimer();Jump(STATE_CURRENT,0x00ee0008, FALSE, EInternal());return TRUE;
#line 242 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}ASSERT(FALSE);break;default: return FALSE; break;
#line 243 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}return TRUE;}BOOL CScrollHolder::H0x00ee0008_Main_04(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x00ee0008

#line 244 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
Credits_Off  ();
#line 245 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
if(m_penEndCreditsTrigger ){
#line 246 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
SendToTarget  (m_penEndCreditsTrigger  , EET_TRIGGER  , FixupCausedToPlayer  (this  , NULL  , FALSE ));
#line 247 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
}
#line 248 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
Return(STATE_CURRENT,EVoid());
#line 248 "D:/SE1_GPL/Sources/EntitiesMP/ScrollHolder.es"
return TRUE; ASSERT(FALSE); return TRUE;};