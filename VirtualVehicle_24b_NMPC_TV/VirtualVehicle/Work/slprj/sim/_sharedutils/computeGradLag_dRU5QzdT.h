#ifndef computeGradLag_dRU5QzdT_h_
#define computeGradLag_dRU5QzdT_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_dRU5QzdT(real_T workspace[131], int32_T nVar, const
  real_T grad[131], const real_T AineqTrans[7860], const real_T AeqTrans[1965],
  const int32_T finiteFixed[131], int32_T mFixed, const int32_T finiteLB[131],
  int32_T mLB, const int32_T finiteUB[131], int32_T mUB, const real_T lambda[246]);

#endif
