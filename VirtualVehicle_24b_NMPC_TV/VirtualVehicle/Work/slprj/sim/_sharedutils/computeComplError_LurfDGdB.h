#ifndef computeComplError_LurfDGdB_h_
#define computeComplError_LurfDGdB_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computeComplError_LurfDGdB(const real_T xCurrent[48], const real_T
  cIneq[100], const int32_T finiteLB[185], int32_T mLB, const real_T lb[48],
  const int32_T finiteUB[185], int32_T mUB, const real_T ub[48], const real_T
  lambda[351], int32_T iL0);

#endif
