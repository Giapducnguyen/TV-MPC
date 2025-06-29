#ifndef computePrimalFeasError_fAfoc2SO_h_
#define computePrimalFeasError_fAfoc2SO_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computePrimalFeasError_fAfoc2SO(const real_T x[78], const real_T
  cIneq[100], const real_T cEq[48], const int32_T finiteLB[275], int32_T mLB,
  const real_T lb[78], const int32_T finiteUB[275], int32_T mUB, const real_T
  ub[78]);

#endif
