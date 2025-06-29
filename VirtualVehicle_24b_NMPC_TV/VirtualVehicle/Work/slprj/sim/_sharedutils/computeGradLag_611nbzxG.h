#ifndef computeGradLag_611nbzxG_h_
#define computeGradLag_611nbzxG_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_611nbzxG(real_T workspace[122], int32_T nVar, const
  real_T grad[122], const real_T AineqTrans[8540], const real_T AeqTrans[1464],
  const int32_T finiteLB[122], int32_T mLB, const int32_T finiteUB[122], const
  real_T lambda[231]);

#endif
