#ifndef computeGradLag_H0ftMoWF_h_
#define computeGradLag_H0ftMoWF_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_H0ftMoWF(real_T workspace[44829], int32_T nVar, const
  real_T grad[153], const real_T AineqTrans[14994], const real_T AeqTrans[1836],
  const int32_T finiteFixed[153], int32_T mFixed, const int32_T finiteLB[153],
  int32_T mLB, const int32_T finiteUB[153], int32_T mUB, const real_T lambda[293]);

#endif
