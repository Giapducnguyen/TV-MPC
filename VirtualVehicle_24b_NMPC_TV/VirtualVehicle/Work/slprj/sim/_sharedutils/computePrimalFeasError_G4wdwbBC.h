#ifndef computePrimalFeasError_G4wdwbBC_h_
#define computePrimalFeasError_G4wdwbBC_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computePrimalFeasError_G4wdwbBC(const real_T x[78], const real_T
  cIneq[90], const real_T cEq[48], const int32_T finiteLB[265], int32_T mLB,
  const real_T lb[78], const int32_T finiteUB[265], int32_T mUB, const real_T
  ub[78]);

#endif
