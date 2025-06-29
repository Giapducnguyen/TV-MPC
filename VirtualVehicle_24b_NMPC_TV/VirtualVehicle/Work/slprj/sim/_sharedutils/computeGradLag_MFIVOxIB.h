#ifndef computeGradLag_MFIVOxIB_h_
#define computeGradLag_MFIVOxIB_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_MFIVOxIB(real_T workspace[300], int32_T nVar, const
  real_T grad[300], const real_T AineqTrans[42000], const real_T AeqTrans[9900],
  const int32_T finiteFixed[300], int32_T mFixed, const int32_T finiteLB[300],
  int32_T mLB, const int32_T finiteUB[300], int32_T mUB, const real_T lambda[566]);

#endif
