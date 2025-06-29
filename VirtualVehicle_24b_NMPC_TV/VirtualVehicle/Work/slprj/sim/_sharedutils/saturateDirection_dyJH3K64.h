#ifndef saturateDirection_dyJH3K64_h_
#define saturateDirection_dyJH3K64_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_dyJH3K64(const real_T xk[27], real_T delta_x[138],
  real_T xstarqp[138], const int32_T indexLB[138], const int32_T indexUB[138],
  int32_T mLB, int32_T mUB, const real_T ub[27]);

#endif
