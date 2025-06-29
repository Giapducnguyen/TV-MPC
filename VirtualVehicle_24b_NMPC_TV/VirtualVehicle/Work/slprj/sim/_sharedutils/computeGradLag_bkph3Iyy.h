#ifndef computeGradLag_bkph3Iyy_h_
#define computeGradLag_bkph3Iyy_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_bkph3Iyy(real_T workspace[391], int32_T nVar, const
  real_T grad[391], const real_T AineqTrans[105570], const real_T AeqTrans[11730],
  const int32_T finiteFixed[391], int32_T mFixed, const int32_T finiteLB[391],
  int32_T mLB, const int32_T finiteUB[391], int32_T mUB, const real_T lambda[751]);

#endif
