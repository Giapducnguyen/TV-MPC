#include "rtwtypes.h"
#include "GP_gradxT_FrcElps_RR_CX6H9Fz7.h"
#include "mwmathutil.h"

void GP_gradxT_FrcElps_RR_CX6H9Fz7(const real_T in1[3], const real_T in3[3],
  real_T gradxT_FrcElps_RR[3])
{
  real_T t11;
  real_T t20;
  real_T t23;
  real_T t26;
  real_T t26_tmp;
  real_T t31;
  real_T t32;
  real_T t37;
  real_T t43;
  real_T t9;
  t9 = in1[2] * 0.7875 + in1[0];
  t26_tmp = in1[2] * 1.7 - in1[1];
  t11 = t9 * t9;
  t20 = muDoubleScalarAtan2(in1[2] * -1.7 + in1[1], (in1[1] * 0.0 + in1[2] *
    0.7875) + in1[0]);
  t23 = 8.0 * t20;
  t37 = ((in3[0] * 177.1338709677419 - in3[1] * 122.58788530465949) +
         3110.139193548388) * 0.899;
  t26 = 1.0 / (t26_tmp * t26_tmp + t11);
  t31 = -8.0 * t26 * t26_tmp;
  t32 = 8.0 * t9 * t26;
  t37 = (t37 + 166.0) * (t37 + 166.0);
  t20 = 1.0 / (t20 * t20 * 64.0 + 1.0);
  t23 += (t23 - muDoubleScalarAtan(t23)) * -1.2;
  t9 = (1.0 / t11 * t26_tmp * -0.7875 + 1.0 / t9 * 1.7) * (8.0 * t11 * t26);
  t43 = 1.2 * muDoubleScalarAtan(t23);
  t11 = muDoubleScalarCos(t43);
  t43 = muDoubleScalarSin(t43);
  t23 = 1.0 / (t23 * t23 + 1.0);
  t11 = 1.2 * t37 * t11 * t43 * t23;
  gradxT_FrcElps_RR[0] = ((8.0 * t26 * t26_tmp + t20 * t31) * 1.2 + t31) * t11 *
    -2.0;
  gradxT_FrcElps_RR[1] = (t32 - (t32 - t20 * t32) * 1.2) * t11 * 2.0;
  gradxT_FrcElps_RR[2] = (t9 - (t9 - t20 * t9) * 1.2) * t11 * -2.0;
}
