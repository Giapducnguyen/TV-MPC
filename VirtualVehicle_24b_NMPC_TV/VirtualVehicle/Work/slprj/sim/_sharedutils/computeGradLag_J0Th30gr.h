#ifndef computeGradLag_J0Th30gr_h_
#define computeGradLag_J0Th30gr_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_J0Th30gr(real_T workspace[282], int32_T nVar, const
  real_T grad[282], const real_T AineqTrans[46248], const real_T AeqTrans[8460],
  const int32_T finiteFixed[282], int32_T mFixed, const int32_T finiteLB[282],
  int32_T mLB, const int32_T finiteUB[282], int32_T mUB, const real_T lambda[533]);

#endif
