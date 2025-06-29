#ifndef computeGradLag_C303HxHI_h_
#define computeGradLag_C303HxHI_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_C303HxHI(real_T workspace[57200], int32_T nVar, const
  real_T grad[176], const real_T AineqTrans[15840], const real_T AeqTrans[4576],
  const int32_T finiteFixed[176], int32_T mFixed, const int32_T finiteLB[176],
  int32_T mLB, const int32_T finiteUB[176], int32_T mUB, const real_T lambda[325]);

#endif
