#ifndef computeGradLag_Thic60NZ_h_
#define computeGradLag_Thic60NZ_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_Thic60NZ(real_T workspace[57925], int32_T nVar, const
  real_T grad[175], const real_T AineqTrans[15750], const real_T AeqTrans[3150],
  const int32_T finiteFixed[175], int32_T mFixed, const int32_T finiteLB[175],
  int32_T mLB, const int32_T finiteUB[175], int32_T mUB, const real_T lambda[331]);

#endif
