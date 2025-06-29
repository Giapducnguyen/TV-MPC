#ifndef computeGradLag_7uAKL99j_h_
#define computeGradLag_7uAKL99j_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_7uAKL99j(real_T workspace[486], int32_T nVar, const
  real_T grad[486], const real_T AineqTrans[131220], const real_T AeqTrans[32076],
  const int32_T finiteFixed[486], int32_T mFixed, const int32_T finiteLB[486],
  int32_T mLB, const int32_T finiteUB[486], int32_T mUB, const real_T lambda[905]);

#endif
