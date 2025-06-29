#ifndef computeGradLag_f17lMuJR_h_
#define computeGradLag_f17lMuJR_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_f17lMuJR(real_T workspace[162], int32_T nVar, const
  real_T grad[162], const real_T AineqTrans[14580], const real_T AeqTrans[3564],
  const int32_T finiteFixed[162], int32_T mFixed, const int32_T finiteLB[162],
  int32_T mLB, const int32_T finiteUB[162], int32_T mUB, const real_T lambda[301]);

#endif
