#ifndef computeGradLag_rg0qVSXN_h_
#define computeGradLag_rg0qVSXN_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_rg0qVSXN(real_T workspace[275], int32_T nVar, const
  real_T grad[275], const real_T AineqTrans[27500], const real_T AeqTrans[13200],
  const int32_T finiteFixed[275], int32_T mFixed, const int32_T finiteLB[275],
  int32_T mLB, const int32_T finiteUB[275], int32_T mUB, const real_T lambda[501]);

#endif
