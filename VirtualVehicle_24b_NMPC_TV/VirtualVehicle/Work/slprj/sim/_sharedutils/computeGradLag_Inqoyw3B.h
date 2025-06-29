#ifndef computeGradLag_Inqoyw3B_h_
#define computeGradLag_Inqoyw3B_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_Inqoyw3B(real_T workspace[167476], int32_T nVar,
  const real_T grad[298], const real_T AineqTrans[52448], const real_T AeqTrans
  [9834], const int32_T finiteFixed[298], int32_T mFixed, const int32_T
  finiteLB[298], int32_T mLB, const int32_T finiteUB[298], int32_T mUB, const
  real_T lambda[562]);

#endif
