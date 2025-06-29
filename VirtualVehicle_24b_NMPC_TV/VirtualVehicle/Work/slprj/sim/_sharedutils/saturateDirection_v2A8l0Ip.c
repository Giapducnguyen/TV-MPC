#include "rtwtypes.h"
#include "saturateDirection_v2A8l0Ip.h"
#include <emmintrin.h>
#include "rt_nonfinite.h"

void saturateDirection_v2A8l0Ip(const real_T xk[45], real_T delta_x[196], real_T
  xstarqp[196], const int32_T indexLB[196], const int32_T indexUB[196], int32_T
  mLB, int32_T mUB, const real_T ub[45])
{
  real_T tmp[2];
  real_T violationResid;
  int32_T b;
  int32_T idx;
  int32_T indexLB_p;
  static real_T lb[45] = { 0.0, -100.0, -100.0, 0.0, -100.0, -100.0, 0.0, -100.0,
    -100.0, 0.0, -100.0, -100.0, 0.0, -100.0, -100.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  lb[15U] = (rtMinusInf);
  lb[16U] = (rtMinusInf);
  lb[17U] = (rtMinusInf);
  lb[18U] = (rtMinusInf);
  lb[19U] = (rtMinusInf);
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
  lb[42U] = (rtMinusInf);
  lb[43U] = (rtMinusInf);
  lb[44U] = (rtMinusInf);
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
