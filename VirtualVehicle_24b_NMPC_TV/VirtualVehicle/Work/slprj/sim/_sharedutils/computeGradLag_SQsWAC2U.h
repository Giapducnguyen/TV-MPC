#ifndef computeGradLag_SQsWAC2U_h_
#define computeGradLag_SQsWAC2U_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_SQsWAC2U(real_T workspace[198], int32_T nVar, const
  real_T grad[198], const real_T AineqTrans[15840], const real_T AeqTrans[6930],
  const int32_T finiteFixed[198], int32_T mFixed, const int32_T finiteLB[198],
  int32_T mLB, const int32_T finiteUB[198], int32_T mUB, const real_T lambda[360]);

#endif
