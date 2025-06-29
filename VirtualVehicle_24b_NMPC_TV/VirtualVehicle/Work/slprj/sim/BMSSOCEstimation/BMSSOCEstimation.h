#ifndef BMSSOCEstimation_h_
#define BMSSOCEstimation_h_
#ifndef BMSSOCEstimation_COMMON_INCLUDES_
#define BMSSOCEstimation_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "math.h"
#endif
#include "BMSSOCEstimation_types.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_nonfinite.h"
#include <string.h>
#include <stddef.h>
typedef struct { real32_T l2x3rgvlyq ; } pbiqgdx5za ; typedef struct {
real32_T myrqiep04m ; } izjsvhfdps ; struct aisrboyg3zp_ { real32_T P_3 ;
real32_T P_4 ; real32_T P_5 ; real32_T P_6 ; } ; struct hpenwvdsgo { struct
SimStruct_tag * _mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
1 ] ; int32_T * vardimsAddress [ 1 ] ; RTWLoggingFcnPtr loggingPtrs [ 1 ] ;
sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 1 ] ; } Timing ; } ; typedef struct {
pbiqgdx5za rtb ; izjsvhfdps rtdw ; fcomfl1sgs rtm ; } pe5hyd5e5ea ; extern
real_T rtP__PlntBattChrgMax2f2BatteryDCDC_sldd_ ; extern real_T
rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_ ; extern real_T
rtP__PlntBattSocInit2f2BatteryDCDC_sldd_ ; extern void dllaarzzct ( SimStruct
* _mdlRefSfcnS , int_T mdlref_TID0 , fcomfl1sgs * const ileo0mwgm0 ,
pbiqgdx5za * localB , izjsvhfdps * localDW , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_BMSSOCEstimation_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_BMSSOCEstimation_GetDWork
( const pe5hyd5e5ea * mdlrefDW ) ; extern void mr_BMSSOCEstimation_SetDWork ( pe5hyd5e5ea * mdlrefDW , const mxArray * ssDW ) ; extern void mr_BMSSOCEstimation_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray * mr_BMSSOCEstimation_GetSimStateDisallowedBlocks ( ) ; extern const rtwCAPI_ModelMappingStaticInfo * BMSSOCEstimation_GetCAPIStaticMap ( void ) ; extern void bbzyccyfe5 ( izjsvhfdps * localDW ) ; extern void hue3c0yakn ( izjsvhfdps * localDW ) ; extern void ioolb10wj0 ( pbiqgdx5za * localB , izjsvhfdps * localDW ) ; extern void BMSSOCEstimation ( const real32_T * e4051bwwkz , real32_T * bjpjid5gap , pbiqgdx5za * localB , izjsvhfdps * localDW ) ; extern void kcczw4j51s ( fcomfl1sgs * const ileo0mwgm0 ) ;
#endif
