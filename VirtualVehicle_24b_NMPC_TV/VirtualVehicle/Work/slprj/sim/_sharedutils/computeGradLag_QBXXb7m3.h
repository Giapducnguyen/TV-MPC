#ifndef computeGradLag_QBXXb7m3_h_
#define computeGradLag_QBXXb7m3_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_QBXXb7m3(real_T workspace[142480], int32_T nVar,
  const real_T grad[274], const real_T AineqTrans[39456], const real_T AeqTrans
  [7398], const int32_T finiteFixed[274], int32_T mFixed, const int32_T
  finiteLB[274], int32_T mLB, const int32_T finiteUB[274], int32_T mUB, const
  real_T lambda[520]);

#endif
