#ifndef saturateDirection_HHlhvsLu_h_
#define saturateDirection_HHlhvsLu_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_HHlhvsLu(const real_T xk[50], real_T delta_x[251],
  real_T xstarqp[251], const int32_T indexLB[251], const int32_T indexUB[251],
  int32_T mLB, int32_T mUB, const real_T ub[50]);

#endif
