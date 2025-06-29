#ifndef computeGradLag_U4WoYnYE_h_
#define computeGradLag_U4WoYnYE_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_U4WoYnYE(real_T workspace[368015], int32_T nVar,
  const real_T grad[445], const real_T AineqTrans[112140], const real_T
  AeqTrans[27590], const int32_T finiteFixed[445], int32_T mFixed, const int32_T
  finiteLB[445], int32_T mLB, const int32_T finiteUB[445], int32_T mUB, const
  real_T lambda[827]);

#endif
