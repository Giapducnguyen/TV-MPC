#ifndef saturateDirection_eDPDZp5a_h_
#define saturateDirection_eDPDZp5a_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_eDPDZp5a(const real_T xk[68], real_T delta_x[445],
  real_T xstarqp[445], const int32_T indexLB[445], const int32_T indexUB[445],
  int32_T mLB, int32_T mUB);

#endif
