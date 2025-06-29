#ifndef saturateDirection_druvn44k_h_
#define saturateDirection_druvn44k_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_druvn44k(const real_T xk[77], real_T delta_x[408],
  real_T xstarqp[408], const int32_T indexLB[408], const int32_T indexUB[408],
  int32_T mLB, int32_T mUB, const real_T ub[77]);

#endif
