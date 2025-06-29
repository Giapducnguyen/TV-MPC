#ifndef computeGradLag_kRY2HIyo_h_
#define computeGradLag_kRY2HIyo_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_kRY2HIyo(real_T workspace[167657], int32_T nVar,
  const real_T grad[301], const real_T AineqTrans[49364], const real_T AeqTrans
  [13244], const int32_T finiteFixed[301], int32_T mFixed, const int32_T
  finiteLB[301], int32_T mLB, const int32_T finiteUB[301], int32_T mUB, const
  real_T lambda[557]);

#endif
