#ifndef computeGradLag_HHxon8E2_h_
#define computeGradLag_HHxon8E2_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_HHxon8E2(real_T workspace[155], int32_T nVar, const
  real_T grad[155], const real_T AineqTrans[15500], const real_T AeqTrans[1860],
  const int32_T finiteFixed[155], int32_T mFixed, const int32_T finiteLB[155],
  int32_T mLB, const int32_T finiteUB[155], int32_T mUB, const real_T lambda[297]);

#endif
