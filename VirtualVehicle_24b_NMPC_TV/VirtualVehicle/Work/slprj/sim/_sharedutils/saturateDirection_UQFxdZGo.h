#ifndef saturateDirection_UQFxdZGo_h_
#define saturateDirection_UQFxdZGo_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_UQFxdZGo(const real_T xk[29], real_T delta_x[118],
  real_T xstarqp[118], const int32_T indexLB[118], const int32_T indexUB[118],
  int32_T mLB, int32_T mUB, const real_T ub[29]);

#endif
