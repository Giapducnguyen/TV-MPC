#ifndef computeGradLag_qkkWLJPE_h_
#define computeGradLag_qkkWLJPE_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_qkkWLJPE(real_T workspace[50655], int32_T nVar, const
  real_T grad[165], const real_T AineqTrans[15180], const real_T AeqTrans[3630],
  const int32_T finiteFixed[165], int32_T mFixed, const int32_T finiteLB[165],
  int32_T mLB, const int32_T finiteUB[165], int32_T mUB, const real_T lambda[307]);

#endif
