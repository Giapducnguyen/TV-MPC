#ifndef computeGradLag_78M1aBxL_h_
#define computeGradLag_78M1aBxL_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_78M1aBxL(real_T workspace[135], int32_T nVar, const
  real_T grad[135], const real_T AineqTrans[8100], const real_T AeqTrans[2430],
  const int32_T finiteFixed[135], int32_T mFixed, const int32_T finiteLB[135],
  int32_T mLB, const int32_T finiteUB[135], int32_T mUB, const real_T lambda[251]);

#endif
