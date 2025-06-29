#ifndef computeGradLag_85CX28pP_h_
#define computeGradLag_85CX28pP_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_85CX28pP(real_T workspace[258], int32_T nVar, const
  real_T grad[258], const real_T AineqTrans[33024], const real_T AeqTrans[6966],
  const int32_T finiteFixed[258], int32_T mFixed, const int32_T finiteLB[258],
  int32_T mLB, const int32_T finiteUB[258], int32_T mUB, const real_T lambda[488]);

#endif
