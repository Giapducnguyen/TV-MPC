#include "rtwtypes.h"
#include "saturateDirection_ap1DhPXT.h"
#include <emmintrin.h>
#include "rt_nonfinite.h"

void saturateDirection_ap1DhPXT(const real_T xk[20], real_T delta_x[121], real_T
  xstarqp[121], const int32_T indexLB[121], const int32_T indexUB[121], int32_T
  mLB)
{
  real_T tmp[2];
  real_T violationResid;
  int32_T b;
  int32_T idx;
  int32_T indexLB_p;
  static real_T lb[20] = { -100.0, -100.0, -100.0, -100.0, -100.0, -100.0,
    -100.0, -100.0, -100.0, -100.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0 };

  static real_T ub[20] = { 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0,
    100.0, 100.0, 100.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  real_T violationResid_tmp;
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

  for (idx = 0; idx < 10; idx++) {
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
