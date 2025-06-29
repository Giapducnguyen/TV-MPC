#ifndef computeGradLag_otmnyP6y_h_
#define computeGradLag_otmnyP6y_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_otmnyP6y(real_T workspace[158340], int32_T nVar,
  const real_T grad[290], const real_T AineqTrans[48720], const real_T AeqTrans
  [9570], const int32_T finiteFixed[290], int32_T mFixed, const int32_T
  finiteLB[290], int32_T mLB, const int32_T finiteUB[290], int32_T mUB, const
  real_T lambda[546]);

#endif
