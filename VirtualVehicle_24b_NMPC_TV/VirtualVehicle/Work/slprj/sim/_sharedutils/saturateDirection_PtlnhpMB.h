#ifndef saturateDirection_PtlnhpMB_h_
#define saturateDirection_PtlnhpMB_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_PtlnhpMB(const real_T xk[68], real_T delta_x[449],
  real_T xstarqp[449], const int32_T indexLB[449], const int32_T indexUB[449],
  int32_T mLB, int32_T mUB);

#endif
