#ifndef computeGradLag_JraisUYk_h_
#define computeGradLag_JraisUYk_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_JraisUYk(real_T workspace[441], int32_T nVar, const
  real_T grad[441], const real_T AineqTrans[107604], const real_T AeqTrans[28224],
  const int32_T finiteFixed[441], int32_T mFixed, const int32_T finiteLB[441],
  int32_T mLB, const int32_T finiteUB[441], int32_T mUB, const real_T lambda[817]);

#endif
