#ifndef EvPowertrainController4EM_types_h_
#define EvPowertrainController4EM_types_h_
#include "rtwtypes.h"
#ifndef struct_tag_sTF8CnSp4d9JDiugPTQgyXF
#define struct_tag_sTF8CnSp4d9JDiugPTQgyXF
struct tag_sTF8CnSp4d9JDiugPTQgyXF { real_T grad [ 121 ] ; real_T Hx [ 120 ]
; boolean_T hasLinear ; int32_T nvar ; int32_T maxVar ; real_T beta ; real_T
rho ; int32_T objtype ; int32_T prev_objtype ; int32_T prev_nvar ; boolean_T
prev_hasLinear ; real_T gammaScalar ; } ;
#endif
#ifndef typedef_iamwnmrrfd
#define typedef_iamwnmrrfd
typedef struct tag_sTF8CnSp4d9JDiugPTQgyXF iamwnmrrfd ;
#endif
#ifndef struct_tag_sDvYrwyxjyllivv4Ar1gMWB
#define struct_tag_sDvYrwyxjyllivv4Ar1gMWB
struct tag_sDvYrwyxjyllivv4Ar1gMWB { int32_T mConstr ; int32_T mConstrOrig ;
int32_T mConstrMax ; int32_T nVar ; int32_T nVarOrig ; int32_T nVarMax ;
int32_T ldA ; real_T Aineq [ 6534 ] ; real_T bineq [ 54 ] ; real_T Aeq [ 2420
] ; real_T beq [ 20 ] ; real_T lb [ 121 ] ; real_T ub [ 121 ] ; int32_T
indexLB [ 121 ] ; int32_T indexUB [ 121 ] ; int32_T indexFixed [ 121 ] ;
int32_T mEqRemoved ; int32_T indexEqRemoved [ 20 ] ; real_T ATwset [ 26741 ]
; real_T bwset [ 221 ] ; int32_T nActiveConstr ; real_T maxConstrWorkspace [
221 ] ; int32_T sizes [ 5 ] ; int32_T sizesNormal [ 5 ] ; int32_T
sizesPhaseOne [ 5 ] ; int32_T sizesRegularized [ 5 ] ; int32_T
sizesRegPhaseOne [ 5 ] ; int32_T isActiveIdx [ 6 ] ; int32_T
isActiveIdxNormal [ 6 ] ; int32_T isActiveIdxPhaseOne [ 6 ] ; int32_T
isActiveIdxRegularized [ 6 ] ; int32_T isActiveIdxRegPhaseOne [ 6 ] ;
boolean_T isActiveConstr [ 221 ] ; int32_T Wid [ 221 ] ; int32_T Wlocalidx [
221 ] ; int32_T nWConstr [ 5 ] ; int32_T probType ; real_T SLACK0 ; } ;
#endif
#ifndef typedef_c3tcu1vsoj
#define typedef_c3tcu1vsoj
typedef struct tag_sDvYrwyxjyllivv4Ar1gMWB c3tcu1vsoj ;
#endif
#ifndef struct_tag_sG8JZ69axY52WWR6RKyApQC
#define struct_tag_sG8JZ69axY52WWR6RKyApQC
struct tag_sG8JZ69axY52WWR6RKyApQC { real_T penaltyParam ; real_T threshold ;
int32_T nPenaltyDecreases ; real_T linearizedConstrViol ; real_T initFval ;
real_T initConstrViolationEq ; real_T initConstrViolationIneq ; real_T phi ;
real_T phiPrimePlus ; real_T phiFullStep ; real_T feasRelativeFactor ; real_T
nlpPrimalFeasError ; real_T nlpDualFeasError ; real_T nlpComplError ; real_T
firstOrderOpt ; boolean_T hasObjective ; } ;
#endif
#ifndef typedef_bhtu1h5bl5
#define typedef_bhtu1h5bl5
typedef struct tag_sG8JZ69axY52WWR6RKyApQC bhtu1h5bl5 ;
#endif
#ifndef struct_tag_s7RdrPWkr8UPAUyTdDJkLaG
#define struct_tag_s7RdrPWkr8UPAUyTdDJkLaG
struct tag_s7RdrPWkr8UPAUyTdDJkLaG { boolean_T gradOK ; boolean_T fevalOK ;
boolean_T done ; boolean_T stepAccepted ; boolean_T failedLineSearch ;
int32_T stepType ; } ;
#endif
#ifndef typedef_drf2ph4ldh
#define typedef_drf2ph4ldh
typedef struct tag_s7RdrPWkr8UPAUyTdDJkLaG drf2ph4ldh ;
#endif
#ifndef struct_tag_syH89XZhspJJmRQneAy9d8E
#define struct_tag_syH89XZhspJJmRQneAy9d8E
struct tag_syH89XZhspJJmRQneAy9d8E { int32_T nVarMax ; int32_T mNonlinIneq ;
int32_T mNonlinEq ; int32_T mIneq ; int32_T mEq ; int32_T iNonIneq0 ; int32_T
iNonEq0 ; real_T sqpFval ; real_T sqpFval_old ; real_T xstarsqp [ 26 ] ;
real_T xstarsqp_old [ 26 ] ; real_T cIneq [ 54 ] ; real_T cIneq_old [ 54 ] ;
real_T cEq [ 20 ] ; real_T cEq_old [ 20 ] ; real_T grad [ 121 ] ; real_T
grad_old [ 121 ] ; int32_T FunctionEvaluations ; int32_T sqpIterations ;
int32_T sqpExitFlag ; real_T lambdasqp [ 221 ] ; real_T lambdaStopTest [ 221
] ; real_T lambdaStopTestPrev [ 221 ] ; real_T steplength ; real_T delta_x [
121 ] ; real_T socDirection [ 121 ] ; int32_T workingset_old [ 221 ] ; real_T
JacCineqTrans_old [ 6534 ] ; real_T JacCeqTrans_old [ 2420 ] ; real_T gradLag
[ 121 ] ; real_T delta_gradLag [ 121 ] ; real_T xstar [ 121 ] ; real_T fstar
; real_T firstorderopt ; real_T lambda [ 221 ] ; int32_T state ; real_T
maxConstr ; int32_T iterations ; real_T searchDir [ 121 ] ; } ;
#endif
#ifndef typedef_ci1jcnwvc5
#define typedef_ci1jcnwvc5
typedef struct tag_syH89XZhspJJmRQneAy9d8E ci1jcnwvc5 ;
#endif
#ifndef struct_tag_sfGVmaWoxz8ud3PyxSmvKa
#define struct_tag_sfGVmaWoxz8ud3PyxSmvKa
struct tag_sfGVmaWoxz8ud3PyxSmvKa { int32_T ldq ; real_T QR [ 48841 ] ;
real_T Q [ 48841 ] ; int32_T jpvt [ 221 ] ; int32_T mrows ; int32_T ncols ;
real_T tau [ 221 ] ; int32_T minRowCol ; boolean_T usedPivoting ; } ;
#endif
#ifndef typedef_oytx5zapfu
#define typedef_oytx5zapfu
typedef struct tag_sfGVmaWoxz8ud3PyxSmvKa oytx5zapfu ;
#endif
#ifndef struct_tag_sJouye2NV86roArUXdWL9vG
#define struct_tag_sJouye2NV86roArUXdWL9vG
struct tag_sJouye2NV86roArUXdWL9vG { real_T FMat [ 48841 ] ; int32_T ldm ;
int32_T ndims ; int32_T info ; real_T scaleFactor ; boolean_T ConvexCheck ;
real_T regTol_ ; real_T workspace_ ; real_T workspace2_ ; } ;
#endif
#ifndef typedef_kzv4ftj4e2
#define typedef_kzv4ftj4e2
typedef struct tag_sJouye2NV86roArUXdWL9vG kzv4ftj4e2 ;
#endif
#ifndef struct_tag_s6tJgbnygJKaNGy6DgTARdE
#define struct_tag_s6tJgbnygJKaNGy6DgTARdE
struct tag_s6tJgbnygJKaNGy6DgTARdE { real_T workspace_float [ 26741 ] ;
int32_T workspace_int [ 221 ] ; int32_T workspace_sort [ 221 ] ; } ;
#endif
#ifndef typedef_kmbpuy2anc
#define typedef_kmbpuy2anc
typedef struct tag_s6tJgbnygJKaNGy6DgTARdE kmbpuy2anc ;
#endif
#ifndef struct_tag_somzaGboVhDG7PNQS6E98jD
#define struct_tag_somzaGboVhDG7PNQS6E98jD
struct tag_somzaGboVhDG7PNQS6E98jD { char_T SolverName [ 7 ] ; int32_T
MaxIterations ; real_T StepTolerance ; real_T OptimalityTolerance ; real_T
ConstraintTolerance ; real_T ObjectiveLimit ; real_T PricingTolerance ;
real_T ConstrRelTolFactor ; real_T ProbRelTolFactor ; boolean_T
RemainFeasible ; boolean_T IterDisplayQP ; } ;
#endif
#ifndef typedef_i4h2yyndkb
#define typedef_i4h2yyndkb
typedef struct tag_somzaGboVhDG7PNQS6E98jD i4h2yyndkb ;
#endif
#ifndef struct_tag_sLCI0b09EAV9qeI6ZZLJJhH
#define struct_tag_sLCI0b09EAV9qeI6ZZLJJhH
struct tag_sLCI0b09EAV9qeI6ZZLJJhH { real_T xk [ 2 ] ; real_T
PrevEMTrqCmdFinals [ 4 ] ; real_T Vx ; real_T delta_Frnt ; real_T
EMTrqMaxFrnt ; real_T EMTrqMaxRear ; real_T Acc [ 3 ] ; real_T EMFrntTrq ;
real_T EMRearTrq ; } ;
#endif
#ifndef typedef_cuxlzjpzbn
#define typedef_cuxlzjpzbn
typedef struct tag_sLCI0b09EAV9qeI6ZZLJJhH cuxlzjpzbn ;
#endif
#ifndef struct_tag_shTb2UIQwHAesT44OeCzbHG
#define struct_tag_shTb2UIQwHAesT44OeCzbHG
struct tag_shTb2UIQwHAesT44OeCzbHG { real_T xk [ 2 ] ; real_T
PrevEMTrqCmdFinals [ 4 ] ; real_T EMFrntTrq ; real_T EMRearTrq ; real_T r_ref
; } ;
#endif
#ifndef typedef_n4zzvudoa0
#define typedef_n4zzvudoa0
typedef struct tag_shTb2UIQwHAesT44OeCzbHG n4zzvudoa0 ;
#endif
#ifndef struct_tag_ohh243Df3V0y0QfkagKc8B
#define struct_tag_ohh243Df3V0y0QfkagKc8B
struct tag_ohh243Df3V0y0QfkagKc8B { n4zzvudoa0 workspace ; } ;
#endif
#ifndef typedef_ptup5lzvsv
#define typedef_ptup5lzvsv
typedef struct tag_ohh243Df3V0y0QfkagKc8B ptup5lzvsv ;
#endif
#ifndef struct_tag_ZzsLmeO0Pmbvv4Q0ybS5IC
#define struct_tag_ZzsLmeO0Pmbvv4Q0ybS5IC
struct tag_ZzsLmeO0Pmbvv4Q0ybS5IC { cuxlzjpzbn workspace ; } ;
#endif
#ifndef typedef_k0wbmyv4jv
#define typedef_k0wbmyv4jv
typedef struct tag_ZzsLmeO0Pmbvv4Q0ybS5IC k0wbmyv4jv ;
#endif
#ifndef struct_tag_wBHpKKKG1BcOfUtFtjQ4MC
#define struct_tag_wBHpKKKG1BcOfUtFtjQ4MC
struct tag_wBHpKKKG1BcOfUtFtjQ4MC { ptup5lzvsv objfun ; k0wbmyv4jv nonlin ;
real_T f_1 ; real_T cIneq_1 [ 54 ] ; real_T cEq_1 [ 20 ] ; real_T f_2 ;
real_T cIneq_2 [ 54 ] ; real_T cEq_2 [ 20 ] ; int32_T nVar ; int32_T mIneq ;
int32_T mEq ; int32_T numEvals ; boolean_T SpecifyObjectiveGradient ;
boolean_T SpecifyConstraintGradient ; boolean_T isEmptyNonlcon ; boolean_T
hasLB [ 26 ] ; boolean_T hasUB [ 26 ] ; boolean_T hasBounds ; int32_T
FiniteDifferenceType ; } ;
#endif
#ifndef typedef_aoeufdu2eg
#define typedef_aoeufdu2eg
typedef struct tag_wBHpKKKG1BcOfUtFtjQ4MC aoeufdu2eg ;
#endif
#ifndef struct_tag_uE92JEz94CkuyuAuUJ8iaF
#define struct_tag_uE92JEz94CkuyuAuUJ8iaF
struct tag_uE92JEz94CkuyuAuUJ8iaF { ptup5lzvsv b_value ; } ;
#endif
#ifndef typedef_cpri2en1rb
#define typedef_cpri2en1rb
typedef struct tag_uE92JEz94CkuyuAuUJ8iaF cpri2en1rb ;
#endif
#ifndef struct_tag_I4lvNsPbr7Rf55fYQH5LqC
#define struct_tag_I4lvNsPbr7Rf55fYQH5LqC
struct tag_I4lvNsPbr7Rf55fYQH5LqC { k0wbmyv4jv b_value ; cpri2en1rb next ; }
;
#endif
#ifndef typedef_beybg5myqr
#define typedef_beybg5myqr
typedef struct tag_I4lvNsPbr7Rf55fYQH5LqC beybg5myqr ;
#endif
#ifndef struct_tag_8k9WovMswrFmd72JxC6xuC
#define struct_tag_8k9WovMswrFmd72JxC6xuC
struct tag_8k9WovMswrFmd72JxC6xuC { beybg5myqr next ; } ;
#endif
#ifndef typedef_mlbp3rbfnc
#define typedef_mlbp3rbfnc
typedef struct tag_8k9WovMswrFmd72JxC6xuC mlbp3rbfnc ;
#endif
#ifndef struct_tag_eZFm0aT8zT17aYgNKtqk8E
#define struct_tag_eZFm0aT8zT17aYgNKtqk8E
struct tag_eZFm0aT8zT17aYgNKtqk8E { mlbp3rbfnc next ; } ;
#endif
#ifndef typedef_hwhqkz32ry
#define typedef_hwhqkz32ry
typedef struct tag_eZFm0aT8zT17aYgNKtqk8E hwhqkz32ry ;
#endif
#ifndef struct_tag_Cr5C4lET21xnO2buv6QRCB
#define struct_tag_Cr5C4lET21xnO2buv6QRCB
struct tag_Cr5C4lET21xnO2buv6QRCB { hwhqkz32ry next ; } ;
#endif
#ifndef typedef_erg0nboo0r
#define typedef_erg0nboo0r
typedef struct tag_Cr5C4lET21xnO2buv6QRCB erg0nboo0r ;
#endif
#ifndef struct_tag_7gd14Kg9C9P80W1XqEv0bE
#define struct_tag_7gd14Kg9C9P80W1XqEv0bE
struct tag_7gd14Kg9C9P80W1XqEv0bE { erg0nboo0r next ; } ;
#endif
#ifndef typedef_d14ppd0cw1
#define typedef_d14ppd0cw1
typedef struct tag_7gd14Kg9C9P80W1XqEv0bE d14ppd0cw1 ;
#endif
#ifndef struct_tag_lTNvzUbIzlRlvGCMPklpAC
#define struct_tag_lTNvzUbIzlRlvGCMPklpAC
struct tag_lTNvzUbIzlRlvGCMPklpAC { d14ppd0cw1 next ; } ;
#endif
#ifndef typedef_p3anivedxd
#define typedef_p3anivedxd
typedef struct tag_lTNvzUbIzlRlvGCMPklpAC p3anivedxd ;
#endif
#ifndef struct_tag_rlHM5XxBfH9joFPI06QADG
#define struct_tag_rlHM5XxBfH9joFPI06QADG
struct tag_rlHM5XxBfH9joFPI06QADG { p3anivedxd next ; } ;
#endif
#ifndef typedef_nnul4dtq1q
#define typedef_nnul4dtq1q
typedef struct tag_rlHM5XxBfH9joFPI06QADG nnul4dtq1q ;
#endif
#ifndef struct_tag_v6UFvNVcGLLl0D0LuCkMDG
#define struct_tag_v6UFvNVcGLLl0D0LuCkMDG
struct tag_v6UFvNVcGLLl0D0LuCkMDG { nnul4dtq1q next ; } ;
#endif
#ifndef typedef_nged4bnpig
#define typedef_nged4bnpig
typedef struct tag_v6UFvNVcGLLl0D0LuCkMDG nged4bnpig ;
#endif
#ifndef struct_tag_sCoLT0xNhjdwErqatve1zqF
#define struct_tag_sCoLT0xNhjdwErqatve1zqF
struct tag_sCoLT0xNhjdwErqatve1zqF { real_T objective ; real_T
cineq_constraint [ 54 ] ; real_T ceq_constraint [ 20 ] ; } ;
#endif
#ifndef typedef_ofxtwsq03r
#define typedef_ofxtwsq03r
typedef struct tag_sCoLT0xNhjdwErqatve1zqF ofxtwsq03r ;
#endif
#ifndef SS_UINT64
#define SS_UINT64 19
#endif
#ifndef SS_INT64
#define SS_INT64 20
#endif
typedef struct njz0210ca5h_ njz0210ca5h ; typedef struct n1mbwr340b
ghy3lg3t4k ;
#endif
