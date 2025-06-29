#ifndef saturateDirection_TH5uff90_h_
#define saturateDirection_TH5uff90_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_TH5uff90(const real_T xk[42], real_T delta_x[203],
  real_T xstarqp[203], const int32_T indexLB[203], const int32_T indexUB[203],
  int32_T mLB, int32_T mUB);

#endif
