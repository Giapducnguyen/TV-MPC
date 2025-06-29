#ifndef computeGradLag_qAMiEVcw_h_
#define computeGradLag_qAMiEVcw_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_qAMiEVcw(real_T workspace[219], int32_T nVar, const
  real_T grad[219], const real_T AineqTrans[16644], const real_T AeqTrans[5913],
  const int32_T finiteFixed[219], int32_T mFixed, const int32_T finiteLB[219],
  int32_T mLB, const int32_T finiteUB[219], int32_T mUB, const real_T lambda[410]);

#endif
