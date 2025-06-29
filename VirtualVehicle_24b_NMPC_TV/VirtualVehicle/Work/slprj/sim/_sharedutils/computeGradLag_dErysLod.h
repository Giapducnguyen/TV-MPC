#ifndef computeGradLag_dErysLod_h_
#define computeGradLag_dErysLod_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_dErysLod(real_T workspace[340], int32_T nVar, const
  real_T grad[340], const real_T AineqTrans[61200], const real_T AeqTrans[11220],
  const int32_T finiteFixed[340], int32_T mFixed, const int32_T finiteLB[340],
  int32_T mLB, const int32_T finiteUB[340], int32_T mUB, const real_T lambda[646]);

#endif
