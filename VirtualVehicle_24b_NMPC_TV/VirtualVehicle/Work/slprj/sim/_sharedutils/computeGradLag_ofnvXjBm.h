#ifndef computeGradLag_ofnvXjBm_h_
#define computeGradLag_ofnvXjBm_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_ofnvXjBm(real_T workspace[108045], int32_T nVar,
  const real_T grad[245], const real_T AineqTrans[17150], const real_T AeqTrans
  [11760], const int32_T finiteFixed[245], int32_T mFixed, const int32_T
  finiteLB[245], int32_T mLB, const int32_T finiteUB[245], int32_T mUB, const
  real_T lambda[441]);

#endif
