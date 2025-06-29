#include "rtwtypes.h"
#include "saturateDirection_xpZ8ju2f.h"
#include <emmintrin.h>
#include "rt_nonfinite.h"

void saturateDirection_xpZ8ju2f(const real_T xk[28], real_T delta_x[129], real_T
  xstarqp[129], const int32_T indexLB[129], const int32_T indexUB[129], int32_T
  mLB)
{
  real_T tmp[2];
  real_T violationResid;
  int32_T b;
  int32_T idx;
  int32_T indexLB_p;
  static real_T lb[28] = { -50.0, -50.0, -50.0, -50.0, -50.0, -50.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0 };

  static real_T ub[28] = { 50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0 };

  real_T violationResid_tmp;
  ub[6U] = (rtInf);
  ub[7U] = (rtInf);
  ub[8U] = (rtInf);
  ub[9U] = (rtInf);
  ub[10U] = (rtInf);
  ub[11U] = (rtInf);
  ub[12U] = (rtInf);
  ub[13U] = (rtInf);
  ub[14U] = (rtInf);
  ub[15U] = (rtInf);
  ub[16U] = (rtInf);
  ub[17U] = (rtInf);
  ub[18U] = (rtInf);
  ub[19U] = (rtInf);
  ub[20U] = (rtInf);
  ub[21U] = (rtInf);
  ub[22U] = (rtInf);
  ub[23U] = (rtInf);
  ub[24U] = (rtInf);
  ub[25U] = (rtInf);
  ub[26U] = (rtInf);
  ub[27U] = (rtInf);
  lb[6U] = (rtMinusInf);
  lb[7U] = (rtMinusInf);
  lb[8U] = (rtMinusInf);
  lb[9U] = (rtMinusInf);
  lb[10U] = (rtMinusInf);
  lb[11U] = (rtMinusInf);
  lb[12U] = (rtMinusInf);
  lb[13U] = (rtMinusInf);
  lb[14U] = (rtMinusInf);
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
  b = (uint8_T)mLB;
  for (idx = 0; idx < b; idx++) {
    indexLB_p = indexLB[idx];
    violationResid_tmp = delta_x[indexLB_p - 1];
    violationResid = (xk[indexLB_p - 1] + violationResid_tmp) - lb[indexLB_p - 1];
    if (violationResid < 0.0) {
      _mm_storeu_pd(&tmp[0], _mm_sub_pd(_mm_set_pd(xstarqp[indexLB_p - 1],
        violationResid_tmp), _mm_set1_pd(violationResid)));
      delta_x[indexLB_p - 1] = tmp[0];
      xstarqp[indexLB_p - 1] = tmp[1];
    }
  }

  for (idx = 0; idx < 6; idx++) {
    b = indexUB[idx];
    violationResid = (ub[b - 1] - xk[b - 1]) - delta_x[b - 1];
    if (violationResid < 0.0) {
      _mm_storeu_pd(&tmp[0], _mm_add_pd(_mm_set_pd(xstarqp[b - 1], delta_x[b - 1]),
        _mm_set1_pd(violationResid)));
      delta_x[b - 1] = tmp[0];
      xstarqp[b - 1] = tmp[1];
    }
  }
}
