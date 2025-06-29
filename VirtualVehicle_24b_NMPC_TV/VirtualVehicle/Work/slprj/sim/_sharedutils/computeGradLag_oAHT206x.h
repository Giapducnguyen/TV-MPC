#ifndef computeGradLag_oAHT206x_h_
#define computeGradLag_oAHT206x_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_oAHT206x(real_T workspace[26741], int32_T nVar, const
  real_T grad[121], const real_T AineqTrans[6534], const real_T AeqTrans[2420],
  const int32_T finiteLB[121], int32_T mLB, const int32_T finiteUB[121], const
  real_T lambda[221]);

#endif
