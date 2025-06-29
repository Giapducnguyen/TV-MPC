#ifndef computeGradLag_4pPoBAet_h_
#define computeGradLag_4pPoBAet_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_4pPoBAet(real_T workspace[449], int32_T nVar, const
  real_T grad[449], const real_T AineqTrans[113148], const real_T AeqTrans[28736],
  const int32_T finiteFixed[449], int32_T mFixed, const int32_T finiteLB[449],
  int32_T mLB, const int32_T finiteUB[449], int32_T mUB, const real_T lambda[833]);

#endif
