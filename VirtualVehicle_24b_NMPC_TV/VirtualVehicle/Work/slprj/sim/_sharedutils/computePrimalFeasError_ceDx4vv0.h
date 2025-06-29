#ifndef computePrimalFeasError_ceDx4vv0_h_
#define computePrimalFeasError_ceDx4vv0_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computePrimalFeasError_ceDx4vv0(const real_T x[48], const real_T
  cIneq[42], const real_T cEq[33], const int32_T finiteLB[157], int32_T mLB,
  const real_T lb[48], const int32_T finiteUB[157], int32_T mUB, const real_T
  ub[48]);

#endif
