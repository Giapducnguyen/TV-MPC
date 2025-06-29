#ifndef computeGradLag_X3Dn7STa_h_
#define computeGradLag_X3Dn7STa_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_X3Dn7STa(real_T workspace[28182], int32_T nVar, const
  real_T grad[122], const real_T AineqTrans[8540], const real_T AeqTrans[1464],
  const int32_T finiteLB[122], int32_T mLB, const int32_T finiteUB[122], const
  real_T lambda[231]);

#endif
