#ifndef computeGradLag_Q8F8Bsno_h_
#define computeGradLag_Q8F8Bsno_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_Q8F8Bsno(real_T workspace[309], int32_T nVar, const
  real_T grad[309], const real_T AineqTrans[53148], const real_T AeqTrans[13596],
  const int32_T finiteFixed[309], int32_T mFixed, const int32_T finiteLB[309],
  int32_T mLB, const int32_T finiteUB[309], int32_T mUB, const real_T lambda[573]);

#endif
