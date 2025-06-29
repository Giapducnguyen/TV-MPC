#ifndef computeGradLag_p8JkXwrD_h_
#define computeGradLag_p8JkXwrD_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_p8JkXwrD(real_T workspace[196], int32_T nVar, const
  real_T grad[196], const real_T AineqTrans[17640], const real_T AeqTrans[5880],
  const int32_T finiteFixed[196], int32_T mFixed, const int32_T finiteLB[196],
  int32_T mLB, const int32_T finiteUB[196], int32_T mUB, const real_T lambda[361]);

#endif
