#ifndef computeGradLag_7ZxcFBd2_h_
#define computeGradLag_7ZxcFBd2_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_7ZxcFBd2(real_T workspace[35496], int32_T nVar, const
  real_T grad[136], const real_T AineqTrans[12240], const real_T AeqTrans[1360],
  const int32_T finiteFixed[136], int32_T mFixed, const int32_T finiteLB[136],
  int32_T mLB, const int32_T finiteUB[136], int32_T mUB, const real_T lambda[261]);

#endif
