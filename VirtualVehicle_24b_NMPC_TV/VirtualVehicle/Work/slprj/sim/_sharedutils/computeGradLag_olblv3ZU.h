#ifndef computeGradLag_olblv3ZU_h_
#define computeGradLag_olblv3ZU_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_olblv3ZU(real_T workspace[120731], int32_T nVar,
  const real_T grad[251], const real_T AineqTrans[40160], const real_T AeqTrans
  [5020], const int32_T finiteFixed[251], int32_T mFixed, const int32_T
  finiteLB[251], int32_T mLB, const int32_T finiteUB[251], int32_T mUB, const
  real_T lambda[481]);

#endif
