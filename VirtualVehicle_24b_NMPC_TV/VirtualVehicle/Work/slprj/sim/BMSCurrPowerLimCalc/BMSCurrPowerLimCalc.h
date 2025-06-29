#ifndef BMSCurrPowerLimCalc_h_
#define BMSCurrPowerLimCalc_h_
#ifndef BMSCurrPowerLimCalc_COMMON_INCLUDES_
#define BMSCurrPowerLimCalc_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "math.h"
#endif
#include "BMSCurrPowerLimCalc_types.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_nonfinite.h"
#include <string.h>
#include <stddef.h>
struct c4f4hs3f30w_ { real32_T P_1 [ 5 ] ; real32_T P_2 [ 5 ] ; real32_T P_3
[ 7 ] ; real32_T P_4 [ 7 ] ; real32_T P_5 [ 4 ] ; real32_T P_6 [ 4 ] ;
real32_T P_7 ; real32_T P_8 [ 4 ] ; real32_T P_9 [ 4 ] ; real32_T P_10 [ 7 ]
; real32_T P_11 [ 7 ] ; real32_T P_12 [ 3 ] ; real32_T P_13 [ 3 ] ; real32_T
P_14 ; } ; struct nnj3wcguse { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 1 ] ; } Timing ; } ;
typedef struct { fff1on5pla rtm ; } ozx2hltu2vi ; extern real_T
rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_ ; extern void mmipgl5oaa ( SimStruct
* _mdlRefSfcnS , int_T mdlref_TID0 , fff1on5pla * const jhq13jgrxf , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern
void mr_BMSCurrPowerLimCalc_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T
* modelName , int_T * retVal ) ; extern mxArray *
mr_BMSCurrPowerLimCalc_GetDWork ( const ozx2hltu2vi * mdlrefDW ) ; extern
void mr_BMSCurrPowerLimCalc_SetDWork ( ozx2hltu2vi * mdlrefDW , const mxArray
* ssDW ) ; extern void mr_BMSCurrPowerLimCalc_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray * mr_BMSCurrPowerLimCalc_GetSimStateDisallowedBlocks ( ) ; extern const rtwCAPI_ModelMappingStaticInfo * BMSCurrPowerLimCalc_GetCAPIStaticMap ( void ) ; extern void BMSCurrPowerLimCalc ( const real32_T d51msl4tbc [ 96 ] , const real32_T noulgqqcoo [ 96 ] , real32_T * oqmgsset2u , real32_T * kouqt1hzal , real32_T * kv5an1dmb2 , real32_T * ii5nemx5k0 , real32_T * bnkpia5wne , real32_T * jqa42ursw1 ) ; extern void du2aze3q0u ( fff1on5pla * const jhq13jgrxf ) ;
#endif
