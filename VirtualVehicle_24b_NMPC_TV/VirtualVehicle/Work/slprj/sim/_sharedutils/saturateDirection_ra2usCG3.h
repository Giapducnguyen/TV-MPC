#ifndef saturateDirection_ra2usCG3_h_
#define saturateDirection_ra2usCG3_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_ra2usCG3(const real_T xk[33], real_T delta_x[176],
  real_T xstarqp[176], const int32_T indexLB[176], const int32_T indexUB[176],
  int32_T mLB, int32_T mUB);

#endif
