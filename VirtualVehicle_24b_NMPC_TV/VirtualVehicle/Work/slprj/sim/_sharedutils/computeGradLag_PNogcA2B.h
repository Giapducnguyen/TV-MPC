#ifndef computeGradLag_PNogcA2B_h_
#define computeGradLag_PNogcA2B_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_PNogcA2B(real_T workspace[963977], int32_T nVar,
  const real_T grad[721], const real_T AineqTrans[291284], const real_T
  AeqTrans[74984], const int32_T finiteFixed[721], int32_T mFixed, const int32_T
  finiteLB[721], int32_T mLB, const int32_T finiteUB[721], int32_T mUB, const
  real_T lambda[1337]);

#endif
