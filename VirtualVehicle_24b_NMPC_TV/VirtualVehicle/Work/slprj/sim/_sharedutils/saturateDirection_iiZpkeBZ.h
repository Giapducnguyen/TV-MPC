#ifndef saturateDirection_iiZpkeBZ_h_
#define saturateDirection_iiZpkeBZ_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_iiZpkeBZ(const real_T xk[48], real_T delta_x[309],
  real_T xstarqp[309], const int32_T indexLB[309], const int32_T indexUB[309],
  int32_T mLB, int32_T mUB);

#endif
