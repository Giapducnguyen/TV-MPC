#include "rtwtypes.h"
#include "GP_gradx_xdot_ymh0Dg3v.h"
#include "mwmathutil.h"
#include <emmintrin.h>

void GP_gradx_xdot_ymh0Dg3v(const real_T in1[3], real_T delta_Frnt, const real_T
  in3[3], real_T nablax_xdot[9])
{
  __m128d tmp_e;
  __m128d tmp_p;
  real_T tmp[2];
  real_T t100;
  real_T t102;
  real_T t104;
  real_T t107;
  real_T t120_tmp;
  real_T t123;
  real_T t126;
  real_T t13;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t175;
  real_T t18;
  real_T t19;
  real_T t196;
  real_T t199;
  real_T t2;
  real_T t20;
  real_T t204;
  real_T t21;
  real_T t22;
  real_T t23;
  real_T t25;
  real_T t28;
  real_T t3;
  real_T t42;
  real_T t44;
  real_T t48;
  real_T t53;
  real_T t5_re;
  real_T t6;
  real_T t61;
  real_T t65;
  real_T t66;
  real_T t69;
  real_T t7;
  real_T t70;
  real_T t74;
  real_T t81;
  real_T t9;
  real_T t93;
  real_T t97;
  t2 = muDoubleScalarCos(delta_Frnt);
  t3 = muDoubleScalarSin(delta_Frnt);
  _mm_storeu_pd(&tmp[0], _mm_mul_pd(_mm_loadu_pd(&in1[1]), _mm_set_pd(1.7, 0.0)));
  t5_re = tmp[0];
  t6 = tmp[1];
  t7 = in1[2] / 100.0;
  _mm_storeu_pd(&tmp[0], _mm_mul_pd(_mm_set_pd(in3[0], in1[2]), _mm_set_pd
    (177.1338709677419, 0.7875)));
  t9 = tmp[0];
  t22 = tmp[1];
  _mm_storeu_pd(&tmp[0], _mm_mul_pd(_mm_set1_pd(in3[1]), _mm_set_pd
    (122.58788530465949, 191.19211469534051)));
  t23 = tmp[0];
  t28 = tmp[1];
  t13 = t9 + in1[0];
  t15 = in1[2] * 1.09 + in1[1];
  t196 = t6 - in1[1];
  t16 = t196 * t196;
  t175 = t9 - in1[0];
  t19 = t175 * t175;
  _mm_storeu_pd(&tmp[0], _mm_add_pd(_mm_add_pd(_mm_mul_pd(_mm_set1_pd(in1[2]),
    _mm_set1_pd(0.7875)), _mm_set1_pd(t5_re)), _mm_set1_pd(in1[0])));
  t66 = (in1[2] * -0.7875 + t5_re) + in1[0];
  t17 = t13 * t13;
  t18 = 1.0 / t13;
  t21 = t15 * t15;
  t25 = 1.0 / t19;
  t5_re = (t5_re - in1[2] * 0.7875) + in1[0];
  t42 = muDoubleScalarAtan2(in1[2] * -1.7 + in1[1], tmp[0]);
  t123 = ((t22 + t28) + 3110.139193548388) * 0.8;
  t20 = 1.0 / t17;
  t44 = muDoubleScalarAtan2(in1[1] - in1[2] * 1.7, t5_re);
  t48 = 8.0 * t42;
  t5_re = 1.0 / (t16 + t19);
  t120_tmp = ((t23 - t22) + 4850.6758064516134) * 0.8;
  t28 = ((t22 - t28) + 3110.139193548388) * 0.8;
  t126 = -(((t22 + t23) - 4850.6758064516134) * 0.8);
  t53 = 8.0 * t44;
  t61 = 1.0 / (t16 + t17);
  t22 = delta_Frnt - muDoubleScalarAtan2(t15, tmp[1]);
  t65 = 1.0 / (t17 + t21);
  t66 = delta_Frnt - muDoubleScalarAtan2(t15, t66);
  t69 = 1.0 / (t19 + t21);
  tmp_p = _mm_set1_pd(t5_re);
  tmp_e = _mm_sub_pd(_mm_set_pd(t9, t6), _mm_set_pd(in1[0], in1[1]));
  _mm_storeu_pd(&tmp[0], _mm_mul_pd(_mm_mul_pd(_mm_set1_pd(-8.0), tmp_p), tmp_e));
  t21 = tmp[0];
  t16 = tmp[1];
  _mm_storeu_pd(&tmp[0], _mm_mul_pd(_mm_mul_pd(_mm_set1_pd(8.0), tmp_p), tmp_e));
  t6 = t196 * t25 * -0.7875 + 1.7 / t175;
  t23 = -8.0 * t19 * t5_re * t6;
  t5_re = 8.0 * t19 * t5_re * t6;
  t74 = 8.0 * t22;
  t81 = 8.0 * t66;
  t70 = -8.0 * t61 * t196;
  t93 = 8.0 * t13 * t61;
  t13 = 8.0 * t13 * t65;
  t97 = 8.0 * t61 * t196;
  t100 = 8.0 * t15 * t65;
  t102 = -8.0 * t69 * t175;
  t104 = 8.0 * t15 * t69;
  t107 = 8.0 * t69 * t175;
  t9 = (t15 * t25 * 0.7875 - 1.09 / t175) * (8.0 * t19 * t69);
  t42 = 1.0 / (t42 * t42 * 64.0 + 1.0);
  t48 += (t48 - muDoubleScalarAtan(t48)) * -1.2;
  t6 = (t196 * t20 * -0.7875 + t18 * 1.7) * (8.0 * t17 * t61);
  t19 = 1.0 / (t44 * t44 * 64.0 + 1.0);
  t44 = t42 * t70;
  t61 = (t53 - muDoubleScalarAtan(t53)) * -1.2 + t53;
  t15 = (t18 * 1.09 - t15 * t20 * 0.7875) * (8.0 * t17 * t65);
  t20 = 1.0 / (t22 * t22 * 64.0 + 1.0);
  t66 = 1.0 / (t66 * t66 * 64.0 + 1.0);
  t17 = t19 * t21;
  t18 = t19 * t16;
  t69 = (t74 - muDoubleScalarAtan(t74)) * -1.2 + t74;
  t175 = (t81 - muDoubleScalarAtan(t81)) * -1.2 + t81;
  t22 = t19 * t23;
  t81 = t66 * t102;
  t53 = muDoubleScalarCos(1.2 * muDoubleScalarAtan(t48));
  t65 = 1.0 / (t48 * t48 + 1.0);
  t74 = (t42 * -t93 + t93) * 1.2;
  t48 = muDoubleScalarCos(1.2 * muDoubleScalarAtan(t61));
  t61 = 1.0 / (t61 * t61 + 1.0);
  t42 = (t42 * -t6 + t6) * 1.2;
  t19 = muDoubleScalarCos(1.2 * muDoubleScalarAtan(t69));
  t25 = muDoubleScalarCos(1.2 * muDoubleScalarAtan(t175));
  t69 = 1.0 / (t69 * t69 + 1.0);
  t175 = 1.0 / (t175 * t175 + 1.0);
  t196 = (t20 * -t13 + t13) * 1.2;
  t199 = (t20 * -t100 + t100) * 1.2;
  t204 = (t66 * -t104 + t104) * 1.2;
  t20 = (t20 * -t15 + t15) * 1.2;
  t66 = (t66 * -t9 + t9) * 1.2;
  t19 = (t126 + 166.0) * 1.2 * t19 * t69;
  t126 = (t100 - t199) * t19;
  t104 -= t204;
  t69 = (t120_tmp + 166.0) * 1.2 * t25 * t175;
  t100 = t69 * t104 + t126;
  nablax_xdot[0] = t100 * t3 * -6.1614294516327787E-6 + 1.0;
  t100 *= t2;
  t28 = (t28 + 166.0) * 1.2 * t53 * t65;
  t44 = ((t97 + t44) * 1.2 + t70) * t28;
  t123 = (t123 + 166.0) * 1.2 * t48 * t61;
  t17 = ((tmp[0] + t17) * 1.2 + t21) * t123;
  nablax_xdot[1] = ((t100 / 162300.0 - t7) + t44 / 162300.0) + t17 / 162300.0;
  t25 = (t120_tmp + 166.0) * -1.2 * t25 * t175;
  nablax_xdot[2] = (((t25 * t104 + t126) * t3 * -3.811713455953533E-6 + t100 *
                     5.2758954501452077E-6) - t44 * 8.2284607938044531E-6) - t17
    * 8.2284607938044531E-6;
  t126 = (t13 - t196) * t19;
  t104 = (t107 + t81) * 1.2 + t102;
  t100 = t69 * t104 + t126;
  nablax_xdot[3] = t100 * t3 / 162300.0 + t7;
  t100 *= t2;
  t44 = (t93 - t74) * t28;
  t17 = ((tmp[1] + t18) * 1.2 + t16) * t123;
  nablax_xdot[4] = ((t100 * -6.1614294516327787E-6 - t44 / 162300.0) - t17 /
                    162300.0) + 1.0;
  nablax_xdot[5] = (((t25 * t104 + t126) * t3 * 3.811713455953533E-6 - t100 *
                     5.2758954501452077E-6) + t44 * 8.2284607938044531E-6) + t17
    * 8.2284607938044531E-6;
  t126 = (t15 - t20) * t19;
  t104 = t9 - t66;
  t100 = t69 * t104 + t126;
  nablax_xdot[6] = t100 * t3 / 162300.0 + in1[1] / 100.0;
  t100 *= t2;
  t44 = (t6 - t42) * t28;
  t17 = ((t5_re + t22) * 1.2 + t23) * t123;
  nablax_xdot[7] = ((in1[0] * -0.01 - t100 / 162300.0) + t44 / 162300.0) + t17 /
    162300.0;
  nablax_xdot[8] = ((((t25 * t104 + t126) * t3 * 3.811713455953533E-6 - t100 *
                      5.2758954501452077E-6) - t44 * 8.2284607938044531E-6) -
                    t17 * 8.2284607938044531E-6) + 1.0;
}
