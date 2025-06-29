#ifndef computeGradLag_AADPtofU_h_
#define computeGradLag_AADPtofU_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_AADPtofU(real_T workspace[38776], int32_T nVar, const
  real_T grad[148], const real_T AineqTrans[5328], const real_T AeqTrans[4884],
  const int32_T finiteFixed[148], int32_T mFixed, const int32_T finiteLB[148],
  int32_T mLB, const int32_T finiteUB[148], int32_T mUB, const real_T lambda[262]);

#endif
