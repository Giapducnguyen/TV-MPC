#ifndef computeGradLag_nY2y1Ms2_h_
#define computeGradLag_nY2y1Ms2_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_nY2y1Ms2(real_T workspace[290], int32_T nVar, const
  real_T grad[290], const real_T AineqTrans[46400], const real_T AeqTrans[7830],
  const int32_T finiteFixed[290], int32_T mFixed, const int32_T finiteLB[290],
  int32_T mLB, const int32_T finiteUB[290], int32_T mUB, const real_T lambda[552]);

#endif
