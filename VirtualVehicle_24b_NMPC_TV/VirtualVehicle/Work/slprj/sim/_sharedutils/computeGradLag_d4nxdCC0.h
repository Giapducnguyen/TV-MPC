#ifndef computeGradLag_d4nxdCC0_h_
#define computeGradLag_d4nxdCC0_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_d4nxdCC0(real_T workspace[57316], int32_T nVar, const
  real_T grad[178], const real_T AineqTrans[10680], const real_T AeqTrans[5874],
  const int32_T finiteFixed[178], int32_T mFixed, const int32_T finiteLB[178],
  int32_T mLB, const int32_T finiteUB[178], int32_T mUB, const real_T lambda[322]);

#endif
