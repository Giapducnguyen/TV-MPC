#ifndef saturateDirection_oum6aNTQ_h_
#define saturateDirection_oum6aNTQ_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_oum6aNTQ(const real_T xk[108], real_T delta_x[721],
  real_T xstarqp[721], const int32_T indexLB[721], const int32_T indexUB[721],
  int32_T mLB, int32_T mUB);

#endif
