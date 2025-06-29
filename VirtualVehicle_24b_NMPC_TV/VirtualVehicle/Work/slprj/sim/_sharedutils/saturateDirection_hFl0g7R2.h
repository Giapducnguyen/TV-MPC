#ifndef saturateDirection_hFl0g7R2_h_
#define saturateDirection_hFl0g7R2_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_hFl0g7R2(const real_T xk[27], real_T delta_x[142],
  real_T xstarqp[142], const int32_T indexLB[142], const int32_T indexUB[142],
  int32_T mLB);

#endif
