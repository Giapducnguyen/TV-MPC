#ifndef computeGradLag_i5Axd5Bk_h_
#define computeGradLag_i5Axd5Bk_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_i5Axd5Bk(real_T workspace[65041], int32_T nVar, const
  real_T grad[193], const real_T AineqTrans[6948], const real_T AeqTrans[9264],
  const int32_T finiteFixed[193], int32_T mFixed, const int32_T finiteLB[193],
  int32_T mLB, const int32_T finiteUB[193], int32_T mUB, const real_T lambda[337]);

#endif
