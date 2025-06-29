#ifndef computeGradLag_ViOYUdYc_h_
#define computeGradLag_ViOYUdYc_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_ViOYUdYc(real_T workspace[365], int32_T nVar, const
  real_T grad[365], const real_T AineqTrans[70080], const real_T AeqTrans[12045],
  const int32_T finiteFixed[365], int32_T mFixed, const int32_T finiteLB[365],
  int32_T mLB, const int32_T finiteUB[365], int32_T mUB, const real_T lambda[696]);

#endif
