#ifndef computeGradLag_Hge1yhVR_h_
#define computeGradLag_Hge1yhVR_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_Hge1yhVR(real_T workspace[97980], int32_T nVar, const
  real_T grad[230], const real_T AineqTrans[23000], const real_T AeqTrans[7590],
  const int32_T finiteFixed[230], int32_T mFixed, const int32_T finiteLB[230],
  int32_T mLB, const int32_T finiteUB[230], int32_T mUB, const real_T lambda[426]);

#endif
