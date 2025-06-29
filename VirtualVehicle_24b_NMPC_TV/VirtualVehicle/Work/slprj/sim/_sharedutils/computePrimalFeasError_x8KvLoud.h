#ifndef computePrimalFeasError_x8KvLoud_h_
#define computePrimalFeasError_x8KvLoud_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computePrimalFeasError_x8KvLoud(const real_T x[93], const real_T
  cIneq[180], const real_T cEq[33], const int32_T finiteLB[340], int32_T mLB,
  const real_T lb[93], const int32_T finiteUB[340], int32_T mUB, const real_T
  ub[93]);

#endif
