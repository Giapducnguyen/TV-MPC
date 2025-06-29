#ifndef computeGradLag_UijdpoDh_h_
#define computeGradLag_UijdpoDh_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_UijdpoDh(real_T workspace[126], int32_T nVar, const
  real_T grad[126], const real_T AineqTrans[10080], const real_T AeqTrans[1260],
  const int32_T finiteFixed[126], int32_T mFixed, const int32_T finiteLB[126],
  int32_T mLB, const int32_T finiteUB[126], int32_T mUB, const real_T lambda[241]);

#endif
