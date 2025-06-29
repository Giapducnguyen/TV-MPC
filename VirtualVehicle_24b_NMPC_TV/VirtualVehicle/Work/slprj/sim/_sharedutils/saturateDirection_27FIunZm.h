#ifndef saturateDirection_27FIunZm_h_
#define saturateDirection_27FIunZm_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_27FIunZm(const real_T xk[128], real_T delta_x[861],
  real_T xstarqp[861], const int32_T indexLB[861], const int32_T indexUB[861],
  int32_T mLB, int32_T mUB);

#endif
