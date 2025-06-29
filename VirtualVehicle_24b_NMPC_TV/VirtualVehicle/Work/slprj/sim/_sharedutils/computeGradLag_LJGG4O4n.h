#ifndef computeGradLag_LJGG4O4n_h_
#define computeGradLag_LJGG4O4n_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_LJGG4O4n(real_T workspace[39039], int32_T nVar, const
  real_T grad[143], const real_T AineqTrans[12584], const real_T AeqTrans[1716],
  const int32_T finiteFixed[143], int32_T mFixed, const int32_T finiteLB[143],
  int32_T mLB, const int32_T finiteUB[143], int32_T mUB, const real_T lambda[273]);

#endif
