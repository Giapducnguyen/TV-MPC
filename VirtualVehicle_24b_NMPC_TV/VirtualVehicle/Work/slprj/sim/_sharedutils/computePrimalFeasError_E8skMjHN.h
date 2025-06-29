#ifndef computePrimalFeasError_E8skMjHN_h_
#define computePrimalFeasError_E8skMjHN_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computePrimalFeasError_E8skMjHN(const real_T x[75], const real_T
  cIneq[160], const real_T cEq[27], const int32_T finiteLB[290], int32_T mLB,
  const real_T lb[75], const int32_T finiteUB[290], int32_T mUB, const real_T
  ub[75]);

#endif
