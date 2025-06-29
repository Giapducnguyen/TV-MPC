#ifndef computeGradLag_QcixqVmq_h_
#define computeGradLag_QcixqVmq_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_QcixqVmq(real_T workspace[374245], int32_T nVar,
  const real_T grad[445], const real_T AineqTrans[93450], const real_T AeqTrans
  [21360], const int32_T finiteFixed[445], int32_T mFixed, const int32_T
  finiteLB[445], int32_T mLB, const int32_T finiteUB[445], int32_T mUB, const
  real_T lambda[841]);

#endif
