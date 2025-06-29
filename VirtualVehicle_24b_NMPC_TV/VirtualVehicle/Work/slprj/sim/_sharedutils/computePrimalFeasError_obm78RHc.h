#ifndef computePrimalFeasError_obm78RHc_h_
#define computePrimalFeasError_obm78RHc_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computePrimalFeasError_obm78RHc(const real_T x[63], const real_T
  cIneq[100], const real_T cEq[33], const int32_T finiteLB[230], int32_T mLB,
  const real_T lb[63], const int32_T finiteUB[230], int32_T mUB, const real_T
  ub[63]);

#endif
