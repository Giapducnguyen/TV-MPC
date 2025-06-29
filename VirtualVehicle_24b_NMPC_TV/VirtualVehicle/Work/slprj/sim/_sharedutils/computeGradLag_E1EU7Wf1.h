#ifndef computeGradLag_E1EU7Wf1_h_
#define computeGradLag_E1EU7Wf1_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_E1EU7Wf1(real_T workspace[191], int32_T nVar, const
  real_T grad[191], const real_T AineqTrans[17190], const real_T AeqTrans[5730],
  const int32_T finiteFixed[191], int32_T mFixed, const int32_T finiteLB[191],
  int32_T mLB, const int32_T finiteUB[191], int32_T mUB, const real_T lambda[351]);

#endif
