#ifndef computeGradLag_8uzapR6A_h_
#define computeGradLag_8uzapR6A_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_8uzapR6A(real_T workspace[288], int32_T nVar, const
  real_T grad[288], const real_T AineqTrans[48384], const real_T AeqTrans[9216],
  const int32_T finiteFixed[288], int32_T mFixed, const int32_T finiteLB[288],
  int32_T mLB, const int32_T finiteUB[288], int32_T mUB, const real_T lambda[543]);

#endif
