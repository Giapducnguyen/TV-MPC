#ifndef saturateDirection_4fBYENEh_h_
#define saturateDirection_4fBYENEh_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_4fBYENEh(const real_T xk[83], real_T delta_x[486],
  real_T xstarqp[486], const int32_T indexLB[486], const int32_T indexUB[486],
  int32_T mLB, int32_T mUB);

#endif
