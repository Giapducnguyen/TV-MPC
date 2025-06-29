#ifndef computeGradLag_8SDGsRGQ_h_
#define computeGradLag_8SDGsRGQ_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_8SDGsRGQ(real_T workspace[37062], int32_T nVar, const
  real_T grad[142], const real_T AineqTrans[9940], const real_T AeqTrans[3124],
  const int32_T finiteLB[142], int32_T mLB, const int32_T finiteUB[142], const
  real_T lambda[261]);

#endif
