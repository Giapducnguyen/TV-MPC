#ifndef computeGradLag_MoI3oMN3_h_
#define computeGradLag_MoI3oMN3_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_MoI3oMN3(real_T workspace[137775], int32_T nVar,
  const real_T grad[275], const real_T AineqTrans[27500], const real_T AeqTrans
  [13200], const int32_T finiteFixed[275], int32_T mFixed, const int32_T
  finiteLB[275], int32_T mLB, const int32_T finiteUB[275], int32_T mUB, const
  real_T lambda[501]);

#endif
