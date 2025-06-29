#ifndef computeGradLag_b88mzOkg_h_
#define computeGradLag_b88mzOkg_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_b88mzOkg(real_T workspace[42150], int32_T nVar, const
  real_T grad[150], const real_T AineqTrans[7800], const real_T AeqTrans[2700],
  const int32_T finiteFixed[150], int32_T mFixed, const int32_T finiteLB[150],
  int32_T mLB, const int32_T finiteUB[150], int32_T mUB, const real_T lambda[281]);

#endif
