#include "rtwtypes.h"
#include "saturateDirection_6s06dOfK.h"
#include <emmintrin.h>
#include "rt_nonfinite.h"

void saturateDirection_6s06dOfK(const real_T xk[42], real_T delta_x[283], real_T
  xstarqp[283], const int32_T indexLB[283], const int32_T indexUB[283], int32_T
  mLB, int32_T mUB)
{
  real_T tmp[2];
  real_T violationResid;
  int32_T b;
  int32_T idx;
  int32_T indexLB_p;
  static real_T lb[42] = { -100.0, -100.0, -100.0, -100.0, -100.0, -100.0,
    -100.0, -100.0, -100.0, -100.0, -100.0, -100.0, -100.0, -100.0, -100.0,
    -100.0, -100.0, -100.0, -100.0, -100.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  static real_T ub[42] = { 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0,
    100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0,
    100.0, 100.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  ub[20U] = (rtInf);
  ub[21U] = (rtInf);
  ub[22U] = (rtInf);
  ub[23U] = (rtInf);
  ub[24U] = (rtInf);
  ub[25U] = (rtInf);
  ub[26U] = (rtInf);
  ub[27U] = (rtInf);
  ub[28U] = (rtInf);
  ub[29U] = (rtInf);
  ub[30U] = (rtInf);
  ub[31U] = (rtInf);
  ub[32U] = (rtInf);
  ub[33U] = (rtInf);
  ub[34U] = (rtInf);
  ub[35U] = (rtInf);
  ub[36U] = (rtInf);
  ub[37U] = (rtInf);
  ub[38U] = (rtInf);
  ub[39U] = (rtInf);
  ub[40U] = (rtInf);
  ub[41U] = (rtInf);
  lb[20U] = (rtMinusInf);
  lb[21U] = (rtMinusInf);
  lb[22U] = (rtMinusInf);
  lb[23U] = (rtMinusInf);
  lb[24U] = (rtMinusInf);
  lb[25U] = (rtMinusInf);
  lb[26U] = (rtMinusInf);
  lb[27U] = (rtMinusInf);
  lb[28U] = (rtMinusInf);
  lb[29U] = (rtMinusInf);
  lb[30U] = (rtMinusInf);
  lb[31U] = (rtMinusInf);
  lb[32U] = (rtMinusInf);
  lb[33U] = (rtMinusInf);
  lb[34U] = (rtMinusInf);
  lb[35U] = (rtMinusInf);
  lb[36U] = (rtMinusInf);
  lb[37U] = (rtMinusInf);
  lb[38U] = (rtMinusInf);
  lb[39U] = (rtMinusInf);
  lb[40U] = (rtMinusInf);
  lb[41U] = (rtMinusInf);
  b = (uint16_T)mLB;
  for (idx = 0; idx < b; idx++) {
    indexLB_p = indexLB[idx];
    violationResid = (xk[indexLB_p - 1] + delta_x[indexLB_p - 1]) - lb[indexLB_p
      - 1];
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
    violationResid = (ub[indexLB_p - 1] - xk[indexLB_p - 1]) - delta_x[indexLB_p
      - 1];
    if (violationResid < 0.0) {
      _mm_storeu_pd(&tmp[0], _mm_add_pd(_mm_set_pd(xstarqp[indexLB_p - 1],
        delta_x[indexLB_p - 1]), _mm_set1_pd(violationResid)));
      delta_x[indexLB_p - 1] = tmp[0];
      xstarqp[indexLB_p - 1] = tmp[1];
    }
  }
}
