#ifndef computePrimalFeasError_zY9Vpiu9_h_
#define computePrimalFeasError_zY9Vpiu9_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computePrimalFeasError_zY9Vpiu9(const real_T x[75], const real_T
  cIneq[128], const real_T cEq[27], const int32_T finiteLB[258], int32_T mLB,
  const real_T lb[75], const int32_T finiteUB[258], int32_T mUB, const real_T
  ub[75]);

#endif
