#ifndef computeGradLag_G65AzRdU_h_
#define computeGradLag_G65AzRdU_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_G65AzRdU(real_T workspace[423], int32_T nVar, const
  real_T grad[423], const real_T AineqTrans[118440], const real_T AeqTrans[13113],
  const int32_T finiteFixed[423], int32_T mFixed, const int32_T finiteLB[423],
  int32_T mLB, const int32_T finiteUB[423], int32_T mUB, const real_T lambda[814]);

#endif
