#include "rtwtypes.h"
#include "continuousVehiclePlanarDynamics_10sCoX9z.h"
#include <emmintrin.h>
#include "mwmathutil.h"

void continuousVehiclePlanarDynamics_10sCoX9z(const real_T xk[4], const real_T
  uk[7], real_T dx[4])
{
  __m128d tmp_e;
  __m128d tmp_f;
  __m128d tmp_g;
  __m128d tmp_i;
  __m128d tmp_j;
  __m128d tmp_m;
  __m128d tmp_p;
  real_T tmp[2];
  real_T Fx_FL;
  real_T Fx_FR;
  real_T Fx_RL;
  real_T Fx_RR;
  real_T a_FL;
  real_T a_FR;
  real_T a_RL;
  real_T a_RR;
  real_T dx_tmp;
  real_T dx_tmp_p;
  tmp_p = _mm_set1_pd(0.327);
  _mm_storeu_pd(&tmp[0], _mm_div_pd(_mm_loadu_pd(&uk[0]), tmp_p));
  Fx_FL = tmp[0];
  Fx_FR = tmp[1];
  _mm_storeu_pd(&tmp[0], _mm_div_pd(_mm_loadu_pd(&uk[2]), tmp_p));
  Fx_RL = tmp[0];
  Fx_RR = tmp[1];
  a_RL = xk[2] * 1.09 + xk[1];
  a_FL = xk[2] * 1.575 / 2.0;
  a_FR = xk[0] - a_FL;
  a_FL += xk[0];
  _mm_storeu_pd(&tmp[0], _mm_add_pd(_mm_set_pd(-muDoubleScalarAtan2(a_RL, a_FL),
    -muDoubleScalarAtan2(a_RL, a_FR)), _mm_set1_pd(uk[4])));
  a_RR = xk[1] - xk[2] * 1.7;
  a_RL = -muDoubleScalarAtan2(a_RR, a_FR);
  a_RR = -muDoubleScalarAtan2(a_RR, a_FL);
  tmp_p = _mm_set1_pd(1623.0);
  tmp_e = _mm_set1_pd(0.627);
  tmp_i = _mm_div_pd(_mm_mul_pd(_mm_mul_pd(tmp_p, _mm_set1_pd(uk[5])), tmp_e),
                     _mm_set1_pd(2.79));
  tmp_p = _mm_mul_pd(_mm_mul_pd(tmp_p, _mm_set1_pd(uk[6])), tmp_e);
  tmp_e = _mm_set1_pd(4.3942499999999995);
  tmp_m = _mm_set_pd(1.0, -1.0);
  tmp_g = _mm_set1_pd(0.5);
  tmp_j = _mm_set1_pd(0.85);
  tmp_f = _mm_set1_pd(166.0);
  _mm_storeu_pd(&tmp[0], _mm_mul_pd(_mm_add_pd(_mm_mul_pd(_mm_mul_pd(_mm_add_pd
    (_mm_sub_pd(_mm_set1_pd(9701.351612903225), tmp_i), _mm_mul_pd(_mm_div_pd
    (_mm_mul_pd(tmp_p, _mm_set1_pd(1.7)), tmp_e), tmp_m)), tmp_g), tmp_j), tmp_f),
    _mm_set_pd(muDoubleScalarSin(muDoubleScalarAtan(8.0 * tmp[1] - (8.0 * tmp[1]
    - muDoubleScalarAtan(8.0 * tmp[1])) * 1.2) * 1.2), muDoubleScalarSin
               (muDoubleScalarAtan(8.0 * tmp[0] - (8.0 * tmp[0] -
    muDoubleScalarAtan(8.0 * tmp[0])) * 1.2) * 1.2))));
  a_FL = tmp[0];
  a_FR = tmp[1];
  _mm_storeu_pd(&tmp[0], _mm_mul_pd(_mm_add_pd(_mm_mul_pd(_mm_mul_pd(_mm_add_pd
    (_mm_add_pd(tmp_i, _mm_set1_pd(6220.2783870967751)), _mm_mul_pd(_mm_div_pd
    (_mm_mul_pd(tmp_p, _mm_set1_pd(1.09)), tmp_e), tmp_m)), tmp_g), tmp_j),
    tmp_f), _mm_set_pd(muDoubleScalarSin(muDoubleScalarAtan(8.0 * a_RR - (8.0 *
    a_RR - muDoubleScalarAtan(8.0 * a_RR)) * 1.2) * 1.2), muDoubleScalarSin
                       (muDoubleScalarAtan(8.0 * a_RL - (8.0 * a_RL -
    muDoubleScalarAtan(8.0 * a_RL)) * 1.2) * 1.2))));
  a_RL = muDoubleScalarSin(uk[4]);
  a_RR = muDoubleScalarCos(uk[4]);
  dx_tmp = Fx_FL + Fx_FR;
  dx_tmp_p = a_FL + a_FR;
  dx[0] = (((dx_tmp * a_RR - dx_tmp_p * a_RL) + Fx_RL) + Fx_RR) *
    0.00061614294516327791 + xk[1] * xk[2];
  dx_tmp = dx_tmp * a_RL + dx_tmp_p * a_RR;
  dx[1] = (((dx_tmp + tmp[0]) + tmp[1]) * 0.00061614294516327791 - xk[0] * xk[2])
    + 0.0 * xk[3];
  dx[2] = (((((Fx_FR - Fx_FL) * a_RR + (a_FL - a_FR) * a_RL) * 1.575 / 2.0 +
             dx_tmp * 1.09) + (Fx_RR - Fx_RL) * 1.575 / 2.0) - (tmp[0] + tmp[1])
           * 1.7) * 0.000484027105517909;
  dx[3] = -200.0 * xk[3];
}
