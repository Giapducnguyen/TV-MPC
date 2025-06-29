#ifndef saturateDirection_4FeIjTax_h_
#define saturateDirection_4FeIjTax_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void saturateDirection_4FeIjTax(const real_T xk[25], real_T delta_x[126],
  real_T xstarqp[126], const int32_T indexLB[126], const int32_T indexUB[126],
  int32_T mLB, int32_T mUB, const real_T ub[25]);

#endif
