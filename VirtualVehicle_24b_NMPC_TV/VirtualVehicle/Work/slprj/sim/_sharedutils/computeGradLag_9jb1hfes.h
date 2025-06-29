#ifndef computeGradLag_9jb1hfes_h_
#define computeGradLag_9jb1hfes_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_9jb1hfes(real_T workspace[219640], int32_T nVar,
  const real_T grad[340], const real_T AineqTrans[61200], const real_T AeqTrans
  [11220], const int32_T finiteFixed[340], int32_T mFixed, const int32_T
  finiteLB[340], int32_T mLB, const int32_T finiteUB[340], int32_T mUB, const
  real_T lambda[646]);

#endif
