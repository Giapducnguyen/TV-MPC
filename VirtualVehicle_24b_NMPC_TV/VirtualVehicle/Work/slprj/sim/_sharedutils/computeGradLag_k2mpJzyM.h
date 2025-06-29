#ifndef computeGradLag_k2mpJzyM_h_
#define computeGradLag_k2mpJzyM_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_k2mpJzyM(real_T workspace[127465], int32_T nVar,
  const real_T grad[265], const real_T AineqTrans[23850], const real_T AeqTrans
  [12720], const int32_T finiteFixed[265], int32_T mFixed, const int32_T
  finiteLB[265], int32_T mLB, const int32_T finiteUB[265], int32_T mUB, const
  real_T lambda[481]);

#endif
