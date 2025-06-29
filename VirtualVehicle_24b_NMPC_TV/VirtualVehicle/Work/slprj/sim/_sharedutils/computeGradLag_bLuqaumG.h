#ifndef computeGradLag_bLuqaumG_h_
#define computeGradLag_bLuqaumG_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_bLuqaumG(real_T workspace[445], int32_T nVar, const
  real_T grad[445], const real_T AineqTrans[110360], const real_T AeqTrans[28480],
  const int32_T finiteFixed[445], int32_T mFixed, const int32_T finiteLB[445],
  int32_T mLB, const int32_T finiteUB[445], int32_T mUB, const real_T lambda[825]);

#endif
