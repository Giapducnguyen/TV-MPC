#ifndef computeGradLag_LUm2r5dI_h_
#define computeGradLag_LUm2r5dI_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_LUm2r5dI(real_T workspace[151], int32_T nVar, const
  real_T grad[151], const real_T AineqTrans[15704], const real_T AeqTrans[1510],
  const int32_T finiteLB[151], int32_T mLB, const int32_T finiteUB[151], const
  real_T lambda[291]);

#endif
