#ifndef computeGradLag_n9rwhqGL_h_
#define computeGradLag_n9rwhqGL_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_n9rwhqGL(real_T workspace[505], int32_T nVar, const
  real_T grad[505], const real_T AineqTrans[136350], const real_T AeqTrans[24240],
  const int32_T finiteFixed[505], int32_T mFixed, const int32_T finiteLB[505],
  int32_T mLB, const int32_T finiteUB[505], int32_T mUB, const real_T lambda[961]);

#endif
