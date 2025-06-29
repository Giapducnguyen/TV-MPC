#ifndef computeGradLag_IREQwi1b_h_
#define computeGradLag_IREQwi1b_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_IREQwi1b(real_T workspace[35880], int32_T nVar, const
  real_T grad[138], const real_T AineqTrans[11040], const real_T AeqTrans[2070],
  const int32_T finiteFixed[138], int32_T mFixed, const int32_T finiteLB[138],
  int32_T mLB, const int32_T finiteUB[138], int32_T mUB, const real_T lambda[260]);

#endif
