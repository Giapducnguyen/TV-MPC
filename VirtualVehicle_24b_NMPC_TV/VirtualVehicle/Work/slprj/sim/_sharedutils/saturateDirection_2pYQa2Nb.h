#ifndef saturateDirection_2pYQa2Nb_h_
#define saturateDirection_2pYQa2Nb_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_2pYQa2Nb(const real_T xk[30], real_T delta_x[143],
  real_T xstarqp[143], const int32_T indexLB[143], const int32_T indexUB[143],
  int32_T mLB, int32_T mUB, const real_T ub[30]);

#endif
