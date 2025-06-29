#ifndef computeGradLag_VVEdCjWf_h_
#define computeGradLag_VVEdCjWf_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_VVEdCjWf(real_T workspace[90225], int32_T nVar, const
  real_T grad[225], const real_T AineqTrans[13500], const real_T AeqTrans[10800],
  const int32_T finiteFixed[225], int32_T mFixed, const int32_T finiteLB[225],
  int32_T mLB, const int32_T finiteUB[225], int32_T mUB, const real_T lambda[401]);

#endif
