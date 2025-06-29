#ifndef saturateDirection_58jtKwbq_h_
#define saturateDirection_58jtKwbq_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_58jtKwbq(const real_T xk[25], real_T delta_x[136],
  real_T xstarqp[136], const int32_T indexLB[136], const int32_T indexUB[136],
  int32_T mLB, int32_T mUB, const real_T ub[25]);

#endif
