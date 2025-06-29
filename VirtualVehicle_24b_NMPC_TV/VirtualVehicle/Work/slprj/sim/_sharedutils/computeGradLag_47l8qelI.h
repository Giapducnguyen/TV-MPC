#ifndef computeGradLag_47l8qelI_h_
#define computeGradLag_47l8qelI_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_47l8qelI(real_T workspace[445], int32_T nVar, const
  real_T grad[445], const real_T AineqTrans[112140], const real_T AeqTrans[27590],
  const int32_T finiteFixed[445], int32_T mFixed, const int32_T finiteLB[445],
  int32_T mLB, const int32_T finiteUB[445], int32_T mUB, const real_T lambda[827]);

#endif
