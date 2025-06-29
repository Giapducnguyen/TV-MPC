#ifndef saturateDirection_L02y7Ut0_h_
#define saturateDirection_L02y7Ut0_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_L02y7Ut0(const real_T xk[68], real_T delta_x[441],
  real_T xstarqp[441], const int32_T indexLB[441], const int32_T indexUB[441],
  int32_T mLB, int32_T mUB);

#endif
