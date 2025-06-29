#ifndef computeGradLag_KAFeNKFz_h_
#define computeGradLag_KAFeNKFz_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_KAFeNKFz(real_T workspace[141191], int32_T nVar,
  const real_T grad[271], const real_T AineqTrans[48780], const real_T AeqTrans
  [5420], const int32_T finiteFixed[271], int32_T mFixed, const int32_T
  finiteLB[271], int32_T mLB, const int32_T finiteUB[271], int32_T mUB, const
  real_T lambda[521]);

#endif
