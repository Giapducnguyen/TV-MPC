#ifndef computeGradLag_hBQVzCpq_h_
#define computeGradLag_hBQVzCpq_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_hBQVzCpq(real_T workspace[157], int32_T nVar, const
  real_T grad[157], const real_T AineqTrans[6594], const real_T AeqTrans[5181],
  const int32_T finiteFixed[157], int32_T mFixed, const int32_T finiteLB[157],
  int32_T mLB, const int32_T finiteUB[157], int32_T mUB, const real_T lambda[280]);

#endif
