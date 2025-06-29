#ifndef computeGradLag_30fONcSo_h_
#define computeGradLag_30fONcSo_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_30fONcSo(real_T workspace[408], int32_T nVar, const
  real_T grad[408], const real_T AineqTrans[97920], const real_T AeqTrans[18360],
  const int32_T finiteFixed[408], int32_T mFixed, const int32_T finiteLB[408],
  int32_T mLB, const int32_T finiteUB[408], int32_T mUB, const real_T lambda[770]);

#endif
