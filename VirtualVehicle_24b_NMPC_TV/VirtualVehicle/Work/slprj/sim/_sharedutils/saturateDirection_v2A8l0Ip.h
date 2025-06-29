#ifndef saturateDirection_v2A8l0Ip_h_
#define saturateDirection_v2A8l0Ip_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_v2A8l0Ip(const real_T xk[45], real_T delta_x[196],
  real_T xstarqp[196], const int32_T indexLB[196], const int32_T indexUB[196],
  int32_T mLB, int32_T mUB, const real_T ub[45]);

#endif
