#ifndef computeGradLag_Dh7xqn1b_h_
#define computeGradLag_Dh7xqn1b_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_Dh7xqn1b(real_T workspace[138], int32_T nVar, const
  real_T grad[138], const real_T AineqTrans[11040], const real_T AeqTrans[2070],
  const int32_T finiteFixed[138], int32_T mFixed, const int32_T finiteLB[138],
  int32_T mLB, const int32_T finiteUB[138], int32_T mUB, const real_T lambda[260]);

#endif
