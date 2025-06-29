#ifndef computeGradLag_1cbAUPUG_h_
#define computeGradLag_1cbAUPUG_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_1cbAUPUG(real_T workspace[143], int32_T nVar, const
  real_T grad[143], const real_T AineqTrans[11440], const real_T AeqTrans[2860],
  const int32_T finiteLB[143], int32_T mLB, const int32_T finiteUB[143], const
  real_T lambda[265]);

#endif
