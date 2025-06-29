#ifndef computeGradLag_mcJ11ETP_h_
#define computeGradLag_mcJ11ETP_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_mcJ11ETP(real_T workspace[64296], int32_T nVar, const
  real_T grad[188], const real_T AineqTrans[11280], const real_T AeqTrans[6204],
  const int32_T finiteFixed[188], int32_T mFixed, const int32_T finiteLB[188],
  int32_T mLB, const int32_T finiteUB[188], int32_T mUB, const real_T lambda[342]);

#endif
