#ifndef saturateDirection_6s06dOfK_h_
#define saturateDirection_6s06dOfK_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_6s06dOfK(const real_T xk[42], real_T delta_x[283],
  real_T xstarqp[283], const int32_T indexLB[283], const int32_T indexUB[283],
  int32_T mLB, int32_T mUB);

#endif
