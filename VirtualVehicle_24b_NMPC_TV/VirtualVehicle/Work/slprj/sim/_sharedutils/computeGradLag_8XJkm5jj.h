#ifndef computeGradLag_8XJkm5jj_h_
#define computeGradLag_8XJkm5jj_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_8XJkm5jj(real_T workspace[27951], int32_T nVar, const
  real_T grad[121], const real_T AineqTrans[9680], const real_T AeqTrans[1210],
  const int32_T finiteLB[121], int32_T mLB, const int32_T finiteUB[121], const
  real_T lambda[231]);

#endif
