#ifndef computeGradLag_SA1VJ6pt_h_
#define computeGradLag_SA1VJ6pt_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_SA1VJ6pt(real_T workspace[110352], int32_T nVar,
  const real_T grad[242], const real_T AineqTrans[27104], const real_T AeqTrans
  [6534], const int32_T finiteFixed[242], int32_T mFixed, const int32_T
  finiteLB[242], int32_T mLB, const int32_T finiteUB[242], int32_T mUB, const
  real_T lambda[456]);

#endif
