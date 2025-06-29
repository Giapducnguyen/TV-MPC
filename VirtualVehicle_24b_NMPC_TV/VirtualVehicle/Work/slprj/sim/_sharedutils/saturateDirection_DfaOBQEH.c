#include "rtwtypes.h"
#include "saturateDirection_DfaOBQEH.h"
#include <emmintrin.h>

void saturateDirection_DfaOBQEH(const real_T xk[68], real_T delta_x[445], real_T
  xstarqp[445], const int32_T indexLB[445], const int32_T indexUB[445], int32_T
  mLB, int32_T mUB)
{
  real_T tmp[2];
  real_T violationResid;
  int32_T b;
  int32_T idx;
  int32_T indexLB_p;
  static const int16_T lb[68] = { -250, -250, -250, -250, -250, -250, -250, -250,
    -250, -250, -250, -250, -250, -250, -250, -250, -250, -250, -250, -250, -250,
    -250, -250, -250, -250, -250, -250, -250, -250, -250, -10, -2, -10, -2, -10,
    -2, -10, -2, -10, -2, -10, -2, -10, -2, -10, -2, -10, -2, -10, -2, -10, -2,
    -10, -2, -10, -2, -10, -2, -10, -2, -10, -2, -250, -250, -10, -2, 0, 0 };

  static const uint8_T ub[68] = { 250U, 250U, 250U, 250U, 250U, 250U, 250U, 250U,
    250U, 250U, 250U, 250U, 250U, 250U, 250U, 250U, 250U, 250U, 250U, 250U, 250U,
    250U, 250U, 250U, 250U, 250U, 250U, 250U, 250U, 250U, 10U, 2U, 10U, 2U, 10U,
    2U, 10U, 2U, 10U, 2U, 10U, 2U, 10U, 2U, 10U, 2U, 10U, 2U, 10U, 2U, 10U, 2U,
    10U, 2U, 10U, 2U, 10U, 2U, 10U, 2U, 10U, 2U, 250U, 250U, 10U, 2U, 10U, 2U };

  b = (uint16_T)mLB;
  for (idx = 0; idx < b; idx++) {
    indexLB_p = indexLB[idx];
    violationResid = (xk[indexLB_p - 1] + delta_x[indexLB_p - 1]) - (real_T)
      lb[indexLB_p - 1];
    if (violationResid < 0.0) {
      _mm_storeu_pd(&tmp[0], _mm_sub_pd(_mm_set_pd(xstarqp[indexLB_p - 1],
        delta_x[indexLB_p - 1]), _mm_set1_pd(violationResid)));
      delta_x[indexLB_p - 1] = tmp[0];
      xstarqp[indexLB_p - 1] = tmp[1];
    }
  }

  b = (uint16_T)mUB;
  for (idx = 0; idx < b; idx++) {
    indexLB_p = indexUB[idx];
    violationResid = ((real_T)ub[indexLB_p - 1] - xk[indexLB_p - 1]) -
      delta_x[indexLB_p - 1];
    if (violationResid < 0.0) {
      _mm_storeu_pd(&tmp[0], _mm_add_pd(_mm_set_pd(xstarqp[indexLB_p - 1],
        delta_x[indexLB_p - 1]), _mm_set1_pd(violationResid)));
      delta_x[indexLB_p - 1] = tmp[0];
      xstarqp[indexLB_p - 1] = tmp[1];
    }
  }
}
