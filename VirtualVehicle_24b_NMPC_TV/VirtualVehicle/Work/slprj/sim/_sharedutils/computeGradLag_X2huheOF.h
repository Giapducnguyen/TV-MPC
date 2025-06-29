#ifndef computeGradLag_X2huheOF_h_
#define computeGradLag_X2huheOF_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_X2huheOF(real_T workspace[152021], int32_T nVar,
  const real_T grad[281], const real_T AineqTrans[54514], const real_T AeqTrans
  [5620], const int32_T finiteFixed[281], int32_T mFixed, const int32_T
  finiteLB[281], int32_T mLB, const int32_T finiteUB[281], int32_T mUB, const
  real_T lambda[541]);

#endif
