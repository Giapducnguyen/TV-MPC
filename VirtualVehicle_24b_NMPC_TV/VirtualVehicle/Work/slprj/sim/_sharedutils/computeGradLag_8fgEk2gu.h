#ifndef computeGradLag_8fgEk2gu_h_
#define computeGradLag_8fgEk2gu_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_8fgEk2gu(real_T workspace[48762], int32_T nVar, const
  real_T grad[162], const real_T AineqTrans[14580], const real_T AeqTrans[3564],
  const int32_T finiteFixed[162], int32_T mFixed, const int32_T finiteLB[162],
  int32_T mLB, const int32_T finiteUB[162], int32_T mUB, const real_T lambda[301]);

#endif
