#ifndef computeGradLag_X1ickTnz_h_
#define computeGradLag_X1ickTnz_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_X1ickTnz(real_T workspace[33885], int32_T nVar, const
  real_T grad[135], const real_T AineqTrans[8100], const real_T AeqTrans[2430],
  const int32_T finiteFixed[135], int32_T mFixed, const int32_T finiteLB[135],
  int32_T mLB, const int32_T finiteUB[135], int32_T mUB, const real_T lambda[251]);

#endif
