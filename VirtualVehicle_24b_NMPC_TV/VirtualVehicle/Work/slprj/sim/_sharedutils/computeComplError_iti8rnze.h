#ifndef computeComplError_iti8rnze_h_
#define computeComplError_iti8rnze_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computeComplError_iti8rnze(const real_T xCurrent[75], const real_T
  cIneq[128], const int32_T finiteLB[258], int32_T mLB, const real_T lb[75],
  const int32_T finiteUB[258], int32_T mUB, const real_T ub[75], const real_T
  lambda[488], int32_T iL0);

#endif
