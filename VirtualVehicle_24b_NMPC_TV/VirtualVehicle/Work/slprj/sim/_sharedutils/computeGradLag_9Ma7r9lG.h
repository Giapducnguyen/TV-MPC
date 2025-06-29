#ifndef computeGradLag_9Ma7r9lG_h_
#define computeGradLag_9Ma7r9lG_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_9Ma7r9lG(real_T workspace[861], int32_T nVar, const
  real_T grad[861], const real_T AineqTrans[416724], const real_T AeqTrans
  [106764], const int32_T finiteFixed[861], int32_T mFixed, const int32_T
  finiteLB[861], int32_T mLB, const int32_T finiteUB[861], int32_T mUB, const
  real_T lambda[1597]);

#endif
