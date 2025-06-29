#ifndef NoEngineController_h_
#define NoEngineController_h_
#ifndef NoEngineController_COMMON_INCLUDES_
#define NoEngineController_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "math.h"
#endif
#include "NoEngineController_types.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_nonfinite.h"
#include <string.h>
#include <stddef.h>
struct dtzrjczxvbv_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ;
real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9 ;
real_T P_10 ; real_T P_11 ; real_T P_12 ; real_T P_13 ; real_T P_14 ; real_T
P_15 ; real_T P_16 ; } ; struct maz5rz3lkh { struct SimStruct_tag *
_mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; sysRanDType *
systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo ; struct { int_T
mdlref_GlobalTID [ 1 ] ; } Timing ; } ; typedef struct { e1w1qplsha rtm ; }
oyfbmrj0fcb ; extern void l4z4udmhha ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , e1w1qplsha * const chhmqpexyb , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_NoEngineController_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray *
mr_NoEngineController_GetDWork ( const oyfbmrj0fcb * mdlrefDW ) ; extern void
mr_NoEngineController_SetDWork ( oyfbmrj0fcb * mdlrefDW , const mxArray *
ssDW ) ; extern void mr_NoEngineController_RegisterSimStateChecksum ( SimStruct
* S ) ; extern mxArray * mr_NoEngineController_GetSimStateDisallowedBlocks ( )
; extern const rtwCAPI_ModelMappingStaticInfo *
NoEngineController_GetCAPIStaticMap ( void ) ; extern void k1l0tekhfw ( real_T
* p3mvyc5rvb , real_T * b5titl24kv , real_T * irvbjyllue , real_T *
dyyd0llnwo , real_T * mkygbhlohn , real_T * g421j2lvqa , real_T * eeysh4dioy
, real_T * nserh2o43x , real_T * kmgacitazt , real_T * fpjx245cq0 , real_T *
p2kjsexujv , real_T * fee24oltav , real_T * aoc5dvnjro , real_T * peybq2ek1b
, real_T * i4hkuvyvxc , real_T * aqruaopco0 , real_T * kpk5up525t ) ; extern
void bgaunqzhxo ( real_T * p3mvyc5rvb , real_T * b5titl24kv , real_T *
irvbjyllue , real_T * dyyd0llnwo , real_T * mkygbhlohn , real_T * g421j2lvqa
, real_T * eeysh4dioy , real_T * nserh2o43x , real_T * kmgacitazt , real_T *
fpjx245cq0 , real_T * p2kjsexujv , real_T * fee24oltav , real_T * aoc5dvnjro
, real_T * peybq2ek1b , real_T * i4hkuvyvxc , real_T * aqruaopco0 , real_T *
kpk5up525t ) ; extern void NoEngineController ( real_T * p3mvyc5rvb , real_T
* b5titl24kv , real_T * irvbjyllue , real_T * dyyd0llnwo , real_T *
mkygbhlohn , real_T * g421j2lvqa , real_T * eeysh4dioy , real_T * nserh2o43x
, real_T * kmgacitazt , real_T * fpjx245cq0 , real_T * p2kjsexujv , real_T *
fee24oltav , real_T * aoc5dvnjro , real_T * peybq2ek1b , real_T * i4hkuvyvxc
, real_T * aqruaopco0 , real_T * kpk5up525t ) ; extern void hizwzwfecs ( e1w1qplsha * const chhmqpexyb ) ;
#endif
