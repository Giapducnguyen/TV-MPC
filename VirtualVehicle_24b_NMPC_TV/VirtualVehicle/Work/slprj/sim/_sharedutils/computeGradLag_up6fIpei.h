#ifndef computeGradLag_up6fIpei_h_
#define computeGradLag_up6fIpei_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_up6fIpei(real_T workspace[305], int32_T nVar, const
  real_T grad[305], const real_T AineqTrans[51240], const real_T AeqTrans[13420],
  const int32_T finiteFixed[305], int32_T mFixed, const int32_T finiteLB[305],
  int32_T mLB, const int32_T finiteUB[305], int32_T mUB, const real_T lambda[565]);

#endif
