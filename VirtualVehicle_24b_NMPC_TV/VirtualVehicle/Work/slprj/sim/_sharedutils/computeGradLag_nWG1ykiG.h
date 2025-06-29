#ifndef computeGradLag_nWG1ykiG_h_
#define computeGradLag_nWG1ykiG_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_nWG1ykiG(real_T workspace[331], int32_T nVar, const
  real_T grad[331], const real_T AineqTrans[60904], const real_T AeqTrans[14564],
  const int32_T finiteFixed[331], int32_T mFixed, const int32_T finiteLB[331],
  int32_T mLB, const int32_T finiteUB[331], int32_T mUB, const real_T lambda[617]);

#endif
