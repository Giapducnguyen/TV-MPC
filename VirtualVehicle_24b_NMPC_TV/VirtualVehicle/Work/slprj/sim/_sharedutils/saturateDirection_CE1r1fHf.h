#ifndef saturateDirection_CE1r1fHf_h_
#define saturateDirection_CE1r1fHf_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_CE1r1fHf(const real_T xk[68], real_T delta_x[445],
  real_T xstarqp[445], const int32_T indexLB[445], const int32_T indexUB[445],
  int32_T mLB, int32_T mUB);

#endif
