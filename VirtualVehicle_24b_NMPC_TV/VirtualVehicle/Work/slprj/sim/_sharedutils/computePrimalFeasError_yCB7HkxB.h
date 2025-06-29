#ifndef computePrimalFeasError_yCB7HkxB_h_
#define computePrimalFeasError_yCB7HkxB_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computePrimalFeasError_yCB7HkxB(const real_T x[48], const real_T
  cIneq[100], const real_T cEq[18], const int32_T finiteLB[185], int32_T mLB,
  const real_T lb[48], const int32_T finiteUB[185], int32_T mUB, const real_T
  ub[48]);

#endif
