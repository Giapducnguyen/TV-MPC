#ifndef computeGradLag_wgzgeYjQ_h_
#define computeGradLag_wgzgeYjQ_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_wgzgeYjQ(real_T workspace[197], int32_T nVar, const
  real_T grad[197], const real_T AineqTrans[18912], const real_T AeqTrans[4137],
  const int32_T finiteFixed[197], int32_T mFixed, const int32_T finiteLB[197],
  int32_T mLB, const int32_T finiteUB[197], int32_T mUB, const real_T lambda[372]);

#endif
