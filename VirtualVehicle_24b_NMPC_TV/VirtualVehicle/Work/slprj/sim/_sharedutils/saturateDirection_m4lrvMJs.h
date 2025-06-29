#ifndef saturateDirection_m4lrvMJs_h_
#define saturateDirection_m4lrvMJs_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_m4lrvMJs(const real_T xk[28], real_T delta_x[165],
  real_T xstarqp[165], const int32_T indexLB[165], const int32_T indexUB[165],
  int32_T mLB, int32_T mUB);

#endif
