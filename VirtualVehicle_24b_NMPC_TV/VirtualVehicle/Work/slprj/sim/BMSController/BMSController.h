#ifndef BMSController_h_
#define BMSController_h_
#ifndef BMSController_COMMON_INCLUDES_
#define BMSController_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "math.h"
#endif
#include "BMSController_types.h"
#include "BMSCurrPowerLimCalc.h"
#include "BMSStateMachine.h"
#include "BMSSOCEstimation.h"
#include "BMSOut.h"
#include "BMSBalancingLogic.h"
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_nonfinite.h"
#include <string.h>
#include <stddef.h>
typedef struct { real32_T fm55o01te2 [ 96 ] ; real32_T hukeshrxti [ 96 ] ;
real32_T buxxf5bscd ; real32_T chxcucuq31 ; real32_T py3rn4eqr1 ; real32_T
mmw4avf5xh ; real32_T osroavgql2 ; real32_T cilw3vwez2 ; real32_T i1ppqdbs1b
; real32_T ldj1uiqfcy ; real32_T osftp5zobs ; real32_T fx2mrcmllw ; real32_T
ncq33t5kyy ; real32_T l3kysasume ; boolean_T dsu5t5n3ng ; boolean_T
ifa0wcc4ko ; boolean_T ohkage5rqe ; boolean_T jqp3ld4hvv ; boolean_T
epo3j5m4yl ; boolean_T fichzdgpsq ; boolean_T kzwhsorkcz ; boolean_T
cwnu4cp2yu [ 96 ] ; } l5yy0qtgsj ; typedef struct { real32_T dz4c4vv4e1 [ 96
] ; real32_T phucyyn21j [ 96 ] ; real32_T ku0cdxjs3l ; real32_T iqzga4pj3l ;
real32_T hdl0hgqmi0 ; real32_T hmm5af0r2l ; real32_T m3mj3jyjio [ 96 ] ;
real32_T kxvz5gfvp4 ; real32_T lizezojaqr ; real32_T ldt520oxg4 ; ozx2hltu2vi
ffhenqhiqq ; hmzlgbhyjam izgwu1no1t ; pe5hyd5e5ea j2vfortgzd ; pcu03dvoe3p
banpsm2jq3 ; nxoas2gjfbm lvxrgwkk43 ; } g0d32wfvf1 ; struct dkgtpceyogp_ {
real32_T P_3 [ 96 ] ; real32_T P_4 [ 96 ] ; real32_T P_5 ; real32_T P_6 ;
real32_T P_7 ; real32_T P_8 ; real32_T P_9 ; } ; struct i4zyr2rvdz { struct
SimStruct_tag * _mdlRefSfcnS ; const rtTimingBridge * timingBridge ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 6 ] ; int32_T * vardimsAddress [ 6
] ; RTWLoggingFcnPtr loggingPtrs [ 6 ] ; rtwCAPI_ModelMappingInfo * childMMI
[ 5 ] ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo
; struct { int_T mdlref_GlobalTID [ 2 ] ; } Timing ; } ; typedef struct {
l5yy0qtgsj rtb ; g0d32wfvf1 rtdw ; jhg5ifokiz rtm ; } prqjzwjjc0p ; extern
real_T rtP__PlntBattChrgMax2f2BatteryDCDC_sldd_ ; extern real_T
rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_ ; extern real_T
rtP__PlntBattSocInit2f2BatteryDCDC_sldd_ ; extern void lftbpoqxym ( SimStruct
* _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , jhg5ifokiz * const
lynqqvz3ra , l5yy0qtgsj * localB , g0d32wfvf1 * localDW , void * sysRanPtr ,
int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_BMSController_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName
, int_T * retVal ) ; extern mxArray * mr_BMSController_GetDWork ( const
prqjzwjjc0p * mdlrefDW ) ; extern void mr_BMSController_SetDWork ( prqjzwjjc0p
* mdlrefDW , const mxArray * ssDW ) ; extern void
mr_BMSController_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray
* mr_BMSController_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * BMSController_GetCAPIStaticMap ( void ) ;
extern void p2t1vykwji ( l5yy0qtgsj * localB , g0d32wfvf1 * localDW ) ;
extern void n3ldsg2m4a ( l5yy0qtgsj * localB , g0d32wfvf1 * localDW ) ;
extern void dhe0j1g5mvTID0 ( const real32_T adxekd5tio [ 96 ] , const
real32_T j3wvkhbfe4 [ 96 ] , const real32_T * alolnomync , const real32_T *
gr0s1ny5og , const real32_T * cne0zycowu , const real32_T * lvjqgkdjmc ,
g0d32wfvf1 * localDW ) ; extern void dhe0j1g5mvTID1 ( void ) ; extern void
BMSControllerTID0 ( jhg5ifokiz * const lynqqvz3ra , boolean_T * e4kvz4supm ,
real32_T * a3l2j3y4lx , real32_T * niiizijeve , real32_T * br2su3c3jv ,
real32_T * oc2qyedj4g , real32_T * aid0h22051 , boolean_T * dwoz1cruz0 ,
boolean_T * axxqpxhh12 , boolean_T * brsw5m0oia , boolean_T * pcvnwgre5k ,
boolean_T * llhvqx5te5 , boolean_T * lyrkpolxu5 , boolean_T jztsnikid1 [ 96 ]
, l5yy0qtgsj * localB , g0d32wfvf1 * localDW ) ; extern void
BMSControllerTID1 ( l5yy0qtgsj * localB , g0d32wfvf1 * localDW ) ; extern
void g10dj1kimi ( g0d32wfvf1 * localDW , jhg5ifokiz * const lynqqvz3ra ) ;
#endif
