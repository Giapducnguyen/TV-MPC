#ifndef computeGradLag_avm5Ivqh_h_
#define computeGradLag_avm5Ivqh_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_avm5Ivqh(real_T workspace[242], int32_T nVar, const
  real_T grad[242], const real_T AineqTrans[27104], const real_T AeqTrans[6534],
  const int32_T finiteFixed[242], int32_T mFixed, const int32_T finiteLB[242],
  int32_T mLB, const int32_T finiteUB[242], int32_T mUB, const real_T lambda[456]);

#endif
