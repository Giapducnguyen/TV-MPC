#ifndef computeGradLag_hAWuUq6M_h_
#define computeGradLag_hAWuUq6M_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_hAWuUq6M(real_T workspace[202], int32_T nVar, const
  real_T grad[202], const real_T AineqTrans[20604], const real_T AeqTrans[3838],
  const int32_T finiteFixed[202], int32_T mFixed, const int32_T finiteLB[202],
  int32_T mLB, const int32_T finiteUB[202], int32_T mUB, const real_T lambda[384]);

#endif
