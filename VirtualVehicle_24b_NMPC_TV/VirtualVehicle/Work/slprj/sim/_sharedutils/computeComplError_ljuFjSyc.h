#ifndef computeComplError_ljuFjSyc_h_
#define computeComplError_ljuFjSyc_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computeComplError_ljuFjSyc(const real_T xCurrent[51], const real_T
  cIneq[42], const int32_T finiteLB[160], int32_T mLB, const real_T lb[51],
  const int32_T finiteUB[160], int32_T mUB, const real_T ub[51], const real_T
  lambda[286], int32_T iL0);

#endif
