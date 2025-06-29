#ifndef computeGradLag_iYdutbIV_h_
#define computeGradLag_iYdutbIV_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_iYdutbIV(real_T workspace[28148], int32_T nVar, const
  real_T grad[124], const real_T AineqTrans[6696], const real_T AeqTrans[2480],
  const int32_T finiteFixed[124], int32_T mFixed, const int32_T finiteLB[124],
  int32_T mLB, const int32_T finiteUB[124], int32_T mUB, const real_T lambda[227]);

#endif
