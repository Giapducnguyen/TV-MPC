#ifndef saturateDirection_2ICk3xRP_h_
#define saturateDirection_2ICk3xRP_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_2ICk3xRP(const real_T xk[40], real_T delta_x[191],
  real_T xstarqp[191], const int32_T indexLB[191], const int32_T indexUB[191],
  int32_T mLB, int32_T mUB);

#endif
