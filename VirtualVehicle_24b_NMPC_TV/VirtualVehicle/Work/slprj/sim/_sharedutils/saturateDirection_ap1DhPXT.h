#ifndef saturateDirection_ap1DhPXT_h_
#define saturateDirection_ap1DhPXT_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_ap1DhPXT(const real_T xk[20], real_T delta_x[121],
  real_T xstarqp[121], const int32_T indexLB[121], const int32_T indexUB[121],
  int32_T mLB);

#endif
