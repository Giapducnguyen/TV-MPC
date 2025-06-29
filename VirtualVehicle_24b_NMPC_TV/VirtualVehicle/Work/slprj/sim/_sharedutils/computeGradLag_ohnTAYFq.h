#ifndef computeGradLag_ohnTAYFq_h_
#define computeGradLag_ohnTAYFq_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_ohnTAYFq(real_T workspace[79722], int32_T nVar, const
  real_T grad[206], const real_T AineqTrans[19776], const real_T AeqTrans[4944],
  const int32_T finiteFixed[206], int32_T mFixed, const int32_T finiteLB[206],
  int32_T mLB, const int32_T finiteUB[206], int32_T mUB, const real_T lambda[387]);

#endif
