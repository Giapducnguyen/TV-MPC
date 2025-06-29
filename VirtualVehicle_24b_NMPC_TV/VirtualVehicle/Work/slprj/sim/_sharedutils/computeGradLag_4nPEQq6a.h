#ifndef computeGradLag_4nPEQq6a_h_
#define computeGradLag_4nPEQq6a_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_4nPEQq6a(real_T workspace[148575], int32_T nVar,
  const real_T grad[283], const real_T AineqTrans[45280], const real_T AeqTrans
  [11320], const int32_T finiteFixed[283], int32_T mFixed, const int32_T
  finiteLB[283], int32_T mLB, const int32_T finiteUB[283], int32_T mUB, const
  real_T lambda[525]);

#endif
