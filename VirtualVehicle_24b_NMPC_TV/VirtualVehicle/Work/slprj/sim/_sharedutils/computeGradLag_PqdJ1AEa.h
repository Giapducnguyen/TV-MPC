#ifndef computeGradLag_PqdJ1AEa_h_
#define computeGradLag_PqdJ1AEa_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_PqdJ1AEa(real_T workspace[568], int32_T nVar, const
  real_T grad[568], const real_T AineqTrans[190848], const real_T AeqTrans[35784],
  const int32_T finiteFixed[568], int32_T mFixed, const int32_T finiteLB[568],
  int32_T mLB, const int32_T finiteUB[568], int32_T mUB, const real_T lambda
  [1072]);

#endif
