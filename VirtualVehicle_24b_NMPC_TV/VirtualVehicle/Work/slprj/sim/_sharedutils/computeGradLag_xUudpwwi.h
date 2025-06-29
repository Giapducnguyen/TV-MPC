#ifndef computeGradLag_xUudpwwi_h_
#define computeGradLag_xUudpwwi_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_xUudpwwi(real_T workspace[142968], int32_T nVar,
  const real_T grad[276], const real_T AineqTrans[37536], const real_T AeqTrans
  [9108], const int32_T finiteFixed[276], int32_T mFixed, const int32_T
  finiteLB[276], int32_T mLB, const int32_T finiteUB[276], int32_T mUB, const
  real_T lambda[518]);

#endif
