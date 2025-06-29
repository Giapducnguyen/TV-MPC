#ifndef computeGradLag_wx2wXbve_h_
#define computeGradLag_wx2wXbve_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_wx2wXbve(real_T workspace[194], int32_T nVar, const
  real_T grad[194], const real_T AineqTrans[17460], const real_T AeqTrans[4656],
  const int32_T finiteFixed[194], int32_T mFixed, const int32_T finiteLB[194],
  int32_T mLB, const int32_T finiteUB[194], int32_T mUB, const real_T lambda[363]);

#endif
