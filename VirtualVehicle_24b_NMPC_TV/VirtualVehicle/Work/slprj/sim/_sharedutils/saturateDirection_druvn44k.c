#include "rtwtypes.h"
#include "saturateDirection_druvn44k.h"
#include <emmintrin.h>
#include "rt_nonfinite.h"

void saturateDirection_druvn44k(const real_T xk[77], real_T delta_x[408], real_T
  xstarqp[408], const int32_T indexLB[408], const int32_T indexUB[408], int32_T
  mLB, int32_T mUB, const real_T ub[77])
{
  real_T tmp[2];
  real_T violationResid;
  int32_T b;
  int32_T idx;
  int32_T indexLB_p;
  static real_T lb[77] = { 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0,
    -50.0, 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0,
    -50.0, 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0,
    -50.0, 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0,
    -50.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0 };

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
  lb[60U] = (rtMinusInf);
  lb[61U] = (rtMinusInf);
  lb[62U] = (rtMinusInf);
  lb[63U] = (rtMinusInf);
  lb[64U] = (rtMinusInf);
  lb[65U] = (rtMinusInf);
  lb[66U] = (rtMinusInf);
  lb[67U] = (rtMinusInf);
  lb[68U] = (rtMinusInf);
  lb[69U] = (rtMinusInf);
  lb[70U] = (rtMinusInf);
  lb[71U] = (rtMinusInf);
  lb[72U] = (rtMinusInf);
  lb[73U] = (rtMinusInf);
  lb[74U] = (rtMinusInf);
  lb[75U] = (rtMinusInf);
  lb[76U] = (rtMinusInf);
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
