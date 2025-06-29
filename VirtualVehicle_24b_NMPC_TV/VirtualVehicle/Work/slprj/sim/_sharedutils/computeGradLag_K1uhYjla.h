#ifndef computeGradLag_K1uhYjla_h_
#define computeGradLag_K1uhYjla_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_K1uhYjla(real_T workspace[58764], int32_T nVar, const
  real_T grad[177], const real_T AineqTrans[13452], const real_T AeqTrans[3717],
  const int32_T finiteFixed[177], int32_T mFixed, const int32_T finiteLB[177],
  int32_T mLB, const int32_T finiteUB[177], int32_T mUB, const real_T lambda[332]);

#endif
