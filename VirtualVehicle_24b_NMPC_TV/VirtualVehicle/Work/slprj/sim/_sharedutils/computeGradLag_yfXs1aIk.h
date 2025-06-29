#ifndef computeGradLag_yfXs1aIk_h_
#define computeGradLag_yfXs1aIk_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_yfXs1aIk(real_T workspace[167055], int32_T nVar,
  const real_T grad[301], const real_T AineqTrans[48160], const real_T AeqTrans
  [13846], const int32_T finiteFixed[301], int32_T mFixed, const int32_T
  finiteLB[301], int32_T mLB, const int32_T finiteUB[301], int32_T mUB, const
  real_T lambda[555]);

#endif
