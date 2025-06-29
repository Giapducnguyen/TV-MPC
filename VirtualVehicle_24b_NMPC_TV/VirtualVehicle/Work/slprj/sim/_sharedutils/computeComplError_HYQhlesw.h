#ifndef computeComplError_HYQhlesw_h_
#define computeComplError_HYQhlesw_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computeComplError_HYQhlesw(const real_T xCurrent[51], const real_T
  cIneq[54], const int32_T finiteLB[172], int32_T mLB, const real_T lb[51],
  const int32_T finiteUB[172], int32_T mUB, const real_T ub[51], const real_T
  lambda[310], int32_T iL0);

#endif
