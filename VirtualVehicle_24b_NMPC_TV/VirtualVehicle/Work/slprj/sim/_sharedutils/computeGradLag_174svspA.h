#ifndef computeGradLag_174svspA_h_
#define computeGradLag_174svspA_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_174svspA(real_T workspace[50630], int32_T nVar, const
  real_T grad[166], const real_T AineqTrans[13280], const real_T AeqTrans[4316],
  const int32_T finiteFixed[166], int32_T mFixed, const int32_T finiteLB[166],
  int32_T mLB, const int32_T finiteUB[166], int32_T mUB, const real_T lambda[305]);

#endif
