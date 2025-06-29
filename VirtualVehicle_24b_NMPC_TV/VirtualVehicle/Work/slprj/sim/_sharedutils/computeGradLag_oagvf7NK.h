#ifndef computeGradLag_oagvf7NK_h_
#define computeGradLag_oagvf7NK_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_oagvf7NK(real_T workspace[292], int32_T nVar, const
  real_T grad[292], const real_T AineqTrans[56648], const real_T AeqTrans[5840],
  const int32_T finiteFixed[292], int32_T mFixed, const int32_T finiteLB[292],
  int32_T mLB, const int32_T finiteUB[292], int32_T mUB, const real_T lambda[563]);

#endif
