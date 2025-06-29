#ifndef saturateDirection_7vkdtEdo_h_
#define saturateDirection_7vkdtEdo_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_7vkdtEdo(const real_T xk[52], real_T delta_x[237],
  real_T xstarqp[237], const int32_T indexLB[237], const int32_T indexUB[237],
  int32_T mLB, int32_T mUB);

#endif
