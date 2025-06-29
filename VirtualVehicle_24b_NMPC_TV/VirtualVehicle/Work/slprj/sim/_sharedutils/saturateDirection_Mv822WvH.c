#include "rtwtypes.h"
#include "saturateDirection_Mv822WvH.h"
#include <emmintrin.h>

void saturateDirection_Mv822WvH(const real_T xk[20], real_T delta_x[121], real_T
  xstarqp[121], const int32_T indexLB[121], const int32_T indexUB[121], int32_T
  mLB)
{
  real_T tmp[2];
  real_T violationResid;
  int32_T b;
  int32_T idx;
  int32_T indexLB_p;
  static const int8_T lb[20] = { -50, -50, -50, -50, -50, -50, -50, -50, -50,
    -50, -10, -2, -10, -2, -10, -2, -10, -2, -10, -2 };

  static const int8_T ub[20] = { 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 10, 2,
    10, 2, 10, 2, 10, 2, 10, 2 };

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

  for (idx = 0; idx < 20; idx++) {
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
