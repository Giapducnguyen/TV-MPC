#ifndef computeGradLag_MAFJpooR_h_
#define computeGradLag_MAFJpooR_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_MAFJpooR(real_T workspace[520332], int32_T nVar,
  const real_T grad[524], const real_T AineqTrans[141480], const real_T
  AeqTrans[28296], const int32_T finiteFixed[524], int32_T mFixed, const int32_T
  finiteLB[524], int32_T mLB, const int32_T finiteUB[524], int32_T mUB, const
  real_T lambda[993]);

#endif
