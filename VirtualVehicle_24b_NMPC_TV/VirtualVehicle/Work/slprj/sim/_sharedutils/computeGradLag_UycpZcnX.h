#ifndef computeGradLag_UycpZcnX_h_
#define computeGradLag_UycpZcnX_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_UycpZcnX(real_T workspace[129], int32_T nVar, const
  real_T grad[129], const real_T AineqTrans[6192], const real_T AeqTrans[3354],
  const int32_T finiteLB[129], int32_T mLB, const int32_T finiteUB[129], const
  real_T lambda[231]);

#endif
