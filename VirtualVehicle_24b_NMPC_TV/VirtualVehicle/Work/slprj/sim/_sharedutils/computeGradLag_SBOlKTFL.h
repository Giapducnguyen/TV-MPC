#ifndef computeGradLag_SBOlKTFL_h_
#define computeGradLag_SBOlKTFL_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_SBOlKTFL(real_T workspace[299], int32_T nVar, const
  real_T grad[299], const real_T AineqTrans[46644], const real_T AeqTrans[8073],
  const int32_T finiteFixed[299], int32_T mFixed, const int32_T finiteLB[299],
  int32_T mLB, const int32_T finiteUB[299], int32_T mUB, const real_T lambda[570]);

#endif
