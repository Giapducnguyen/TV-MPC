#ifndef computeComplError_IEkrunoa_h_
#define computeComplError_IEkrunoa_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computeComplError_IEkrunoa(const real_T xCurrent[51], const real_T
  cIneq[60], const int32_T finiteLB[178], int32_T mLB, const real_T lb[51],
  const int32_T finiteUB[178], int32_T mUB, const real_T ub[51], const real_T
  lambda[322], int32_T iL0);

#endif
