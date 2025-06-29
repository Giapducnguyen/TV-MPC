#ifndef computeGradLag_YKunFdgv_h_
#define computeGradLag_YKunFdgv_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_YKunFdgv(real_T workspace[148], int32_T nVar, const
  real_T grad[148], const real_T AineqTrans[5328], const real_T AeqTrans[4884],
  const int32_T finiteFixed[148], int32_T mFixed, const int32_T finiteLB[148],
  int32_T mLB, const int32_T finiteUB[148], int32_T mUB, const real_T lambda[262]);

#endif
