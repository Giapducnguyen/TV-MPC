#ifndef saturateDirection_viXHVfr9_h_
#define saturateDirection_viXHVfr9_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_viXHVfr9(const real_T xk[128], real_T delta_x[861],
  real_T xstarqp[861], const int32_T indexLB[861], const int32_T indexUB[861],
  int32_T mLB, int32_T mUB);

#endif
