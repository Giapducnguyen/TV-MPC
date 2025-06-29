#ifndef saturateDirection_CRdYKVxy_h_
#define saturateDirection_CRdYKVxy_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_CRdYKVxy(const real_T xk[45], real_T delta_x[186],
  real_T xstarqp[186], const int32_T indexLB[186], const int32_T indexUB[186],
  int32_T mLB, int32_T mUB, const real_T ub[45]);

#endif
