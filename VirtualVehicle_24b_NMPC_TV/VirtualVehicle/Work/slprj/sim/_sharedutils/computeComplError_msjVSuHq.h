#ifndef computeComplError_msjVSuHq_h_
#define computeComplError_msjVSuHq_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computeComplError_msjVSuHq(const real_T xCurrent[60], const real_T
  cIneq[36], const int32_T finiteLB[193], int32_T mLB, const real_T lb[60],
  const int32_T finiteUB[193], int32_T mUB, const real_T ub[60], const real_T
  lambda[337], int32_T iL0);

#endif
