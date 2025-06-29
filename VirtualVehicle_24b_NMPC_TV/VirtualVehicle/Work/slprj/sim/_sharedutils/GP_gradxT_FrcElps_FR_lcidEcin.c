#include "rtwtypes.h"
#include "GP_gradxT_FrcElps_FR_lcidEcin.h"
#include <emmintrin.h>
#include "mwmathutil.h"

void GP_gradxT_FrcElps_FR_lcidEcin(const real_T in1[3], real_T delta_Frnt, const
  real_T in3[3], real_T gradxT_FrcElps_FR[3])
{
  real_T tmp[2];
  real_T t21;
  real_T t22;
  real_T t25;
  real_T t32;
  real_T t33;
  real_T t37;
  real_T t8;
  real_T t9;
  _mm_storeu_pd(&tmp[0], _mm_add_pd(_mm_mul_pd(_mm_set1_pd(in1[2]), _mm_set_pd
    (1.09, 0.7875)), _mm_loadu_pd(&in1[0])));
  t9 = tmp[0] * tmp[0];
  t37 = -(((in3[0] * 177.1338709677419 + in3[1] * 191.19211469534051) -
           4850.6758064516134) * 0.7);
  t21 = delta_Frnt - muDoubleScalarAtan2(in1[2] * 1.09 + in1[1], (in1[1] * 0.0 +
    in1[2] * 0.7875) + in1[0]);
  t22 = 1.0 / (tmp[1] * tmp[1] + t9);
  t25 = 8.0 * t21;
  t32 = 8.0 * tmp[0] * t22;
  t33 = 8.0 * tmp[1] * t22;
  t37 = (t37 + 166.0) * (t37 + 166.0);
  t22 = (1.0 / tmp[0] * 1.09 - 1.0 / t9 * tmp[1] * 0.7875) * (8.0 * t9 * t22);
  t21 = 1.0 / (t21 * t21 * 64.0 + 1.0);
  t8 = (t25 - muDoubleScalarAtan(t25)) * -1.2 + t25;
  t9 = 1.2 * muDoubleScalarAtan(t8);
  t25 = muDoubleScalarCos(t9);
  t9 = muDoubleScalarSin(t9);
  t8 = 1.0 / (t8 * t8 + 1.0);
  t9 = 1.2 * t37 * t25 * t9 * t8;
  gradxT_FrcElps_FR[0] = (t33 - (t33 - t21 * t33) * 1.2) * t9 * 2.0;
  gradxT_FrcElps_FR[1] = (t32 - (t32 - t21 * t32) * 1.2) * t9 * -2.0;
  gradxT_FrcElps_FR[2] = (t22 - (t22 - t21 * t22) * 1.2) * t9 * -2.0;
}
