#ifndef computePrimalFeasError_c2tXCEGa_h_
#define computePrimalFeasError_c2tXCEGa_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computePrimalFeasError_c2tXCEGa(const real_T x[51], const real_T
  cIneq[42], const real_T cEq[33], const int32_T finiteLB[160], int32_T mLB,
  const real_T lb[51], const int32_T finiteUB[160], int32_T mUB, const real_T
  ub[51]);

#endif
