#ifndef computeGradLag_PU1o2a2n_h_
#define computeGradLag_PU1o2a2n_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_PU1o2a2n(real_T workspace[57552], int32_T nVar, const
  real_T grad[176], const real_T AineqTrans[16544], const real_T AeqTrans[4224],
  const int32_T finiteFixed[176], int32_T mFixed, const int32_T finiteLB[176],
  int32_T mLB, const int32_T finiteUB[176], int32_T mUB, const real_T lambda[327]);

#endif
