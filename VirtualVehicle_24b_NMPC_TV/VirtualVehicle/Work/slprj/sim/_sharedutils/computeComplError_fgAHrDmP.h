#ifndef computeComplError_fgAHrDmP_h_
#define computeComplError_fgAHrDmP_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computeComplError_fgAHrDmP(const real_T xCurrent[78], const real_T
  cIneq[70], const int32_T finiteLB[245], int32_T mLB, const real_T lb[78],
  const int32_T finiteUB[245], int32_T mUB, const real_T ub[78], const real_T
  lambda[441], int32_T iL0);

#endif
