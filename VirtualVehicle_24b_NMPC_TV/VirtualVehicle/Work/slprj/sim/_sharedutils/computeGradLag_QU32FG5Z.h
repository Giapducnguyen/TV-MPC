#ifndef computeGradLag_QU32FG5Z_h_
#define computeGradLag_QU32FG5Z_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_QU32FG5Z(real_T workspace[172473], int32_T nVar,
  const real_T grad[301], const real_T AineqTrans[46956], const real_T AeqTrans
  [8428], const int32_T finiteFixed[301], int32_T mFixed, const int32_T
  finiteLB[301], int32_T mLB, const int32_T finiteUB[301], int32_T mUB, const
  real_T lambda[573]);

#endif
