#ifndef computeGradLag_yb6TN0Ji_h_
#define computeGradLag_yb6TN0Ji_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_yb6TN0Ji(real_T workspace[132], int32_T nVar, const
  real_T grad[132], const real_T AineqTrans[3168], const real_T AeqTrans[4356],
  const int32_T finiteFixed[132], int32_T mFixed, const int32_T finiteLB[132],
  int32_T mLB, const int32_T finiteUB[132], int32_T mUB, const real_T lambda[230]);

#endif
