#ifndef DriverPassThrough_h_
#define DriverPassThrough_h_
#ifndef DriverPassThrough_COMMON_INCLUDES_
#define DriverPassThrough_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "math.h"
#endif
#include "DriverPassThrough_types.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_nonfinite.h"
#include <string.h>
#include <stddef.h>
struct epwsmz04yp { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 1 ] ; } Timing ; } ;
typedef struct { puf0tombf2 rtm ; } am5nrfreizz ; extern void lkghv3zku5 ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , puf0tombf2 * const fqrkdx2hx2 , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void mr_DriverPassThrough_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) ; extern mxArray * mr_DriverPassThrough_GetDWork ( const am5nrfreizz * mdlrefDW ) ; extern void mr_DriverPassThrough_SetDWork ( am5nrfreizz * mdlrefDW , const mxArray * ssDW ) ; extern void mr_DriverPassThrough_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray * mr_DriverPassThrough_GetSimStateDisallowedBlocks ( ) ; extern const rtwCAPI_ModelMappingStaticInfo * DriverPassThrough_GetCAPIStaticMap ( void ) ; extern void DriverPassThrough ( const real_T * f2mlfg30ti , real_T * m2aloqbdxt ) ; extern void labuig2vc2 ( puf0tombf2 * const fqrkdx2hx2 ) ;
#endif
