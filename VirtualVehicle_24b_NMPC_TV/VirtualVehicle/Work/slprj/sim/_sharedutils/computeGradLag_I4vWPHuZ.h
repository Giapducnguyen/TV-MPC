#ifndef computeGradLag_I4vWPHuZ_h_
#define computeGradLag_I4vWPHuZ_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_I4vWPHuZ(real_T workspace[47817], int32_T nVar, const
  real_T grad[161], const real_T AineqTrans[13524], const real_T AeqTrans[3864],
  const int32_T finiteFixed[161], int32_T mFixed, const int32_T finiteLB[161],
  int32_T mLB, const int32_T finiteUB[161], int32_T mUB, const real_T lambda[297]);

#endif
