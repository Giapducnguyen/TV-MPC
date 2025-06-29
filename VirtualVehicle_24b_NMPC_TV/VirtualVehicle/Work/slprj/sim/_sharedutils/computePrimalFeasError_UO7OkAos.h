#ifndef computePrimalFeasError_UO7OkAos_h_
#define computePrimalFeasError_UO7OkAos_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computePrimalFeasError_UO7OkAos(const real_T x[68], const real_T
  cIneq[60], const real_T cEq[48], const int32_T finiteLB[225], int32_T mLB,
  const real_T lb[68], const int32_T finiteUB[225], int32_T mUB, const real_T
  ub[68]);

#endif
