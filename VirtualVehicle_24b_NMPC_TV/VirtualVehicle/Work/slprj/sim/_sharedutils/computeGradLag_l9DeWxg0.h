#ifndef computeGradLag_l9DeWxg0_h_
#define computeGradLag_l9DeWxg0_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_l9DeWxg0(real_T workspace[265], int32_T nVar, const
  real_T grad[265], const real_T AineqTrans[23850], const real_T AeqTrans[12720],
  const int32_T finiteFixed[265], int32_T mFixed, const int32_T finiteLB[265],
  int32_T mLB, const int32_T finiteUB[265], int32_T mUB, const real_T lambda[481]);

#endif
