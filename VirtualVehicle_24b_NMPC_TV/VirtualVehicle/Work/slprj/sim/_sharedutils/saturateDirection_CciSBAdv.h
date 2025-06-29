#ifndef saturateDirection_CciSBAdv_h_
#define saturateDirection_CciSBAdv_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_CciSBAdv(const real_T xk[28], real_T delta_x[161],
  real_T xstarqp[161], const int32_T indexLB[161], const int32_T indexUB[161],
  int32_T mLB, int32_T mUB);

#endif
