#ifndef BMSController_cap_host_h__
#define BMSController_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
#include "BMSBalancingLogic_capi_host.h"
#include "BMSOut_capi_host.h"
#include "BMSCurrPowerLimCalc_capi_host.h"
#include "BMSSOCEstimation_capi_host.h"
#include "BMSStateMachine_capi_host.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo *
childMMI [ 5 ] ; BMSBalancingLogic_host_DataMapInfo_T child0 ;
BMSOut_host_DataMapInfo_T child1 ; BMSCurrPowerLimCalc_host_DataMapInfo_T
child2 ; BMSSOCEstimation_host_DataMapInfo_T child3 ;
BMSStateMachine_host_DataMapInfo_T child4 ; }
BMSController_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void BMSController_host_InitializeDataMapInfo ( BMSController_host_DataMapInfo_T
* dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
