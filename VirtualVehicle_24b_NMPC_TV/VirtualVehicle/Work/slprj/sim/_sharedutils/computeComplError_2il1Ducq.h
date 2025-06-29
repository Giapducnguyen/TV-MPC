#ifndef computeComplError_2il1Ducq_h_
#define computeComplError_2il1Ducq_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computeComplError_2il1Ducq(const real_T xCurrent[48], const real_T
  cIneq[42], const int32_T finiteLB[157], int32_T mLB, const real_T lb[48],
  const int32_T finiteUB[157], int32_T mUB, const real_T ub[48], const real_T
  lambda[280], int32_T iL0);

#endif
