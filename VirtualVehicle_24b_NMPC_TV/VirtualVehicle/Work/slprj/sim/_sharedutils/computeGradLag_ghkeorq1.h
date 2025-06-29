#ifndef computeGradLag_ghkeorq1_h_
#define computeGradLag_ghkeorq1_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_ghkeorq1(real_T workspace[151], int32_T nVar, const
  real_T grad[151], const real_T AineqTrans[15704], const real_T AeqTrans[1510],
  const int32_T finiteFixed[151], int32_T mFixed, const int32_T finiteLB[151],
  int32_T mLB, const int32_T finiteUB[151], int32_T mUB, const real_T lambda[291]);

#endif
