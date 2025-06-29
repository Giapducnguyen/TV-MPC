#ifndef saturateDirection_hnnBtDQT_h_
#define saturateDirection_hnnBtDQT_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_hnnBtDQT(const real_T xk[42], real_T delta_x[203],
  real_T xstarqp[203], const int32_T indexLB[203], const int32_T indexUB[203],
  int32_T mLB, int32_T mUB);

#endif
