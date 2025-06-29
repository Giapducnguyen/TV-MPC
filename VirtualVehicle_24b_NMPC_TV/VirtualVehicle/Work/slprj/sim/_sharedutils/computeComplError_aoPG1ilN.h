#ifndef computeComplError_aoPG1ilN_h_
#define computeComplError_aoPG1ilN_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern real_T computeComplError_aoPG1ilN(const real_T xCurrent[75], const real_T
  cIneq[144], const int32_T finiteLB[274], int32_T mLB, const real_T lb[75],
  const int32_T finiteUB[274], int32_T mUB, const real_T ub[75], const real_T
  lambda[520], int32_T iL0);

#endif
