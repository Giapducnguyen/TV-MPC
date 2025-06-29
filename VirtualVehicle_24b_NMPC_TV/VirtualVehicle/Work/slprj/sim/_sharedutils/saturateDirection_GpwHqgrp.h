#ifndef saturateDirection_GpwHqgrp_h_
#define saturateDirection_GpwHqgrp_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_GpwHqgrp(const real_T xk[33], real_T delta_x[166],
  real_T xstarqp[166], const int32_T indexLB[166], const int32_T indexUB[166],
  int32_T mLB, int32_T mUB);

#endif
