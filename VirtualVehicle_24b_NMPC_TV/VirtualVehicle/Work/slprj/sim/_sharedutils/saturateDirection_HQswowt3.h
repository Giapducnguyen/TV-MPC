#ifndef saturateDirection_HQswowt3_h_
#define saturateDirection_HQswowt3_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_HQswowt3(const real_T xk[60], real_T delta_x[361],
  real_T xstarqp[361], const int32_T indexLB[361], const int32_T indexUB[361],
  int32_T mLB, int32_T mUB);

#endif
