#ifndef computeGradLag_xop2Ze4H_h_
#define computeGradLag_xop2Ze4H_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_xop2Ze4H(real_T workspace[28905], int32_T nVar, const
  real_T grad[123], const real_T AineqTrans[9840], const real_T AeqTrans[1230],
  const int32_T finiteLB[123], int32_T mLB, const int32_T finiteUB[123], const
  real_T lambda[235]);

#endif
