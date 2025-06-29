#ifndef computeGradLag_qA6mFAAa_h_
#define computeGradLag_qA6mFAAa_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_qA6mFAAa(real_T workspace[295929], int32_T nVar,
  const real_T grad[393], const real_T AineqTrans[97464], const real_T AeqTrans
  [12576], const int32_T finiteFixed[393], int32_T mFixed, const int32_T
  finiteLB[393], int32_T mLB, const int32_T finiteUB[393], int32_T mUB, const
  real_T lambda[753]);

#endif
