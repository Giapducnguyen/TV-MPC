#ifndef saturateDirection_4QB7n1em_h_
#define saturateDirection_4QB7n1em_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_4QB7n1em(const real_T xk[48], real_T delta_x[305],
  real_T xstarqp[305], const int32_T indexLB[305], const int32_T indexUB[305],
  int32_T mLB, int32_T mUB);

#endif
