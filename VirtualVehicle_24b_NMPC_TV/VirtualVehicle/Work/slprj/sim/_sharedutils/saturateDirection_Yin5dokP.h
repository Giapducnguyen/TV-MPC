#ifndef saturateDirection_Yin5dokP_h_
#define saturateDirection_Yin5dokP_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_Yin5dokP(const real_T xk[27], real_T delta_x[162],
  real_T xstarqp[162], const int32_T indexLB[162], const int32_T indexUB[162],
  int32_T mLB, int32_T mUB);

#endif
