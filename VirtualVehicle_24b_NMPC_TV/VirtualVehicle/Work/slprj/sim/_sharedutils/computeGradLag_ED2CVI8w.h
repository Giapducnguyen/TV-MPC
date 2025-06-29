#ifndef computeGradLag_ED2CVI8w_h_
#define computeGradLag_ED2CVI8w_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_ED2CVI8w(real_T workspace[123], int32_T nVar, const
  real_T grad[123], const real_T AineqTrans[9840], const real_T AeqTrans[1230],
  const int32_T finiteLB[123], int32_T mLB, const int32_T finiteUB[123], const
  real_T lambda[235]);

#endif
