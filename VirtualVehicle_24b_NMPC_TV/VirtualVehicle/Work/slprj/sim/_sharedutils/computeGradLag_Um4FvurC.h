#ifndef computeGradLag_Um4FvurC_h_
#define computeGradLag_Um4FvurC_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_Um4FvurC(real_T workspace[348730], int32_T nVar,
  const real_T grad[430], const real_T AineqTrans[90300], const real_T AeqTrans
  [20640], const int32_T finiteFixed[430], int32_T mFixed, const int32_T
  finiteLB[430], int32_T mLB, const int32_T finiteUB[430], int32_T mUB, const
  real_T lambda[811]);

#endif
