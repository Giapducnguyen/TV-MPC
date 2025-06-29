#ifndef computeGradLag_tGLi2Ayh_h_
#define computeGradLag_tGLi2Ayh_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_tGLi2Ayh(real_T workspace[246960], int32_T nVar,
  const real_T grad[360], const real_T AineqTrans[72000], const real_T AeqTrans
  [11880], const int32_T finiteFixed[360], int32_T mFixed, const int32_T
  finiteLB[360], int32_T mLB, const int32_T finiteUB[360], int32_T mUB, const
  real_T lambda[686]);

#endif
