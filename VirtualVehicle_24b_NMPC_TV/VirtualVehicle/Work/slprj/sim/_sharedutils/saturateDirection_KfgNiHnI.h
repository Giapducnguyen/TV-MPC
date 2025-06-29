#ifndef saturateDirection_KfgNiHnI_h_
#define saturateDirection_KfgNiHnI_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_KfgNiHnI(const real_T xk[26], real_T delta_x[121],
  real_T xstarqp[121], const int32_T indexLB[121], const int32_T indexUB[121],
  int32_T mLB);

#endif
