#ifndef computeGradLag_EXmf7P58_h_
#define computeGradLag_EXmf7P58_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_EXmf7P58(real_T workspace[165], int32_T nVar, const
  real_T grad[165], const real_T AineqTrans[14520], const real_T AeqTrans[3960],
  const int32_T finiteFixed[165], int32_T mFixed, const int32_T finiteLB[165],
  int32_T mLB, const int32_T finiteUB[165], int32_T mUB, const real_T lambda[305]);

#endif
