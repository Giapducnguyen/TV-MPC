#ifndef computeGradLag_lr4wNAT3_h_
#define computeGradLag_lr4wNAT3_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_lr4wNAT3(real_T workspace[25370], int32_T nVar, const
  real_T grad[118], const real_T AineqTrans[5664], const real_T AeqTrans[2360],
  const int32_T finiteFixed[118], int32_T mFixed, const int32_T finiteLB[118],
  int32_T mLB, const int32_T finiteUB[118], int32_T mUB, const real_T lambda[215]);

#endif
