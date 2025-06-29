#ifndef computeGradLag_FH8PhDMi_h_
#define computeGradLag_FH8PhDMi_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_FH8PhDMi(real_T workspace[535], int32_T nVar, const
  real_T grad[535], const real_T AineqTrans[160500], const real_T AeqTrans[25680],
  const int32_T finiteFixed[535], int32_T mFixed, const int32_T finiteLB[535],
  int32_T mLB, const int32_T finiteUB[535], int32_T mUB, const real_T lambda
  [1021]);

#endif
