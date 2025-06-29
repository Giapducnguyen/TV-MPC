#ifndef computePrimalFeasError_dkIk6IPb_h_
#define computePrimalFeasError_dkIk6IPb_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computePrimalFeasError_dkIk6IPb(const real_T x[75], const real_T
  cIneq[144], const real_T cEq[27], const int32_T finiteLB[274], int32_T mLB,
  const real_T lb[75], const int32_T finiteUB[274], int32_T mUB, const real_T
  ub[75]);

#endif
