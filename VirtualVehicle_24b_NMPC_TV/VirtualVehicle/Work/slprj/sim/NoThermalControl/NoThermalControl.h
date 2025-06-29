#ifndef NoThermalControl_h_
#define NoThermalControl_h_
#ifndef NoThermalControl_COMMON_INCLUDES_
#define NoThermalControl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "math.h"
#endif
#include "NoThermalControl_types.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_nonfinite.h"
#include <string.h>
#include <stddef.h>
struct ajlc0frzu2j_ { real_T P_0 ; } ; struct n4weulck5w { struct
SimStruct_tag * _mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; sysRanDType *
systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo ; struct { int_T
mdlref_GlobalTID [ 1 ] ; } Timing ; } ; typedef struct { ilh2sbbmqd rtm ; }
lraeusaudmt ; extern void ehwnuiq0go ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , ilh2sbbmqd * const lqpzzdfgao , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_NoThermalControl_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_NoThermalControl_GetDWork
( const lraeusaudmt * mdlrefDW ) ; extern void mr_NoThermalControl_SetDWork ( lraeusaudmt * mdlrefDW , const mxArray * ssDW ) ; extern void mr_NoThermalControl_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray * mr_NoThermalControl_GetSimStateDisallowedBlocks ( ) ; extern const rtwCAPI_ModelMappingStaticInfo * NoThermalControl_GetCAPIStaticMap ( void ) ; extern void logslksxmu ( real_T * beapjezfaw , real_T * hxlxikaqf4 , real_T * dvmnf0qf4u , real_T * em5losp1q2 , real_T * ekgo11rsl2 , real_T * odjsze3sp5 , real_T * g4x5lprhj2 , real_T * p5gslhtvr2 , real_T * c1n35vn4c3 , real_T * nm5mrccp4k ) ; extern void n0kgruy2ln ( real_T * nm5mrccp4k ) ; extern void NoThermalControl ( real_T * beapjezfaw , real_T * hxlxikaqf4 , real_T * dvmnf0qf4u , real_T * em5losp1q2 , real_T * ekgo11rsl2 , real_T * odjsze3sp5 , real_T * g4x5lprhj2 , real_T * p5gslhtvr2 , real_T * c1n35vn4c3 , real_T * nm5mrccp4k ) ; extern void ozqahyp1e2 ( ilh2sbbmqd * const lqpzzdfgao ) ;
#endif
