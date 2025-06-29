#ifndef computeGradLag_3U8ezXuS_h_
#define computeGradLag_3U8ezXuS_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_3U8ezXuS(real_T workspace[89320], int32_T nVar, const
  real_T grad[220], const real_T AineqTrans[19800], const real_T AeqTrans[7260],
  const int32_T finiteFixed[220], int32_T mFixed, const int32_T finiteLB[220],
  int32_T mLB, const int32_T finiteUB[220], int32_T mUB, const real_T lambda[406]);

#endif
