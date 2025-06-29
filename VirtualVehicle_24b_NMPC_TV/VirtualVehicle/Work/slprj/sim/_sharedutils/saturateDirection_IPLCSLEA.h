#ifndef saturateDirection_IPLCSLEA_h_
#define saturateDirection_IPLCSLEA_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_IPLCSLEA(const real_T xk[48], real_T delta_x[301],
  real_T xstarqp[301], const int32_T indexLB[301], const int32_T indexUB[301],
  int32_T mLB, int32_T mUB);

#endif
