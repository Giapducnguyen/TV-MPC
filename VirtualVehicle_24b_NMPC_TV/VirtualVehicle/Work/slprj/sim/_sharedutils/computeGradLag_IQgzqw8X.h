#ifndef computeGradLag_IQgzqw8X_h_
#define computeGradLag_IQgzqw8X_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_IQgzqw8X(real_T workspace[423], int32_T nVar, const
  real_T grad[423], const real_T AineqTrans[101520], const real_T AeqTrans[25380],
  const int32_T finiteFixed[423], int32_T mFixed, const int32_T finiteLB[423],
  int32_T mLB, const int32_T finiteUB[423], int32_T mUB, const real_T lambda[785]);

#endif
