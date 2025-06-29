#ifndef computeGradLag_J911yvqD_h_
#define computeGradLag_J911yvqD_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_J911yvqD(real_T workspace[185], int32_T nVar, const
  real_T grad[185], const real_T AineqTrans[18500], const real_T AeqTrans[3330],
  const int32_T finiteFixed[185], int32_T mFixed, const int32_T finiteLB[185],
  int32_T mLB, const int32_T finiteUB[185], int32_T mUB, const real_T lambda[351]);

#endif
