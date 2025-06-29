#ifndef computePrimalFeasError_IMQXEPOU_h_
#define computePrimalFeasError_IMQXEPOU_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computePrimalFeasError_IMQXEPOU(const real_T x[75], const real_T
  cIneq[112], const real_T cEq[27], const int32_T finiteLB[242], int32_T mLB,
  const real_T lb[75], const int32_T finiteUB[242], int32_T mUB, const real_T
  ub[75]);

#endif
