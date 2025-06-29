#include "rtwtypes.h"
#include "saturateDirection_HQswowt3.h"
#include <emmintrin.h>
#include "rt_nonfinite.h"

void saturateDirection_HQswowt3(const real_T xk[60], real_T delta_x[361], real_T
  xstarqp[361], const int32_T indexLB[361], const int32_T indexUB[361], int32_T
  mLB, int32_T mUB)
{
  real_T tmp[2];
  real_T violationResid;
  int32_T b;
  int32_T idx;
  int32_T indexLB_p;
  static real_T lb[60] = { -50.0, -50.0, -50.0, -50.0, -50.0, -50.0, -50.0,
    -50.0, -50.0, -50.0, -50.0, -50.0, -50.0, -50.0, -50.0, -50.0, -50.0, -50.0,
    -50.0, -50.0, -50.0, -50.0, -50.0, -50.0, -50.0, -50.0, -50.0, -50.0, -50.0,
    -50.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0 };

  static real_T ub[60] = { 50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 50.0,
    50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 50.0,
    50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

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
  ub[42U] = (rtInf);
  ub[43U] = (rtInf);
  ub[44U] = (rtInf);
  ub[45U] = (rtInf);
  ub[46U] = (rtInf);
  ub[47U] = (rtInf);
  ub[48U] = (rtInf);
  ub[49U] = (rtInf);
  ub[50U] = (rtInf);
  ub[51U] = (rtInf);
  ub[52U] = (rtInf);
  ub[53U] = (rtInf);
  ub[54U] = (rtInf);
  ub[55U] = (rtInf);
  ub[56U] = (rtInf);
  ub[57U] = (rtInf);
  ub[58U] = (rtInf);
  ub[59U] = (rtInf);
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
  lb[42U] = (rtMinusInf);
  lb[43U] = (rtMinusInf);
  lb[44U] = (rtMinusInf);
  lb[45U] = (rtMinusInf);
  lb[46U] = (rtMinusInf);
  lb[47U] = (rtMinusInf);
  lb[48U] = (rtMinusInf);
  lb[49U] = (rtMinusInf);
  lb[50U] = (rtMinusInf);
  lb[51U] = (rtMinusInf);
  lb[52U] = (rtMinusInf);
  lb[53U] = (rtMinusInf);
  lb[54U] = (rtMinusInf);
  lb[55U] = (rtMinusInf);
  lb[56U] = (rtMinusInf);
  lb[57U] = (rtMinusInf);
  lb[58U] = (rtMinusInf);
  lb[59U] = (rtMinusInf);
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
