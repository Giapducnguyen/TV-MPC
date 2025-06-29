#ifndef saturateDirection_Mv822WvH_h_
#define saturateDirection_Mv822WvH_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_Mv822WvH(const real_T xk[20], real_T delta_x[121],
  real_T xstarqp[121], const int32_T indexLB[121], const int32_T indexUB[121],
  int32_T mLB);

#endif
