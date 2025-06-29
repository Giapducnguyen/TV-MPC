#ifndef computeGradLag_3axeWGMi_h_
#define computeGradLag_3axeWGMi_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_3axeWGMi(real_T workspace[560], int32_T nVar, const
  real_T grad[560], const real_T AineqTrans[183680], const real_T AeqTrans[35280],
  const int32_T finiteFixed[560], int32_T mFixed, const int32_T finiteLB[560],
  int32_T mLB, const int32_T finiteUB[560], int32_T mUB, const real_T lambda
  [1056]);

#endif
