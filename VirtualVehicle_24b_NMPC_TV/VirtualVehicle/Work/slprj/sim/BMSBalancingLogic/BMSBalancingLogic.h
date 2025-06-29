#ifndef BMSBalancingLogic_h_
#define BMSBalancingLogic_h_
#ifndef BMSBalancingLogic_COMMON_INCLUDES_
#define BMSBalancingLogic_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "math.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "BMSBalancingLogic_types.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_nonfinite.h"
#include <string.h>
#include <stddef.h>
typedef struct { real32_T pvtvefe55b ; uint16_T mlepkj1i2a ; uint8_T
fj34nukmqi ; uint8_T obquvdup4b ; uint8_T cttsdmifmf ; boolean_T l14arht0pc ;
} hse03z0axo ; struct pi3h4ymvb42_ { real32_T P_0 ; int16_T P_1 ; int16_T P_2
; int16_T P_3 ; boolean_T P_4 ; } ; struct arovgo0wao { struct SimStruct_tag
* _mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
1 ] ; int32_T * vardimsAddress [ 1 ] ; RTWLoggingFcnPtr loggingPtrs [ 1 ] ;
sysRanDType * systemRan [ 3 ] ; int_T systemTid [ 3 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 1 ] ; } Timing ; } ; typedef struct {
hse03z0axo rtdw ; jtvn52kzgd rtm ; } nxoas2gjfbm ; extern void bjd0wkxsam ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , jtvn52kzgd * const d0hda010hq , hse03z0axo * localDW , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void mr_BMSBalancingLogic_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) ; extern mxArray * mr_BMSBalancingLogic_GetDWork ( const nxoas2gjfbm * mdlrefDW ) ; extern void mr_BMSBalancingLogic_SetDWork ( nxoas2gjfbm * mdlrefDW , const mxArray * ssDW ) ; extern void mr_BMSBalancingLogic_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray * mr_BMSBalancingLogic_GetSimStateDisallowedBlocks ( ) ; extern const rtwCAPI_ModelMappingStaticInfo * BMSBalancingLogic_GetCAPIStaticMap ( void ) ; extern void okbayvkvs0 ( boolean_T n4byhwdk3h [ 96 ] , hse03z0axo * localDW ) ; extern void l0kmnlkf5y ( boolean_T n4byhwdk3h [ 96 ] , hse03z0axo * localDW ) ; extern void BMSBalancingLogic ( const real32_T * kzzpi5g2pn , const real32_T kecw5f4uup [ 96 ] , const real32_T * h2x23ryqoh , const real32_T * erx1den1g5 , boolean_T n4byhwdk3h [ 96 ] , hse03z0axo * localDW ) ; extern void jozn1uvmvd ( jtvn52kzgd * const d0hda010hq ) ;
#endif
