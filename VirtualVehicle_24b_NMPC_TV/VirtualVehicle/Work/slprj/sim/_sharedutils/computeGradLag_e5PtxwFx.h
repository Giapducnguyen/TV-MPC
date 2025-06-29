#ifndef computeGradLag_e5PtxwFx_h_
#define computeGradLag_e5PtxwFx_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_e5PtxwFx(real_T workspace[172], int32_T nVar, const
  real_T grad[172], const real_T AineqTrans[9288], const real_T AeqTrans[5676],
  const int32_T finiteFixed[172], int32_T mFixed, const int32_T finiteLB[172],
  int32_T mLB, const int32_T finiteUB[172], int32_T mUB, const real_T lambda[310]);

#endif
