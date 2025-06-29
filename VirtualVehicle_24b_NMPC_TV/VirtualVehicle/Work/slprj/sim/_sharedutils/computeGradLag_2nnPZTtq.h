#ifndef computeGradLag_2nnPZTtq_h_
#define computeGradLag_2nnPZTtq_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_2nnPZTtq(real_T workspace[106887], int32_T nVar,
  const real_T grad[237], const real_T AineqTrans[33180], const real_T AeqTrans
  [5214], const int32_T finiteFixed[237], int32_T mFixed, const int32_T
  finiteLB[237], int32_T mLB, const int32_T finiteUB[237], int32_T mUB, const
  real_T lambda[451]);

#endif
