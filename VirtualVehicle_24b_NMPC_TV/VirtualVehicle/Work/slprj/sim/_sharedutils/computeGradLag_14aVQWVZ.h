#ifndef computeGradLag_14aVQWVZ_h_
#define computeGradLag_14aVQWVZ_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_14aVQWVZ(real_T workspace[535830], int32_T nVar,
  const real_T grad[530], const real_T AineqTrans[149460], const real_T
  AeqTrans[25440], const int32_T finiteFixed[530], int32_T mFixed, const int32_T
  finiteLB[530], int32_T mLB, const int32_T finiteUB[530], int32_T mUB, const
  real_T lambda[1011]);

#endif
