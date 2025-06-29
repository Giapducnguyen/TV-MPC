#ifndef computeGradLag_BbPa7VTd_h_
#define computeGradLag_BbPa7VTd_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_BbPa7VTd(real_T workspace[45105], int32_T nVar, const
  real_T grad[155], const real_T AineqTrans[10850], const real_T AeqTrans[2790],
  const int32_T finiteFixed[155], int32_T mFixed, const int32_T finiteLB[155],
  int32_T mLB, const int32_T finiteUB[155], int32_T mUB, const real_T lambda[291]);

#endif
