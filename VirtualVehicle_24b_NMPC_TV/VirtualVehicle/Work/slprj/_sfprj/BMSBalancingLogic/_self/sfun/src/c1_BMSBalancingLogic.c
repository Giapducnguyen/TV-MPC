/* Include files */

#include "BMSBalancingLogic_sfun.h"
#include "c1_BMSBalancingLogic.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define c1_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define c1_IN_NO_ACTIVE_LEAF           ((uint8_T)0U)
#define CALL_EVENT                     (-1)
#define c1_IN_BalancingOFF             (1U)
#define c1_IN_BalancingON              (2U)
#define c1_IN_BalActive                (1U)
#define c1_IN_BalNotActive             (2U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtRTEInfo c1_emlrtRTEI = { 128,/* lineNo */
  57,                                  /* colNo */
  "allOrAny",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pName */
};

/* Function Declarations */
static void initSimStructsc1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance);
static void initSubchartIOPointersc1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance);
static void initialize_c1_BMSBalancingLogic(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance);
static void initialize_params_c1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance);
static void mdl_start_c1_BMSBalancingLogic(SFc1_BMSBalancingLogicInstanceStruct *
  chartInstance);
static void mdl_terminate_c1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance);
static void enable_c1_BMSBalancingLogic(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance);
static void disable_c1_BMSBalancingLogic(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance);
static void c1_set_sim_state_side_effects_c1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance);
static void sf_gateway_c1_BMSBalancingLogic(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance);
static void ext_mode_exec_c1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance);
static void c1_update_jit_animation_c1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance);
static void c1_do_animation_call_c1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance);
static void set_sim_state_c1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance, const mxArray *c1_st);
static void c1_enter_atomic_BalActive(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance);
static const mxArray *c1_sfAfterOrElapsed(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance);
static const mxArray *c1_b_sfAfterOrElapsed(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance);
static const mxArray *c1_c_sfAfterOrElapsed(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance);
static void c1_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier,
  boolean_T c1_y[96]);
static void c1_b_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T c1_y[96]);
static real32_T c1_c_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier);
static real32_T c1_d_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static boolean_T c1_e_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier);
static boolean_T c1_f_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static uint8_T c1_g_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier);
static uint8_T c1_h_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static uint32_T c1_i_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier);
static uint32_T c1_j_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static uint16_T c1_k_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier);
static uint16_T c1_l_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_m_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier,
  boolean_T c1_y[1]);
static void c1_n_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T c1_y[1]);
static const mxArray *c1_o_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier);
static const mxArray *c1_p_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_slStringInitializeDynamicBuffers
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance);
static void c1_init_sf_message_store_memory(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance);
static void c1_chart_data_browse_helper(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, int32_T c1_ssIdNumber, const mxArray **c1_mxData, uint8_T
  *c1_isValueBrowsable);
static void init_test_point_addr_map(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance);
static void init_dsm_address_info(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initSimStructsc1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void initialize_c1_BMSBalancingLogic(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance)
{
  int32_T c1_i;
  int32_T c1_i1;
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c1_doSetSimStateSideEffects = 0U;
  chartInstance->c1_setSimStateSideEffectsInfo = NULL;
  chartInstance->c1_temporalCounter_i1 = 0U;
  chartInstance->c1_temporalCounter_i1 = 0U;
  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  if (sf_get_output_port_reusable(chartInstance->S, 1) == 0) {
    for (c1_i = 0; c1_i < 96; c1_i++) {
      (*chartInstance->c1_BalCmd)[c1_i] = false;
    }

    for (c1_i1 = 0; c1_i1 < 96; c1_i1++) {
      covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 6U, (real_T)
                        (*chartInstance->c1_BalCmd)[c1_i1]);
    }
  }

  chartInstance->c1_flgBalCompl = false;
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 1U, (real_T)
                    chartInstance->c1_flgBalCompl);
  chartInstance->c1_DeltaCellVolt = 0.0F;
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U, (real_T)
                    chartInstance->c1_DeltaCellVolt);
  chartInstance->c1_is_active_c1_BMSBalancingLogic = 0U;
  chartInstance->c1_is_c1_BMSBalancingLogic = c1_IN_NO_ACTIVE_CHILD;
  chartInstance->c1_is_BalancingON = c1_IN_NO_ACTIVE_CHILD;
}

static void initialize_params_c1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance)
{
  real_T c1_d;
  real_T c1_d1;
  real_T c1_d2;
  real_T c1_d3;
  real_T c1_d4;
  real_T c1_d5;
  real_T c1_d6;
  real_T c1_d7;
  int16_T c1_i;
  int16_T c1_i1;
  int16_T c1_i2;
  sf_mex_import_named("TargetDeltaV", sf_mex_get_sfun_param(chartInstance->S, 3U,
    0U), &c1_d, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c1_TargetDeltaV = (real32_T)c1_d;
  sf_mex_import_named("BalNotActWait", sf_mex_get_sfun_param(chartInstance->S,
    0U, 0U), &c1_d1, 0, 0, 0U, 0, 0U, 0);
  c1_d2 = c1_d1;
  if (c1_d2 < 32768.0) {
    if (c1_d2 >= -32768.0) {
      c1_i = (int16_T)c1_d2;
    } else {
      c1_i = MIN_int16_T;
    }
  } else if (c1_d2 >= 32768.0) {
    c1_i = MAX_int16_T;
  } else {
    c1_i = 0;
  }

  chartInstance->c1_BalNotActWait = c1_i;
  sf_mex_import_named("BalOffWait", sf_mex_get_sfun_param(chartInstance->S, 1U,
    0U), &c1_d3, 0, 0, 0U, 0, 0U, 0);
  c1_d4 = c1_d3;
  if (c1_d4 < 32768.0) {
    if (c1_d4 >= -32768.0) {
      c1_i1 = (int16_T)c1_d4;
    } else {
      c1_i1 = MIN_int16_T;
    }
  } else if (c1_d4 >= 32768.0) {
    c1_i1 = MAX_int16_T;
  } else {
    c1_i1 = 0;
  }

  chartInstance->c1_BalOffWait = c1_i1;
  sf_mex_import_named("BalOnWait", sf_mex_get_sfun_param(chartInstance->S, 2U,
    0U), &c1_d5, 0, 0, 0U, 0, 0U, 0);
  c1_d6 = c1_d5;
  if (c1_d6 < 32768.0) {
    if (c1_d6 >= -32768.0) {
      c1_i2 = (int16_T)c1_d6;
    } else {
      c1_i2 = MIN_int16_T;
    }
  } else if (c1_d6 >= 32768.0) {
    c1_i2 = MAX_int16_T;
  } else {
    c1_i2 = 0;
  }

  chartInstance->c1_BalOnWait = c1_i2;
  sf_mex_import_named("flgEnBalancing", sf_mex_get_sfun_param(chartInstance->S,
    4U, 0U), &c1_d7, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c1_flgEnBalancing = (c1_d7 != 0.0);
}

static void mdl_start_c1_BMSBalancingLogic(SFc1_BMSBalancingLogicInstanceStruct *
  chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance)
{
  static const int32_T c1_b_postfixPredicateTree[7] = { 0, 1, -3, 2, -3, 3, -3 };

  static const int32_T c1_b_condTxtEndIdx[4] = { 15, 37, 66, 102 };

  static const int32_T c1_b_condTxtStartIdx[4] = { 1, 23, 45, 74 };

  static const int32_T c1_postfixPredicateTree[3] = { 0, 1, -3 };

  static const int32_T c1_condTxtEndIdx[2] = { 25, 61 };

  static const int32_T c1_condTxtStartIdx[2] = { 1, 33 };

  static const uint32_T c1_b_decisionTxtEndIdx = 0U;
  static const uint32_T c1_b_decisionTxtStartIdx = 0U;
  static const uint32_T c1_c_decisionTxtEndIdx = 0U;
  static const uint32_T c1_c_decisionTxtStartIdx = 0U;
  static const uint32_T c1_d_decisionTxtEndIdx = 0U;
  static const uint32_T c1_d_decisionTxtStartIdx = 0U;
  static const uint32_T c1_decisionTxtEndIdx = 0U;
  static const uint32_T c1_decisionTxtStartIdx = 0U;
  setDataBrowseFcn(chartInstance->S, (void *)&c1_chart_data_browse_helper);
  chartInstance->c1_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c1_RuntimeVar,
    &chartInstance->c1_IsDebuggerActive,
    &chartInstance->c1_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c1_mlFcnLineNumber, &chartInstance->c1_IsHeatMapPresent, 0);
  sfListenerRegisterHover(chartInstance->c1_RuntimeVar, (void *)
    &sf_c1_BMSBalancingLogic_getDebuggerHoverDataFor);
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c1_JITStateAnimation[0],
                        &chartInstance->c1_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c1_covrtInstance, 4U, 0U, 7U,
    24U);
  covrtChartInitFcn(chartInstance->c1_covrtInstance, 2U, true, false, false);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c1_decisionTxtStartIdx, &c1_decisionTxtEndIdx);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 1U, 2U, true, true, false,
                    0U, &c1_b_decisionTxtStartIdx, &c1_b_decisionTxtEndIdx);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 2U, 0U, false, false, false,
                    0U, &c1_c_decisionTxtStartIdx, &c1_c_decisionTxtEndIdx);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 3U, 0U, false, false, false,
                    0U, &c1_d_decisionTxtStartIdx, &c1_d_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 1U, 0, NULL, NULL, 0U, NULL);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 5U, 0, NULL, NULL, 0U, NULL);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 2U, 0, NULL, NULL, 0U, NULL);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 3U, 0, NULL, NULL, 0U, NULL);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 4U, 0, NULL, NULL, 0U, NULL);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 6U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 4U, 0U, 0U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 4U, 1U, 0U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 4U, 2U, 0U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 5U, 4U, 0U, 0U, 1U, 0U,
                  0U, 0U, 0U, 0U, 2U, 1U);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 5U, 4U, 0U, 1, 61, -1, 61,
                    false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 5U, 4U, 0U, 1, 61, 2U, 0U,
                      &c1_condTxtStartIdx[0], &c1_condTxtEndIdx[0], 3U,
                      &c1_postfixPredicateTree[0], false);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 5U, 4U, 0U, 33, 61,
    -3, 4U);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 5U, 6U, 0U, 0U, 1U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 5U, 6U, 0U, 1, 12, -1, 12,
                    false);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 5U, 0U, 0U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 5U, 1U, 0U, 0U, 1U, 0U,
                  0U, 0U, 0U, 0U, 4U, 1U);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 5U, 1U, 0U, 1, 102, -1, 102,
                    false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 5U, 1U, 0U, 1, 102, 4U,
                      0U, &c1_b_condTxtStartIdx[0], &c1_b_condTxtEndIdx[0], 7U,
                      &c1_b_postfixPredicateTree[0], false);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 5U, 1U, 0U, 23, 37,
    -1, 1U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 5U, 1U, 1U, 74, 102,
    -3, 4U);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 5U, 5U, 0U, 0U, 1U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 5U, 5U, 0U, 1, 15, -1, 15,
                    false);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 5U, 5U, 0U, 1, 15,
    -1, 0U);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 5U, 2U, 0U, 0U, 1U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 5U, 2U, 0U, 1, 21, -1, 21,
                    false);
}

static void mdl_cleanup_runtime_resources_c1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c1_RuntimeVar);
  sf_mex_destroy(&chartInstance->c1_setSimStateSideEffectsInfo);
  covrtDeleteStateflowInstanceData(chartInstance->c1_covrtInstance);
}

static void enable_c1_BMSBalancingLogic(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c1_BMSBalancingLogic(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c1_set_sim_state_side_effects_c1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance)
{
  if (chartInstance->c1_doSetSimStateSideEffects != 0) {
    if ((chartInstance->c1_is_c1_BMSBalancingLogic == c1_IN_BalancingOFF) &&
        (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                    "setSimStateSideEffectsInfo", 1U, 2U) == 0.0)) {
      chartInstance->c1_temporalCounter_i1 = 0U;
    }

    if ((chartInstance->c1_is_BalancingON == c1_IN_BalNotActive) && (sf_mex_sub
         (chartInstance->c1_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1U, 5U) == 0.0)) {
      chartInstance->c1_temporalCounter_i1 = 0U;
    }

    chartInstance->c1_doSetSimStateSideEffects = 0U;
  }
}

static void sf_gateway_c1_BMSBalancingLogic(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance)
{
  real_T c1_b_k;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_k;
  real32_T c1_b_x;
  real32_T c1_x;
  real32_T c1_z;
  boolean_T c1_c_x[96];
  boolean_T c1_x_data[96];
  boolean_T c1_b_out;
  boolean_T c1_c_out;
  boolean_T c1_d_out;
  boolean_T c1_e_out;
  boolean_T c1_exitg1;
  boolean_T c1_guard1;
  boolean_T c1_out;
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 5U, (real_T)
                    *chartInstance->c1_MinCellVolt);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 4U, (real_T)
                    *chartInstance->c1_MaxCellVolt);
  for (c1_i = 0; c1_i < 96; c1_i++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 3U, (real_T)
                      (*chartInstance->c1_CellVoltages)[c1_i]);
  }

  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 2U, (real_T)
                    *chartInstance->c1_BMS_State);
  c1_set_sim_state_side_effects_c1_BMSBalancingLogic(chartInstance);
  _sfTime_ = sf_get_time(chartInstance->S);
  if (chartInstance->c1_temporalCounter_i1 < 8191) {
    chartInstance->c1_temporalCounter_i1++;
  }

  chartInstance->c1_JITTransitionAnimation[0] = 0U;
  chartInstance->c1_JITTransitionAnimation[1] = 0U;
  chartInstance->c1_JITTransitionAnimation[2] = 0U;
  chartInstance->c1_JITTransitionAnimation[3] = 0U;
  chartInstance->c1_JITTransitionAnimation[4] = 0U;
  chartInstance->c1_JITTransitionAnimation[5] = 0U;
  chartInstance->c1_JITTransitionAnimation[6] = 0U;
  chartInstance->c1_sfEvent = CALL_EVENT;
  if (chartInstance->c1_is_active_c1_BMSBalancingLogic == 0) {
    chartInstance->c1_is_active_c1_BMSBalancingLogic = 1U;
    chartInstance->c1_JITTransitionAnimation[0U] = 1U;
    chartInstance->c1_flgBalCompl = true;
    chartInstance->c1_dataWrittenToVector[0U] = true;
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 1U, (real_T)
                      chartInstance->c1_flgBalCompl);
    chartInstance->c1_temporalCounter_i1 = 0U;
    chartInstance->c1_is_c1_BMSBalancingLogic = c1_IN_BalancingOFF;
    for (c1_i1 = 0; c1_i1 < 96; c1_i1++) {
      (*chartInstance->c1_BalCmd)[c1_i1] = false;
    }

    for (c1_i2 = 0; c1_i2 < 96; c1_i2++) {
      covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 6U, (real_T)
                        (*chartInstance->c1_BalCmd)[c1_i2]);
    }

    chartInstance->c1_DeltaCellVolt = *chartInstance->c1_MaxCellVolt -
      *chartInstance->c1_MinCellVolt;
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U, (real_T)
                      chartInstance->c1_DeltaCellVolt);
  } else {
    switch (chartInstance->c1_is_c1_BMSBalancingLogic) {
     case c1_IN_BalancingOFF:
      covrtDecUpdateFcn(chartInstance->c1_covrtInstance, 1U, 0, 0,
                        c1_IN_BalancingOFF);
      c1_guard1 = false;
      if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 5U, 1, 0,
                           chartInstance->c1_flgEnBalancing) && covrtEmlCondEval
          (chartInstance->c1_covrtInstance, 5U, 1, 1, covrtRelationalopUpdateFcn
           (chartInstance->c1_covrtInstance, 5U, 1U, 0U, (real_T)
            *chartInstance->c1_BMS_State, 2.0, -1, 1U,
            *chartInstance->c1_BMS_State != 2.0F))) {
        sf_temporal_value_range_check_min(chartInstance->S, 464U, (real_T)
          chartInstance->c1_BalOffWait, 0.0);
        if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 5U, 1, 2,
                             chartInstance->c1_temporalCounter_i1 * 5 >=
                             chartInstance->c1_BalOffWait) && covrtEmlCondEval
            (chartInstance->c1_covrtInstance, 5U, 1, 3,
             covrtRelationalopUpdateFcn(chartInstance->c1_covrtInstance, 5U, 1U,
              1U, (real_T)chartInstance->c1_DeltaCellVolt, (real_T)
              chartInstance->c1_TargetDeltaV, -3, 4U,
              chartInstance->c1_DeltaCellVolt > chartInstance->c1_TargetDeltaV)))
        {
          covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 5U, 1, 0, true);
          covrtEmlIfEval(chartInstance->c1_covrtInstance, 5U, 1, 0, true);
          c1_b_out = true;
        } else {
          c1_guard1 = true;
        }
      } else {
        c1_guard1 = true;
      }

      if (c1_guard1) {
        covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 5U, 1, 0, false);
        covrtEmlIfEval(chartInstance->c1_covrtInstance, 5U, 1, 0, false);
        c1_b_out = false;
      }

      if (c1_b_out) {
        chartInstance->c1_JITTransitionAnimation[1U] = 1U;
        chartInstance->c1_is_c1_BMSBalancingLogic = c1_IN_NO_ACTIVE_CHILD;
        chartInstance->c1_is_c1_BMSBalancingLogic = c1_IN_BalancingON;
        chartInstance->c1_DeltaCellVolt = *chartInstance->c1_MaxCellVolt -
          *chartInstance->c1_MinCellVolt;
        covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U, (real_T)
                          chartInstance->c1_DeltaCellVolt);
        chartInstance->c1_JITTransitionAnimation[3U] = 1U;
        chartInstance->c1_is_BalancingON = c1_IN_BalActive;
        c1_enter_atomic_BalActive(chartInstance);
      } else {
        chartInstance->c1_DeltaCellVolt = *chartInstance->c1_MaxCellVolt -
          *chartInstance->c1_MinCellVolt;
        covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U, (real_T)
                          chartInstance->c1_DeltaCellVolt);
      }
      break;

     case c1_IN_BalancingON:
      covrtDecUpdateFcn(chartInstance->c1_covrtInstance, 1U, 0, 0,
                        c1_IN_BalancingON);
      if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 5U, 5, 0,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c1_covrtInstance, 5U, 5U, 0U, (real_T)
                          *chartInstance->c1_BMS_State, 2.0, -1, 0U,
                          *chartInstance->c1_BMS_State == 2.0F))) {
        c1_out = true;
      } else {
        c1_out = false;
      }

      if (c1_out) {
        chartInstance->c1_JITTransitionAnimation[5U] = 1U;
        switch (chartInstance->c1_is_BalancingON) {
         case c1_IN_BalActive:
          covrtDecUpdateFcn(chartInstance->c1_covrtInstance, 4U, 1, 1,
                            c1_IN_BalActive);
          chartInstance->c1_is_BalancingON = c1_IN_NO_ACTIVE_CHILD;
          break;

         case c1_IN_BalNotActive:
          covrtDecUpdateFcn(chartInstance->c1_covrtInstance, 4U, 1, 1,
                            c1_IN_BalNotActive);
          chartInstance->c1_is_BalancingON = c1_IN_NO_ACTIVE_CHILD;
          break;

         default:
          covrtDecUpdateFcn(chartInstance->c1_covrtInstance, 4U, 1, 1, 0);
          chartInstance->c1_is_BalancingON = c1_IN_NO_ACTIVE_CHILD;
          break;
        }

        chartInstance->c1_is_c1_BMSBalancingLogic = c1_IN_NO_ACTIVE_CHILD;
        chartInstance->c1_temporalCounter_i1 = 0U;
        chartInstance->c1_is_c1_BMSBalancingLogic = c1_IN_BalancingOFF;
        for (c1_i3 = 0; c1_i3 < 96; c1_i3++) {
          (*chartInstance->c1_BalCmd)[c1_i3] = false;
        }

        for (c1_i4 = 0; c1_i4 < 96; c1_i4++) {
          covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 6U, (real_T)
                            (*chartInstance->c1_BalCmd)[c1_i4]);
        }

        chartInstance->c1_DeltaCellVolt = *chartInstance->c1_MaxCellVolt -
          *chartInstance->c1_MinCellVolt;
        covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U, (real_T)
                          chartInstance->c1_DeltaCellVolt);
      } else {
        chartInstance->c1_DeltaCellVolt = *chartInstance->c1_MaxCellVolt -
          *chartInstance->c1_MinCellVolt;
        covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U, (real_T)
                          chartInstance->c1_DeltaCellVolt);
        switch (chartInstance->c1_is_BalancingON) {
         case c1_IN_BalActive:
          covrtDecUpdateFcn(chartInstance->c1_covrtInstance, 4U, 1, 0,
                            c1_IN_BalActive);
          if (!chartInstance->c1_dataWrittenToVector[0U]) {
            sf_read_before_write_error(chartInstance->S, 1U, 482U, 1, 11);
          }

          if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 5U, 6, 0,
                             chartInstance->c1_flgBalCompl)) {
            c1_c_out = true;
          } else {
            c1_c_out = false;
          }

          if (c1_c_out) {
            chartInstance->c1_JITTransitionAnimation[6U] = 1U;
            chartInstance->c1_is_BalancingON = c1_IN_NO_ACTIVE_CHILD;
            chartInstance->c1_temporalCounter_i1 = 0U;
            chartInstance->c1_is_BalancingON = c1_IN_BalNotActive;
          } else {
            c1_x = chartInstance->c1_TargetDeltaV;
            c1_b_x = c1_x;
            c1_z = c1_b_x / 2.0F;
            for (c1_i5 = 0; c1_i5 < 96; c1_i5++) {
              (*chartInstance->c1_BalCmd)[c1_i5] =
                ((*chartInstance->c1_CellVoltages)[c1_i5] -
                 *chartInstance->c1_MinCellVolt > c1_z);
            }

            for (c1_i6 = 0; c1_i6 < 96; c1_i6++) {
              covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 6U, (real_T)
                                (*chartInstance->c1_BalCmd)[c1_i6]);
            }

            for (c1_i7 = 0; c1_i7 < 96; c1_i7++) {
              c1_c_x[c1_i7] = !(*chartInstance->c1_BalCmd)[c1_i7];
            }

            for (c1_i8 = 0; c1_i8 < 96; c1_i8++) {
              c1_x_data[c1_i8] = c1_c_x[c1_i8];
            }

            chartInstance->c1_flgBalCompl = true;
            c1_k = 0;
            c1_exitg1 = false;
            while ((!c1_exitg1) && (c1_k < 96)) {
              c1_b_k = (real_T)c1_k + 1.0;
              if (!c1_x_data[(int32_T)c1_b_k - 1]) {
                chartInstance->c1_flgBalCompl = false;
                c1_exitg1 = true;
              } else {
                c1_k++;
              }
            }

            chartInstance->c1_dataWrittenToVector[0U] = true;
            covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 1U, (real_T)
                              chartInstance->c1_flgBalCompl);
          }
          break;

         case c1_IN_BalNotActive:
          covrtDecUpdateFcn(chartInstance->c1_covrtInstance, 4U, 1, 0,
                            c1_IN_BalNotActive);
          sf_temporal_value_range_check_min(chartInstance->S, 480U, (real_T)
            chartInstance->c1_BalNotActWait, 0.0);
          if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 5U, 4, 0,
                               chartInstance->c1_temporalCounter_i1 * 5 >=
                               chartInstance->c1_BalNotActWait) &&
              covrtEmlCondEval(chartInstance->c1_covrtInstance, 5U, 4, 1,
                               covrtRelationalopUpdateFcn
                               (chartInstance->c1_covrtInstance, 5U, 4U, 0U,
                                (real_T)chartInstance->c1_DeltaCellVolt, (real_T)
                                chartInstance->c1_TargetDeltaV, -3, 4U,
                                chartInstance->c1_DeltaCellVolt >
                                chartInstance->c1_TargetDeltaV))) {
            covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 5U, 4, 0, true);
            covrtEmlIfEval(chartInstance->c1_covrtInstance, 5U, 4, 0, true);
            c1_d_out = true;
          } else {
            covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 5U, 4, 0, false);
            covrtEmlIfEval(chartInstance->c1_covrtInstance, 5U, 4, 0, false);
            c1_d_out = false;
          }

          if (c1_d_out) {
            chartInstance->c1_JITTransitionAnimation[4U] = 1U;
            chartInstance->c1_is_BalancingON = c1_IN_NO_ACTIVE_CHILD;
            chartInstance->c1_is_BalancingON = c1_IN_BalActive;
            c1_enter_atomic_BalActive(chartInstance);
          } else {
            sf_temporal_value_range_check_min(chartInstance->S, 466U, (real_T)
              chartInstance->c1_BalOnWait, 0.0);
            if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 5U, 2, 0,
                               chartInstance->c1_temporalCounter_i1 * 5 >=
                               chartInstance->c1_BalOnWait)) {
              c1_e_out = true;
            } else {
              c1_e_out = false;
            }

            if (c1_e_out) {
              chartInstance->c1_JITTransitionAnimation[2U] = 1U;
              chartInstance->c1_is_BalancingON = c1_IN_NO_ACTIVE_CHILD;
              chartInstance->c1_is_c1_BMSBalancingLogic = c1_IN_NO_ACTIVE_CHILD;
              chartInstance->c1_temporalCounter_i1 = 0U;
              chartInstance->c1_is_c1_BMSBalancingLogic = c1_IN_BalancingOFF;
              for (c1_i9 = 0; c1_i9 < 96; c1_i9++) {
                (*chartInstance->c1_BalCmd)[c1_i9] = false;
              }

              for (c1_i10 = 0; c1_i10 < 96; c1_i10++) {
                covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 6U, (real_T)(*
                  chartInstance->c1_BalCmd)[c1_i10]);
              }

              chartInstance->c1_DeltaCellVolt = *chartInstance->c1_MaxCellVolt -
                *chartInstance->c1_MinCellVolt;
              covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U, (real_T)
                                chartInstance->c1_DeltaCellVolt);
            }
          }
          break;

         default:
          covrtDecUpdateFcn(chartInstance->c1_covrtInstance, 4U, 1, 0, 0);

          /* Unreachable state, for coverage only */
          chartInstance->c1_is_BalancingON = c1_IN_NO_ACTIVE_CHILD;
          break;
        }
      }
      break;

     default:
      covrtDecUpdateFcn(chartInstance->c1_covrtInstance, 1U, 0, 0, 0);

      /* Unreachable state, for coverage only */
      chartInstance->c1_is_c1_BMSBalancingLogic = c1_IN_NO_ACTIVE_CHILD;
      break;
    }
  }

  c1_update_jit_animation_c1_BMSBalancingLogic(chartInstance);
  c1_do_animation_call_c1_BMSBalancingLogic(chartInstance);
}

static void ext_mode_exec_c1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

void mdlZeroCrossings_c1_BMSBalancingLogic(SFc1_BMSBalancingLogicInstanceStruct *
  chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c1_update_jit_animation_c1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance)
{
  chartInstance->c1_JITStateAnimation[0U] = (uint8_T)
    (chartInstance->c1_is_c1_BMSBalancingLogic == c1_IN_BalancingON);
  chartInstance->c1_JITStateAnimation[1U] = (uint8_T)
    (chartInstance->c1_is_c1_BMSBalancingLogic == c1_IN_BalancingOFF);
  chartInstance->c1_JITStateAnimation[2U] = (uint8_T)
    (chartInstance->c1_is_BalancingON == c1_IN_BalActive);
  chartInstance->c1_JITStateAnimation[3U] = (uint8_T)
    (chartInstance->c1_is_BalancingON == c1_IN_BalNotActive);
}

static void c1_do_animation_call_c1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance)
{
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  const mxArray *c1_g_y = NULL;
  const mxArray *c1_h_y = NULL;
  const mxArray *c1_i_y = NULL;
  const mxArray *c1_st;
  const mxArray *c1_y = NULL;
  c1_st = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellmatrix(8, 1), false);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", *chartInstance->c1_BalCmd, 11, 0U, 1,
    0U, 2, 1, 96), false);
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", &chartInstance->c1_DeltaCellVolt, 1,
    0U, 0, 0U, 0), false);
  sf_mex_setcell(c1_y, 1, c1_c_y);
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", &chartInstance->c1_flgBalCompl, 11,
    0U, 0, 0U, 0), false);
  sf_mex_setcell(c1_y, 2, c1_d_y);
  c1_e_y = NULL;
  sf_mex_assign(&c1_e_y, sf_mex_create("y",
    &chartInstance->c1_is_active_c1_BMSBalancingLogic, 3, 0U, 0, 0U, 0), false);
  sf_mex_setcell(c1_y, 3, c1_e_y);
  c1_f_y = NULL;
  sf_mex_assign(&c1_f_y, sf_mex_create("y",
    &chartInstance->c1_is_c1_BMSBalancingLogic, 7, 0U, 0, 0U, 0), false);
  sf_mex_setcell(c1_y, 4, c1_f_y);
  c1_g_y = NULL;
  sf_mex_assign(&c1_g_y, sf_mex_create("y", &chartInstance->c1_is_BalancingON, 7,
    0U, 0, 0U, 0), false);
  sf_mex_setcell(c1_y, 5, c1_g_y);
  c1_h_y = NULL;
  sf_mex_assign(&c1_h_y, sf_mex_create("y",
    &chartInstance->c1_temporalCounter_i1, 5, 0U, 0, 0U, 0), false);
  sf_mex_setcell(c1_y, 6, c1_h_y);
  c1_i_y = NULL;
  sf_mex_assign(&c1_i_y, sf_mex_create("y",
    chartInstance->c1_dataWrittenToVector, 11, 0U, 1, 0U, 1, 1), false);
  sf_mex_setcell(c1_y, 7, c1_i_y);
  sf_mex_assign(&c1_st, c1_y, false);
  return c1_st;
}

static void set_sim_state_c1_BMSBalancingLogic
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_u;
  int32_T c1_i;
  boolean_T c1_bv[96];
  boolean_T c1_bv1[1];
  c1_u = sf_mex_dup(c1_st);
  c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 0)),
                      "BalCmd", c1_bv);
  for (c1_i = 0; c1_i < 96; c1_i++) {
    (*chartInstance->c1_BalCmd)[c1_i] = c1_bv[c1_i];
  }

  chartInstance->c1_DeltaCellVolt = c1_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 1)), "DeltaCellVolt");
  chartInstance->c1_flgBalCompl = c1_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 2)), "flgBalCompl");
  chartInstance->c1_is_active_c1_BMSBalancingLogic = c1_g_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 3)),
     "is_active_c1_BMSBalancingLogic");
  chartInstance->c1_is_c1_BMSBalancingLogic = c1_i_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 4)),
     "is_c1_BMSBalancingLogic");
  chartInstance->c1_is_BalancingON = c1_i_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 5)), "is_BalancingON");
  chartInstance->c1_temporalCounter_i1 = c1_k_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 6)), "temporalCounter_i1");
  c1_m_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 7)),
                        "dataWrittenToVector", c1_bv1);
  chartInstance->c1_dataWrittenToVector[0] = c1_bv1[0];
  sf_mex_assign(&chartInstance->c1_setSimStateSideEffectsInfo,
                c1_o_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c1_u, 8)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c1_u);
  chartInstance->c1_doSetSimStateSideEffects = 1U;
  c1_update_jit_animation_c1_BMSBalancingLogic(chartInstance);
  sf_mex_destroy(&c1_st);
}

static void c1_enter_atomic_BalActive(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance)
{
  real_T c1_b_k;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_k;
  real32_T c1_b_x;
  real32_T c1_x;
  real32_T c1_z;
  boolean_T c1_c_x[96];
  boolean_T c1_x_data[96];
  boolean_T c1_exitg1;
  c1_x = chartInstance->c1_TargetDeltaV;
  c1_b_x = c1_x;
  c1_z = c1_b_x / 2.0F;
  for (c1_i = 0; c1_i < 96; c1_i++) {
    (*chartInstance->c1_BalCmd)[c1_i] = ((*chartInstance->c1_CellVoltages)[c1_i]
      - *chartInstance->c1_MinCellVolt > c1_z);
  }

  for (c1_i1 = 0; c1_i1 < 96; c1_i1++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 6U, (real_T)
                      (*chartInstance->c1_BalCmd)[c1_i1]);
  }

  for (c1_i2 = 0; c1_i2 < 96; c1_i2++) {
    c1_c_x[c1_i2] = !(*chartInstance->c1_BalCmd)[c1_i2];
  }

  for (c1_i3 = 0; c1_i3 < 96; c1_i3++) {
    c1_x_data[c1_i3] = c1_c_x[c1_i3];
  }

  chartInstance->c1_flgBalCompl = true;
  c1_k = 0;
  c1_exitg1 = false;
  while ((!c1_exitg1) && (c1_k < 96)) {
    c1_b_k = (real_T)c1_k + 1.0;
    if (!c1_x_data[(int32_T)c1_b_k - 1]) {
      chartInstance->c1_flgBalCompl = false;
      c1_exitg1 = true;
    } else {
      c1_k++;
    }
  }

  chartInstance->c1_dataWrittenToVector[0U] = true;
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 1U, (real_T)
                    chartInstance->c1_flgBalCompl);
}

const mxArray *sf_c1_BMSBalancingLogic_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  sf_mex_assign(&c1_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c1_nameCaptureInfo;
}

static const mxArray *c1_sfAfterOrElapsed(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance)
{
  const mxArray *c1_m = NULL;
  real_T c1_d;
  real_T c1_d1;
  c1_m = NULL;
  if (chartInstance->c1_is_BalancingON == c1_IN_BalNotActive) {
    c1_d1 = 5.0 * (real_T)chartInstance->c1_temporalCounter_i1;
    sf_mex_assign(&c1_m, sf_mex_create("unnamed temp", &c1_d1, 0, 0U, 0, 0U, 0),
                  false);
  } else {
    c1_d = -1.0;
    sf_mex_assign(&c1_m, sf_mex_create("unnamed temp", &c1_d, 0, 0U, 0, 0U, 0),
                  false);
  }

  return c1_m;
}

static const mxArray *c1_b_sfAfterOrElapsed(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance)
{
  const mxArray *c1_m = NULL;
  real_T c1_d;
  real_T c1_d1;
  c1_m = NULL;
  if (chartInstance->c1_is_c1_BMSBalancingLogic == c1_IN_BalancingOFF) {
    c1_d1 = 5.0 * (real_T)chartInstance->c1_temporalCounter_i1;
    sf_mex_assign(&c1_m, sf_mex_create("unnamed temp", &c1_d1, 0, 0U, 0, 0U, 0),
                  false);
  } else {
    c1_d = -1.0;
    sf_mex_assign(&c1_m, sf_mex_create("unnamed temp", &c1_d, 0, 0U, 0, 0U, 0),
                  false);
  }

  return c1_m;
}

static const mxArray *c1_c_sfAfterOrElapsed(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance)
{
  const mxArray *c1_m = NULL;
  real_T c1_d;
  real_T c1_d1;
  c1_m = NULL;
  if (chartInstance->c1_is_BalancingON == c1_IN_BalNotActive) {
    c1_d1 = 5.0 * (real_T)chartInstance->c1_temporalCounter_i1;
    sf_mex_assign(&c1_m, sf_mex_create("unnamed temp", &c1_d1, 0, 0U, 0, 0U, 0),
                  false);
  } else {
    c1_d = -1.0;
    sf_mex_assign(&c1_m, sf_mex_create("unnamed temp", &c1_d, 0, 0U, 0, 0U, 0),
                  false);
  }

  return c1_m;
}

static void c1_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier,
  boolean_T c1_y[96])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nullptr), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_nullptr);
}

static void c1_b_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T c1_y[96])
{
  int32_T c1_i;
  boolean_T c1_bv[96];
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_bv, 1, 11, 0U, 1, 0U, 2, 1, 96);
  for (c1_i = 0; c1_i < 96; c1_i++) {
    c1_y[c1_i] = c1_bv[c1_i];
  }

  sf_mex_destroy(&c1_u);
}

static real32_T c1_c_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  real32_T c1_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nullptr), &c1_thisId);
  sf_mex_destroy(&c1_nullptr);
  return c1_y;
}

static real32_T c1_d_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  real32_T c1_f;
  real32_T c1_y;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_f, 0, 1, 0U, 0, 0U, 0);
  c1_y = c1_f;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static boolean_T c1_e_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  boolean_T c1_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nullptr), &c1_thisId);
  sf_mex_destroy(&c1_nullptr);
  return c1_y;
}

static boolean_T c1_f_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  boolean_T c1_b;
  boolean_T c1_y;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b, 1, 11, 0U, 0, 0U, 0);
  c1_y = c1_b;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static uint8_T c1_g_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  uint8_T c1_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nullptr), &c1_thisId);
  sf_mex_destroy(&c1_nullptr);
  return c1_y;
}

static uint8_T c1_h_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_b_u;
  uint8_T c1_y;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b_u, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_b_u;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static uint32_T c1_i_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  uint32_T c1_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nullptr), &c1_thisId);
  sf_mex_destroy(&c1_nullptr);
  return c1_y;
}

static uint32_T c1_j_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint32_T c1_b_u;
  uint32_T c1_y;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b_u, 1, 7, 0U, 0, 0U, 0);
  c1_y = c1_b_u;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static uint16_T c1_k_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  uint16_T c1_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_l_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nullptr), &c1_thisId);
  sf_mex_destroy(&c1_nullptr);
  return c1_y;
}

static uint16_T c1_l_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint16_T c1_b_u;
  uint16_T c1_y;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b_u, 1, 5, 0U, 0, 0U, 0);
  c1_y = c1_b_u;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_m_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier,
  boolean_T c1_y[1])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_n_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nullptr), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_nullptr);
}

static void c1_n_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T c1_y[1])
{
  boolean_T c1_bv[1];
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_bv, 1, 11, 0U, 1, 0U, 1, 1);
  c1_y[0] = c1_bv[0];
  sf_mex_destroy(&c1_u);
}

static const mxArray *c1_o_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  const mxArray *c1_y = NULL;
  c1_y = NULL;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  sf_mex_assign(&c1_y, c1_p_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_nullptr), &c1_thisId), true);
  sf_mex_destroy(&c1_nullptr);
  return c1_y;
}

static const mxArray *c1_p_emlrt_marshallIn(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  const mxArray *c1_y = NULL;
  (void)chartInstance;
  (void)c1_parentId;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_duplicatearraysafe(&c1_u), true);
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_slStringInitializeDynamicBuffers
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_init_sf_message_store_memory(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

mxArray *sf_c1_BMSBalancingLogic_getDebuggerHoverDataFor
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance, uint32_T c1_u)
{
  const mxArray *c1_m = NULL;
  const mxArray *c1_m1 = NULL;
  const mxArray *c1_m2 = NULL;
  mxArray *c1_m3 = NULL;
  c1_m3 = NULL;
  switch (c1_u) {
   case 480U:
    sf_mex_assign(&c1_m, c1_sfAfterOrElapsed(chartInstance), false);
    sfAppendHoverData(&c1_m3, sf_mex_dup(c1_m), 480U, "afterOrElapsed", "", 477U,
                      -1, -1);
    break;

   case 464U:
    sf_mex_assign(&c1_m1, c1_b_sfAfterOrElapsed(chartInstance), false);
    sfAppendHoverData(&c1_m3, sf_mex_dup(c1_m1), 464U, "afterOrElapsed", "",
                      463U, -1, -1);
    break;

   case 466U:
    sf_mex_assign(&c1_m2, c1_c_sfAfterOrElapsed(chartInstance), false);
    sfAppendHoverData(&c1_m3, sf_mex_dup(c1_m2), 466U, "afterOrElapsed", "",
                      477U, -1, -1);
    break;
  }

  sf_mex_destroy(&c1_m);
  sf_mex_destroy(&c1_m1);
  sf_mex_destroy(&c1_m2);
  return c1_m3;
}

static void c1_chart_data_browse_helper(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance, int32_T c1_ssIdNumber, const mxArray **c1_mxData, uint8_T
  *c1_isValueBrowsable)
{
  real32_T c1_f;
  real32_T c1_f1;
  real32_T c1_f2;
  *c1_mxData = NULL;
  *c1_mxData = NULL;
  *c1_isValueBrowsable = 1U;
  switch (c1_ssIdNumber) {
   case 469U:
    c1_f = *chartInstance->c1_BMS_State;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_f, 1, 0U, 0, 0U, 0),
                  false);
    break;

   case 453U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      *chartInstance->c1_CellVoltages, 1, 0U, 1, 0U, 1, 96), false);
    break;

   case 191U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      &chartInstance->c1_TargetDeltaV, 1, 0U, 0, 0U, 0), false);
    break;

   case 451U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", *chartInstance->c1_BalCmd,
      11, 0U, 1, 0U, 2, 1, 96), false);
    break;

   case 474U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      &chartInstance->c1_flgBalCompl, 11, 0U, 0, 0U, 0), false);
    break;

   case 430U:
    c1_f1 = *chartInstance->c1_MaxCellVolt;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_f1, 1, 0U, 0, 0U, 0),
                  false);
    break;

   case 443U:
    c1_f2 = *chartInstance->c1_MinCellVolt;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_f2, 1, 0U, 0, 0U, 0),
                  false);
    break;

   case 485U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      &chartInstance->c1_BalNotActWait, 4, 0U, 0, 0U, 0), false);
    break;

   case 486U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      &chartInstance->c1_BalOffWait, 4, 0U, 0, 0U, 0), false);
    break;

   case 487U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      &chartInstance->c1_BalOnWait, 4, 0U, 0, 0U, 0), false);
    break;

   case 492U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      &chartInstance->c1_flgEnBalancing, 11, 0U, 0, 0U, 0), false);
    break;

   case 465U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      &chartInstance->c1_DeltaCellVolt, 1, 0U, 0, 0U, 0), false);
    break;
  }
}

static void init_test_point_addr_map(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance)
{
  chartInstance->c1_testPointAddrMap[0] = &chartInstance->c1_DeltaCellVolt;
}

static void **get_test_point_address_map(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance)
{
  return &chartInstance->c1_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc1_BMSBalancingLogicInstanceStruct *chartInstance)
{
  return &chartInstance->c1_testPointMappingInfo;
}

static void init_dsm_address_info(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc1_BMSBalancingLogicInstanceStruct
  *chartInstance)
{
  chartInstance->c1_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c1_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c1_BMS_State = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c1_CellVoltages = (real32_T (*)[96])
    ssGetInputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c1_BalCmd = (boolean_T (*)[96])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_MaxCellVolt = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c1_MinCellVolt = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c1_BMSBalancingLogic_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(593414796U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2660185372U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2418531886U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2525473122U);
}

mxArray *sf_c1_BMSBalancingLogic_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c1_BMSBalancingLogic_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("early");
  mxArray *fallbackReason = mxCreateString("testpoint");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("DeltaCellVolt");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c1_BMSBalancingLogic_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c1_BMSBalancingLogic(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNrNlcFKw0AQhjexlohYgh56k+LBc3rzZmg9GLAqKPUYls22BDbZkkzFQvsuPpKP4CP4CGaza5o"
    "uxRRTaheS5V/4J/PNJBlkeAOUrZa4WQg15YZMJNeh0kZpl+eNQneyC2YTKs7ThHhBtsc4yjWevn"
    "nxiOfxr9AyfnNNfKMU/0idy/V1XcvvzF3d31jjb5b8ttI9zPpRoOqj6vR3Dsut5bcXud+t4DjRO"
    "IS+oQxwnzI25AzQnvC8b8ZzrPEIPWJj0RoeTVjBUZ+nU49HPf+xgudc4xE6TH1MIHylPun6vcFT"
    "BodjEsbjOz4Oybb4LrbCd1vB19b42pJvLdhecH3ONnoPWxpXS3IVRA/32+rT5U76dKrxCA00mvB"
    "EfFnTGGjih91lPMv4fT4Y2nw4UFrkRgHxFBEo5+dU5Geu5GciDNLnVtTF1Opi/zz0Y+HKcTJ3/3"
    "UeIWcn/T3T+it0gAG/JCEAjZ/5kBLgycr/8xuXiVwI"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_BMSBalancingLogic_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s0PfgsE4veW7ViOfk7PaRzC";
}

static void sf_opaque_initialize_c1_BMSBalancingLogic(void *chartInstanceVar)
{
  initialize_params_c1_BMSBalancingLogic((SFc1_BMSBalancingLogicInstanceStruct*)
    chartInstanceVar);
  initialize_c1_BMSBalancingLogic((SFc1_BMSBalancingLogicInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c1_BMSBalancingLogic(void *chartInstanceVar)
{
  enable_c1_BMSBalancingLogic((SFc1_BMSBalancingLogicInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c1_BMSBalancingLogic(void *chartInstanceVar)
{
  disable_c1_BMSBalancingLogic((SFc1_BMSBalancingLogicInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c1_BMSBalancingLogic(void *chartInstanceVar)
{
  sf_gateway_c1_BMSBalancingLogic((SFc1_BMSBalancingLogicInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c1_BMSBalancingLogic(SimStruct* S)
{
  return get_sim_state_c1_BMSBalancingLogic
    ((SFc1_BMSBalancingLogicInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c1_BMSBalancingLogic(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c1_BMSBalancingLogic((SFc1_BMSBalancingLogicInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c1_BMSBalancingLogic(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_BMSBalancingLogicInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_BMSBalancingLogic_optimization_info();
    }

    mdl_cleanup_runtime_resources_c1_BMSBalancingLogic
      ((SFc1_BMSBalancingLogicInstanceStruct*) chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c1_BMSBalancingLogic(void *chartInstanceVar)
{
  mdl_start_c1_BMSBalancingLogic((SFc1_BMSBalancingLogicInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc1_BMSBalancingLogicInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c1_BMSBalancingLogic(void *chartInstanceVar)
{
  mdl_terminate_c1_BMSBalancingLogic((SFc1_BMSBalancingLogicInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_BMSBalancingLogic(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_BMSBalancingLogic((SFc1_BMSBalancingLogicInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c1_BMSBalancingLogic_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [26] = {
    "eNrlWd9vG0UQXruulUASQkGCBygFIcQLUtKCWiEETvwDLMWJVTsJ4iVa343tVfb23N09Jy6txF+",
    "CeOQRCSHxX9A/AQmJZx55ZPbu7Dhn1747h9SIkxxn7Hw38307Mzt7IZlqjeC1ga9f3yUkj+8r+M",
    "qS4LoZ2pmxV/B5jnwW2vWXCLG6VOqqaLsk+WW5NnRANLx2m50nxArPqVNJHZXCr6AOPATlck8zV",
    "yQLnok2SBAW3qDnSp3Ir2KOx5k4rXjCMp7VcZdZ3UbX9bi9izek9oHgg+f57Xm6jh5LTIKlKwC2",
    "7krX63QrnHZmqyD1WbEL1qnynMRaKdANr2eoqprHNetxKJ+DVRVKU1RBzeHb0FRDUZ8nzhCmGkO",
    "06/Q4oyK+1l2qGtDD7NBw2LPx54GnUb2YftFfiwmqXckoLzu8aDI8JrbOMc4apjVPrLN2dAlaXq",
    "fDRMeoKz0HBPLHPImhVbvo9kHSDhyIhDVo2JXP/QUe5WX8GqyatExVg54TrIpKhfX9lvuokErpt",
    "2KJIuVcJcM23d4e9IH7/ktU0xTYwH8CsFLMbrpHVJoqSFhJnmCPPAixRVfYLP4K9yMov+HuY/OM",
    "AWeOSSmwUeZR6KMbzctJT2nXKWIZlfb2YvqbxFaFBtmmFsTufZIyBRiwn1cJ/dpM0RY3aFRJ+yx",
    "j3wFEaihRbU+Uzlx5ihonbbIXWplKSIYGuwMl0OA3jDJm9xHlXsyYHYUdzqTHocKOlcwvYk39pA",
    "Jb1OqCbfYTxqEGytxAxe7PuI/sINs+04MSKEuyXtxK8hTYuJEYlZqDHhyKU+GeiYp0nUY4EczIK",
    "wDsGlQK3BZ2cVuSgwoGHy9qCY+aJrPSjGcO1Zy2TG58CQJ3FsPV7ITUwqoqCxzdMKBFsA32GLd2",
    "oZjSOE4Nyn4N2P48+mYm2Tz6amjfG9VSVTUlrhTFbVjgpLTT8oc9aDIH/A8aFGeKwAwv43eLXPh",
    "dzc72mw1/u05cJsR9NYbLTdHn9THcZmhb2ye7tcYuxQHFQvX33A6zpsWxFkPvmzFwZAJ3ofPw/c",
    "MxfGaKXzL2Pk+v3IReOZLBy+AKY7h1MhuXDzV79md1vfV+/sHPv/3y9rev/PHpIuv100qyfN4I7",
    "beG89loB+tPNPk4+fBGJB+Mrbbq7Y4qf9yH4/tH7KB9er9OHz4uBuszJ96VSLxD+w6+NDY4v19K",
    "q2qHZy1jUy84A5j7PxiLNz9Hj9WxfCLkry8Wwm89KUTx0/TKR/QyNlZO0bEv5296HiuFhfCbTwv",
    "RvJ7GYz3Cw9gl4JoWgfMjl2uyJHx+iMfn5QgfY7d5xyyNOSNO9Jf0fO4sxif0X5/D53aEz23/LH",
    "dCzZQBJ9M79tXwe+9K+KXpO8hvKrGl4PX7IFYebkR4bQS8RowO9q9qnT64lnW6FeFjbA3mAGcqy",
    "zPnqBO2fXG/lYTz2Y3QNrGBJq4iln7e3DUtvuyl+LKE6gBXmKNLNqLL5tDps6eFYDt5Unih+xHZ",
    "upb1fS2yvsa2qabHkmkcvvF8jsc4V070z7TzzrLP0S9qbr8Kf3Hm81xKXCYljlwzblF+Sc8d//W",
    "/n9VfSeTvN5eYx6z+lOT8uWy8vs4l20/fCe3PR8+Gi13G7SlPp8Kv94C2p30b+v/xxux4czPyaX",
    "1OvPmxOv8u4dxwa2w+sQzDqn3edM2z0Rrtjeud+XfjH/aNeXPhWqSO1oJzYzgUVipp/Wdj+p92P",
    "ro0lKb0/33m/7F+qxH9VgP9/MqBBfxnF8uffVdfhLCM/etvkiwvhufCsulf4T+Xv7m3IygfKBY8",
    "2h5+XJfm/5qjryRQNf2Z+4uYA8kC63rGhO2eqY+2735yd5G58h8qF3Nv",
    ""
  };

  static char newstr [1857] = "";
  newstr[0] = '\0';
  for (i = 0; i < 26; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c1_BMSBalancingLogic(SimStruct *S)
{
  const char* newstr = sf_c1_BMSBalancingLogic_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(222947024U));
  ssSetChecksum1(S,(939926626U));
  ssSetChecksum2(S,(498454451U));
  ssSetChecksum3(S,(987959163U));
}

static void mdlRTW_c1_BMSBalancingLogic(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlSetupRuntimeResources_c1_BMSBalancingLogic(SimStruct *S)
{
  SFc1_BMSBalancingLogicInstanceStruct *chartInstance;
  chartInstance = (SFc1_BMSBalancingLogicInstanceStruct *)utMalloc(sizeof
    (SFc1_BMSBalancingLogicInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc1_BMSBalancingLogicInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_BMSBalancingLogic;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_BMSBalancingLogic;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c1_BMSBalancingLogic;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c1_BMSBalancingLogic;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c1_BMSBalancingLogic;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_BMSBalancingLogic;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c1_BMSBalancingLogic;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_BMSBalancingLogic;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_BMSBalancingLogic;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_BMSBalancingLogic;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_BMSBalancingLogic;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c1_BMSBalancingLogic;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
    init_test_point_mapping_info(S);
  }

  mdl_setup_runtime_resources_c1_BMSBalancingLogic(chartInstance);
}

void c1_BMSBalancingLogic_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c1_BMSBalancingLogic(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_BMSBalancingLogic(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_BMSBalancingLogic(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_BMSBalancingLogic_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}

static const rtwCAPI_DataTypeMap dataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, isComplex, isPointer */
  { "real32_T", "real32_T", 0, 0, sizeof(real32_T), SS_SINGLE, 0, 0 } };

static real_T sfCAPIsampleTimeZero = 0.0;
static const rtwCAPI_SampleTimeMap sampleTimeMap[] = {
  /* *period, *offset, taskId, mode */
  { &sfCAPIsampleTimeZero, &sfCAPIsampleTimeZero, 0, 0 }
};

static const rtwCAPI_DimensionMap dimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims*/
  { rtwCAPI_SCALAR, 0, 2 } };

static const rtwCAPI_Signals testPointSignals[] = {
  /* addrMapIndex, sysNum, SFRelativePath, dataName, portNumber, dataTypeIndex, dimIndex, fixPtIdx, sTimeIndex */
  { 0, 0, "StateflowChart/DeltaCellVolt", "DeltaCellVolt", 0, 0, 0, 0, 0 } };

static const rtwCAPI_FixPtMap fixedPointMap[] = {
  /* *fracSlope, *bias, scaleType, wordLength, exponent, isSigned */
  { NULL, NULL, rtwCAPI_FIX_RESERVED, 64, 0, 0 } };

static const uint_T dimensionArray[] = {
  1, 1 };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    1,                                 /* Num Block IO signals */
    NULL,                              /* Root Inputs Array    */
    0,                                 /* Num root inputs      */
    NULL,                              /* Root Outputs Array */
    0                                  /* Num root outputs   */
  },

  /* parameter tuning */
  {
    NULL,                              /* Block parameters Array    */
    0,                                 /* Num block parameters      */
    NULL,                              /* Variable parameters Array */
    0                                  /* Num variable parameters   */
  },

  /* block states */
  {
    NULL,                              /* Block States array        */
    0                                  /* Num Block States          */
  },

  /* Static maps */
  {
    dataTypeMap,                       /* Data Type Map            */
    dimensionMap,                      /* Data Dimension Map       */
    fixedPointMap,                     /* Fixed Point Map          */
    NULL,                              /* Structure Element map    */
    sampleTimeMap,                     /* Sample Times Map         */
    dimensionArray                     /* Dimension Array          */
  },

  /* Target type */
  "float",

  {
    222947024U,
    939926626U,
    498454451U,
    987959163U
  }
};

static void init_test_point_mapping_info(SimStruct *S)
{
  rtwCAPI_ModelMappingInfo *testPointMappingInfo;
  void **testPointAddrMap;
  SFc1_BMSBalancingLogicInstanceStruct *chartInstance =
    (SFc1_BMSBalancingLogicInstanceStruct *)sf_get_chart_instance_ptr(S);
  init_test_point_addr_map(chartInstance);
  testPointMappingInfo = get_test_point_mapping_info(chartInstance);
  testPointAddrMap = get_test_point_address_map(chartInstance);
  rtwCAPI_SetStaticMap(*testPointMappingInfo, &testPointMappingStaticInfo);
  rtwCAPI_SetLoggingStaticMap(*testPointMappingInfo, NULL);
  rtwCAPI_SetInstanceLoggingInfo(*testPointMappingInfo, NULL);
  rtwCAPI_SetPath(*testPointMappingInfo, "");
  rtwCAPI_SetFullPath(*testPointMappingInfo, NULL);
  rtwCAPI_SetDataAddressMap(*testPointMappingInfo, testPointAddrMap);
  rtwCAPI_SetChildMMIArray(*testPointMappingInfo, NULL);
  rtwCAPI_SetChildMMIArrayLen(*testPointMappingInfo, 0);
  ssSetModelMappingInfoPtr(S, testPointMappingInfo);
}
