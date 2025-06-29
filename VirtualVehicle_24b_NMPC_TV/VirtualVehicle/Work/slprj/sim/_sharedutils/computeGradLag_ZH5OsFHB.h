#ifndef computeGradLag_ZH5OsFHB_h_
#define computeGradLag_ZH5OsFHB_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_ZH5OsFHB(real_T workspace[121], int32_T nVar, const
  real_T grad[121], const real_T AineqTrans[9680], const real_T AeqTrans[1210],
  const int32_T finiteLB[121], int32_T mLB, const int32_T finiteUB[121], const
  real_T lambda[231]);

#endif
