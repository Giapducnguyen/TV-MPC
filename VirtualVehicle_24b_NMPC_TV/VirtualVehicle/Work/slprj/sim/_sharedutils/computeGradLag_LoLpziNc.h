#ifndef computeGradLag_LoLpziNc_h_
#define computeGradLag_LoLpziNc_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_LoLpziNc(real_T workspace[76200], int32_T nVar, const
  real_T grad[200], const real_T AineqTrans[20400], const real_T AeqTrans[3600],
  const int32_T finiteFixed[200], int32_T mFixed, const int32_T finiteLB[200],
  int32_T mLB, const int32_T finiteUB[200], int32_T mUB, const real_T lambda[381]);

#endif
