#ifndef computeComplError_uquVS1IN_h_
#define computeComplError_uquVS1IN_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computeComplError_uquVS1IN(const real_T xCurrent[123], const
  real_T cIneq[210], const int32_T finiteLB[430], int32_T mLB, const real_T lb
  [123], const int32_T finiteUB[430], int32_T mUB, const real_T ub[123], const
  real_T lambda[811], int32_T iL0);

#endif
