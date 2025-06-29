#ifndef computeGradLag_m43FwmJs_h_
#define computeGradLag_m43FwmJs_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_m43FwmJs(real_T workspace[546235], int32_T nVar,
  const real_T grad[535], const real_T AineqTrans[160500], const real_T
  AeqTrans[25680], const int32_T finiteFixed[535], int32_T mFixed, const int32_T
  finiteLB[535], int32_T mLB, const int32_T finiteUB[535], int32_T mUB, const
  real_T lambda[1021]);

#endif
