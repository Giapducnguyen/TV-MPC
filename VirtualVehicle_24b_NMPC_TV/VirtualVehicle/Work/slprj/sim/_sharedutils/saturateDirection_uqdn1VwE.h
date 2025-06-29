#ifndef saturateDirection_uqdn1VwE_h_
#define saturateDirection_uqdn1VwE_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_uqdn1VwE(const real_T xk[26], real_T delta_x[151],
  real_T xstarqp[151], const int32_T indexLB[151], const int32_T indexUB[151],
  int32_T mLB);

#endif
