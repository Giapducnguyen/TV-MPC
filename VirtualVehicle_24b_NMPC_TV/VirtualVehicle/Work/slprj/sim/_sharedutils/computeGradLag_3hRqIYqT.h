#ifndef computeGradLag_3hRqIYqT_h_
#define computeGradLag_3hRqIYqT_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_3hRqIYqT(real_T workspace[74095], int32_T nVar, const
  real_T grad[203], const real_T AineqTrans[16240], const real_T AeqTrans[8120],
  const int32_T finiteFixed[203], int32_T mFixed, const int32_T finiteLB[203],
  int32_T mLB, const int32_T finiteUB[203], int32_T mUB, const real_T lambda[365]);

#endif
