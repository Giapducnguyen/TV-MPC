#include "rtwtypes.h"
#include "saturateDirection_HHlhvsLu.h"
#include <emmintrin.h>
#include "rt_nonfinite.h"

void saturateDirection_HHlhvsLu(const real_T xk[50], real_T delta_x[251], real_T
  xstarqp[251], const int32_T indexLB[251], const int32_T indexUB[251], int32_T
  mLB, int32_T mUB, const real_T ub[50])
{
  real_T tmp[2];
  real_T violationResid;
  int32_T b;
  int32_T idx;
  int32_T indexLB_p;
  static real_T lb[50] = { 0.0, -100.0, -100.0, 0.0, -100.0, -100.0, 0.0, -100.0,
    -100.0, 0.0, -100.0, -100.0, 0.0, -100.0, -100.0, 0.0, -100.0, -100.0, 0.0,
    -100.0, -100.0, 0.0, -100.0, -100.0, 0.0, -100.0, -100.0, 0.0, -100.0,
    -100.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

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

  b = (uint8_T)mUB;
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
