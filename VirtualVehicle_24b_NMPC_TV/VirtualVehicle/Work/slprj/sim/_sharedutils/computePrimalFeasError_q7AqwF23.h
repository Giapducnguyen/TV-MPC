#ifndef computePrimalFeasError_q7AqwF23_h_
#define computePrimalFeasError_q7AqwF23_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computePrimalFeasError_q7AqwF23(const real_T x[20], const real_T
  cIneq[80], const real_T cEq[10], const int32_T finiteLB[121], int32_T mLB,
  const int32_T finiteUB[121]);

#endif
