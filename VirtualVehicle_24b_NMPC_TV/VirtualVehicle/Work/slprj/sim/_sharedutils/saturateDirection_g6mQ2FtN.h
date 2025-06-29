#ifndef saturateDirection_g6mQ2FtN_h_
#define saturateDirection_g6mQ2FtN_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_g6mQ2FtN(const real_T xk[29], real_T delta_x[124],
  real_T xstarqp[124], const int32_T indexLB[124], const int32_T indexUB[124],
  int32_T mLB, int32_T mUB, const real_T ub[29]);

#endif
