#include "rtwtypes.h"
#include "saturateDirection_0VqkSfZI.h"
#include <emmintrin.h>

void saturateDirection_0VqkSfZI(const real_T xk[27], real_T delta_x[142], real_T
  xstarqp[142], const int32_T indexLB[142], const int32_T indexUB[142], int32_T
  mLB)
{
  real_T tmp[2];
  real_T violationResid;
  int32_T b;
  int32_T idx;
  int32_T indexLB_p;
  static const int16_T lb[27] = { -200, -200, -200, -200, -200, -200, -200, -200,
    -200, -200, -10, -2, -10, -2, -10, -2, -10, -2, -10, -2, -10, -2, 0, 0, 0, 0,
    0 };

  static const uint8_T ub[27] = { 200U, 200U, 200U, 200U, 200U, 200U, 200U, 200U,
    200U, 200U, 10U, 2U, 10U, 2U, 10U, 2U, 10U, 2U, 10U, 2U, 10U, 2U, 1U, 1U, 1U,
    1U, 1U };

  real_T violationResid_tmp;
  b = (uint8_T)mLB;
  for (idx = 0; idx < b; idx++) {
    indexLB_p = indexLB[idx];
    violationResid_tmp = delta_x[indexLB_p - 1];
    violationResid = (xk[indexLB_p - 1] + violationResid_tmp) - (real_T)
      lb[indexLB_p - 1];
    if (violationResid < 0.0) {
      _mm_storeu_pd(&tmp[0], _mm_sub_pd(_mm_set_pd(xstarqp[indexLB_p - 1],
        violationResid_tmp), _mm_set1_pd(violationResid)));
      delta_x[indexLB_p - 1] = tmp[0];
      xstarqp[indexLB_p - 1] = tmp[1];
    }
  }

  for (idx = 0; idx < 27; idx++) {
    b = indexUB[idx];
    violationResid = ((real_T)ub[b - 1] - xk[b - 1]) - delta_x[b - 1];
    if (violationResid < 0.0) {
      _mm_storeu_pd(&tmp[0], _mm_add_pd(_mm_set_pd(xstarqp[b - 1], delta_x[b - 1]),
        _mm_set1_pd(violationResid)));
      delta_x[b - 1] = tmp[0];
      xstarqp[b - 1] = tmp[1];
    }
  }
}
