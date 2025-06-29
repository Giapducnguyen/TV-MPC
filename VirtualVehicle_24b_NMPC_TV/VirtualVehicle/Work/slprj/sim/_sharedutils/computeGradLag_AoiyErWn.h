#ifndef computeGradLag_AoiyErWn_h_
#define computeGradLag_AoiyErWn_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_AoiyErWn(real_T workspace[178], int32_T nVar, const
  real_T grad[178], const real_T AineqTrans[10680], const real_T AeqTrans[5874],
  const int32_T finiteFixed[178], int32_T mFixed, const int32_T finiteLB[178],
  int32_T mLB, const int32_T finiteUB[178], int32_T mUB, const real_T lambda[322]);

#endif
