#ifndef computeGradLag_f9H877aC_h_
#define computeGradLag_f9H877aC_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_f9H877aC(real_T workspace[361], int32_T nVar, const
  real_T grad[361], const real_T AineqTrans[86640], const real_T AeqTrans[10830],
  const int32_T finiteFixed[361], int32_T mFixed, const int32_T finiteLB[361],
  int32_T mLB, const int32_T finiteUB[361], int32_T mUB, const real_T lambda[691]);

#endif
