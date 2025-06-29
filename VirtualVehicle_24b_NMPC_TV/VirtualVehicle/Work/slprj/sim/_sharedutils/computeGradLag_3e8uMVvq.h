#ifndef computeGradLag_3e8uMVvq_h_
#define computeGradLag_3e8uMVvq_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_3e8uMVvq(real_T workspace[85968], int32_T nVar, const
  real_T grad[216], const real_T AineqTrans[19008], const real_T AeqTrans[7128],
  const int32_T finiteFixed[216], int32_T mFixed, const int32_T finiteLB[216],
  int32_T mLB, const int32_T finiteUB[216], int32_T mUB, const real_T lambda[398]);

#endif
