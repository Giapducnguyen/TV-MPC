#ifndef BMSOut_h_
#define BMSOut_h_
#ifndef BMSOut_COMMON_INCLUDES_
#define BMSOut_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "math.h"
#endif
#include "BMSOut_types.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_nonfinite.h"
#include <string.h>
#include <stddef.h>
struct nvcht4hdfj { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ] ; } Timing ; } ;
typedef struct { oq5eurmbom rtm ; } pcu03dvoe3p ; extern void gzneizzges ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , oq5eurmbom * const dwsl3wlhtm , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void mr_BMSOut_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) ; extern mxArray * mr_BMSOut_GetDWork ( const pcu03dvoe3p * mdlrefDW ) ; extern void mr_BMSOut_SetDWork ( pcu03dvoe3p * mdlrefDW , const mxArray * ssDW ) ; extern void mr_BMSOut_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray * mr_BMSOut_GetSimStateDisallowedBlocks ( ) ; extern const rtwCAPI_ModelMappingStaticInfo * BMSOut_GetCAPIStaticMap ( void ) ; extern void BMSOutTID0 ( const real32_T * ngqqgeopwf , const real32_T * ofi1ry3gym , const real32_T * cl54a1v5j1 , const boolean_T * igduxa2y4s , const boolean_T * oehacmojhw , const boolean_T * jmyo3p1phq , const boolean_T * me5w1zdj4s , const boolean_T * exmqopawg1 , const boolean_T * ft2knzkk30 , const boolean_T * kayb1jvrcn , const real32_T * omlrkjg2do , const real32_T * itudpoovv0 , const boolean_T fmk54r0bnp [ 96 ] , real32_T * hi0qupfrcg , real32_T * krol0fx55z , real32_T * dta12jj3zo , boolean_T * odhgxmj2dl , boolean_T * dcsfmzdxue , boolean_T * jl2a3vykez , boolean_T * pqqx3guvq4 , boolean_T * lriczkjol4 , boolean_T * jrr1nevuvk , boolean_T es1tn1nplx [ 96 ] , boolean_T * nlua31zfcy , real32_T * ebajk0lef4 , real32_T * be44hofuvo ) ; extern void BMSOutTID1 ( void ) ; extern void jhgahwtvq0 ( oq5eurmbom * const dwsl3wlhtm ) ;
#endif
