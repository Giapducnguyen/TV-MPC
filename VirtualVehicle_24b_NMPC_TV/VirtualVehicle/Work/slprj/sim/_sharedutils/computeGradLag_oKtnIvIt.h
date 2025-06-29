#ifndef computeGradLag_oKtnIvIt_h_
#define computeGradLag_oKtnIvIt_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_oKtnIvIt(real_T workspace[55854], int32_T nVar, const
  real_T grad[174], const real_T AineqTrans[15660], const real_T AeqTrans[4524],
  const int32_T finiteFixed[174], int32_T mFixed, const int32_T finiteLB[174],
  int32_T mLB, const int32_T finiteUB[174], int32_T mUB, const real_T lambda[321]);

#endif
