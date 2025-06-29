#ifndef computeGradLag_RDGRpEzM_h_
#define computeGradLag_RDGRpEzM_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_RDGRpEzM(real_T workspace[160], int32_T nVar, const
  real_T grad[160], const real_T AineqTrans[6720], const real_T AeqTrans[5280],
  const int32_T finiteFixed[160], int32_T mFixed, const int32_T finiteLB[160],
  int32_T mLB, const int32_T finiteUB[160], int32_T mUB, const real_T lambda[286]);

#endif
