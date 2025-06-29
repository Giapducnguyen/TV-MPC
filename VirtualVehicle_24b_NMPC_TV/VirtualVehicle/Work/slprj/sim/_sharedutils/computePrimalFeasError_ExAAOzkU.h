#ifndef computePrimalFeasError_ExAAOzkU_h_
#define computePrimalFeasError_ExAAOzkU_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computePrimalFeasError_ExAAOzkU(const real_T x[38], const real_T
  cIneq[60], const real_T cEq[18], const int32_T finiteLB[135], int32_T mLB,
  const real_T lb[38], const int32_T finiteUB[135], int32_T mUB, const real_T
  ub[38]);

#endif
