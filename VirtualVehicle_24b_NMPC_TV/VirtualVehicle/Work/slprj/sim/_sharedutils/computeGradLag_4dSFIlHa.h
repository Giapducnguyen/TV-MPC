#ifndef computeGradLag_4dSFIlHa_h_
#define computeGradLag_4dSFIlHa_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_4dSFIlHa(real_T workspace[244], int32_T nVar, const
  real_T grad[244], const real_T AineqTrans[28304], const real_T AeqTrans[8052],
  const int32_T finiteFixed[244], int32_T mFixed, const int32_T finiteLB[244],
  int32_T mLB, const int32_T finiteUB[244], int32_T mUB, const real_T lambda[454]);

#endif
