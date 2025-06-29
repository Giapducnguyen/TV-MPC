#ifndef computeGradLag_RxzPwCmO_h_
#define computeGradLag_RxzPwCmO_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_RxzPwCmO(real_T workspace[220], int32_T nVar, const
  real_T grad[220], const real_T AineqTrans[19800], const real_T AeqTrans[7260],
  const int32_T finiteFixed[220], int32_T mFixed, const int32_T finiteLB[220],
  int32_T mLB, const int32_T finiteUB[220], int32_T mUB, const real_T lambda[406]);

#endif
