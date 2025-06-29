#include "rtwtypes.h"
#include "saturateDirection_LOZJKxvT.h"
#include <emmintrin.h>

void saturateDirection_LOZJKxvT(const real_T xk[28], real_T delta_x[161], real_T
  xstarqp[161], const int32_T indexLB[161], const int32_T indexUB[161], int32_T
  mLB, int32_T mUB)
{
  real_T tmp[2];
  real_T violationResid;
  int32_T b;
  int32_T idx;
  int32_T indexLB_p;
  static const int16_T lb[28] = { -250, -250, -250, -250, -250, -250, -250, -250,
    -250, -250, -10, -2, -10, -2, -10, -2, -10, -2, -10, -2, -10, -2, -250, -250,
    -10, -2, 0, 0 };

  static const uint8_T ub[28] = { 250U, 250U, 250U, 250U, 250U, 250U, 250U, 250U,
    250U, 250U, 10U, 2U, 10U, 2U, 10U, 2U, 10U, 2U, 10U, 2U, 10U, 2U, 250U, 250U,
    10U, 2U, 10U, 2U };

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

  b = (uint8_T)mUB;
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
