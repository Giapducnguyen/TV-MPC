#ifndef computeGradLag_THuUUcPj_h_
#define computeGradLag_THuUUcPj_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_THuUUcPj(real_T workspace[271], int32_T nVar, const
  real_T grad[271], const real_T AineqTrans[48780], const real_T AeqTrans[5420],
  const int32_T finiteFixed[271], int32_T mFixed, const int32_T finiteLB[271],
  int32_T mLB, const int32_T finiteUB[271], int32_T mUB, const real_T lambda[521]);

#endif
