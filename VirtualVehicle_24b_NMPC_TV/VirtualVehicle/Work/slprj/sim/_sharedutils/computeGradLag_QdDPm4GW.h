#ifndef computeGradLag_QdDPm4GW_h_
#define computeGradLag_QdDPm4GW_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_QdDPm4GW(real_T workspace[186], int32_T nVar, const
  real_T grad[186], const real_T AineqTrans[14880], const real_T AeqTrans[5580],
  const int32_T finiteFixed[186], int32_T mFixed, const int32_T finiteLB[186],
  int32_T mLB, const int32_T finiteUB[186], int32_T mUB, const real_T lambda[341]);

#endif
