#ifndef computeGradLag_W9nEllwa_h_
#define computeGradLag_W9nEllwa_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_W9nEllwa(real_T workspace[1378], int32_T nVar, const
  real_T grad[1378], const real_T AineqTrans[1124448], const real_T AeqTrans
  [210834], const int32_T finiteFixed[1378], int32_T mFixed, const int32_T
  finiteLB[1378], int32_T mLB, const int32_T finiteUB[1378], int32_T mUB, const
  real_T lambda[2602]);

#endif
