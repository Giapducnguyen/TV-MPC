#ifndef NoDifferentialControl_h_
#define NoDifferentialControl_h_
#ifndef NoDifferentialControl_COMMON_INCLUDES_
#define NoDifferentialControl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "math.h"
#endif
#include "NoDifferentialControl_types.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_nonfinite.h"
#include <string.h>
#include <stddef.h>
struct g3ugjv5y42s_ { real_T P_0 ; real_T P_1 ; } ; struct fizr5snrtr {
struct SimStruct_tag * _mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; sysRanDType *
systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo ; struct { int_T
mdlref_GlobalTID [ 1 ] ; } Timing ; } ; typedef struct { n1ssnfpndb rtm ; }
mak5rrl2d2r ; extern void d2hcwqfdgq ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , n1ssnfpndb * const g5ua053czk , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_NoDifferentialControl_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray *
mr_NoDifferentialControl_GetDWork ( const mak5rrl2d2r * mdlrefDW ) ; extern
void mr_NoDifferentialControl_SetDWork ( mak5rrl2d2r * mdlrefDW , const
mxArray * ssDW ) ; extern void
mr_NoDifferentialControl_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_NoDifferentialControl_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * NoDifferentialControl_GetCAPIStaticMap
( void ) ; extern void mrw2l4tpa5 ( real_T * bonhcnyeku ) ; extern void
lx5eeaqdva ( real_T * bonhcnyeku ) ; extern void NoDifferentialControl ( real_T
j1ocgzqti0 [ 4 ] , real_T * bonhcnyeku ) ; extern void asqqn1cov4 ( n1ssnfpndb
* const g5ua053czk ) ;
#endif
