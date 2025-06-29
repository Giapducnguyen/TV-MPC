#ifndef __c1_BMSBalancingLogic_h__
#define __c1_BMSBalancingLogic_h__
#include "sf_runtime/sfc_sdi.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Forward Declarations */

/* Type Definitions */
#ifndef typedef_SFc1_BMSBalancingLogicInstanceStruct
#define typedef_SFc1_BMSBalancingLogicInstanceStruct

typedef struct {
  real32_T c1_TargetDeltaV;
  boolean_T c1_flgBalCompl;
  int16_T c1_BalNotActWait;
  int16_T c1_BalOffWait;
  int16_T c1_BalOnWait;
  boolean_T c1_flgEnBalancing;
  real32_T c1_DeltaCellVolt;
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c1_sfEvent;
  uint8_T c1_is_active_c1_BMSBalancingLogic;
  uint32_T c1_is_c1_BMSBalancingLogic;
  uint32_T c1_is_BalancingON;
  void *c1_RuntimeVar;
  int32_T c1_IsDebuggerActive;
  int32_T c1_IsSequenceViewerPresent;
  int32_T c1_SequenceViewerOptimization;
  int32_T c1_IsHeatMapPresent;
  uint16_T c1_temporalCounter_i1;
  boolean_T c1_dataWrittenToVector[1];
  uint8_T c1_doSetSimStateSideEffects;
  const mxArray *c1_setSimStateSideEffectsInfo;
  uint8_T c1_JITStateAnimation[5];
  uint8_T c1_JITTransitionAnimation[7];
  uint32_T c1_mlFcnLineNumber;
  rtwCAPI_ModelMappingInfo c1_testPointMappingInfo;
  void *c1_testPointAddrMap[1];
  CovrtStateflowInstance *c1_covrtInstance;
  void *c1_fEmlrtCtx;
  real32_T *c1_BMS_State;
  real32_T (*c1_CellVoltages)[96];
  boolean_T (*c1_BalCmd)[96];
  real32_T *c1_MaxCellVolt;
  real32_T *c1_MinCellVolt;
} SFc1_BMSBalancingLogicInstanceStruct;

#endif                                 /* typedef_SFc1_BMSBalancingLogicInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern void mdlZeroCrossings_c1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance);
extern const mxArray *sf_c1_BMSBalancingLogic_get_eml_resolved_functions_info
  (void);
extern mxArray *sf_c1_BMSBalancingLogic_getDebuggerHoverDataFor
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance, uint32_T c1_u);

/* Function Definitions */
extern void sf_c1_BMSBalancingLogic_get_check_sum(mxArray *plhs[]);
extern void c1_BMSBalancingLogic_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
