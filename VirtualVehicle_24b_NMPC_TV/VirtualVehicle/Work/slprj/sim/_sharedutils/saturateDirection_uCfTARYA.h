#ifndef saturateDirection_uCfTARYA_h_
#define saturateDirection_uCfTARYA_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_uCfTARYA(const real_T xk[22], real_T delta_x[143],
  real_T xstarqp[143], const int32_T indexLB[143], const int32_T indexUB[143],
  int32_T mLB);

#endif
