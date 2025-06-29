#ifndef saturateDirection_egvpgVHI_h_
#define saturateDirection_egvpgVHI_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_egvpgVHI(const real_T xk[27], real_T delta_x[122],
  real_T xstarqp[122], const int32_T indexLB[122], const int32_T indexUB[122],
  int32_T mLB);

#endif
