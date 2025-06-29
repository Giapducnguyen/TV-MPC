#ifndef computePrimalFeasError_efQblVNZ_h_
#define computePrimalFeasError_efQblVNZ_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computePrimalFeasError_efQblVNZ(const real_T x[51], const real_T
  cIneq[54], const real_T cEq[33], const int32_T finiteLB[172], int32_T mLB,
  const real_T lb[51], const int32_T finiteUB[172], int32_T mUB, const real_T
  ub[51]);

#endif
