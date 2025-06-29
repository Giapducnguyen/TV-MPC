#ifndef computeGradLag_Z7TqZsWV_h_
#define computeGradLag_Z7TqZsWV_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_Z7TqZsWV(real_T workspace[670115], int32_T nVar,
  const real_T grad[601], const real_T AineqTrans[192320], const real_T
  AeqTrans[51686], const int32_T finiteFixed[601], int32_T mFixed, const int32_T
  finiteLB[601], int32_T mLB, const int32_T finiteUB[601], int32_T mUB, const
  real_T lambda[1115]);

#endif
