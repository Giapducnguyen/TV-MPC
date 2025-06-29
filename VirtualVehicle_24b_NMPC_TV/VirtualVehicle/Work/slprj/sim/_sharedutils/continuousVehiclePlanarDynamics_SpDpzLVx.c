#include "rtwtypes.h"
#include "continuousVehiclePlanarDynamics_SpDpzLVx.h"
#include <emmintrin.h>
#include "mwmathutil.h"

void continuousVehiclePlanarDynamics_SpDpzLVx(const real_T xk[3], const real_T
  uk[7], real_T dx[3])
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
  tmp_p = _mm_set1_pd(0.327);
  _mm_storeu_pd(&tmp[0], _mm_div_pd(_mm_loadu_pd(&uk[0]), tmp_p));
  Fx_FL = tmp[0];
  Fx_FR = tmp[1];
  _mm_storeu_pd(&tmp[0], _mm_div_pd(_mm_loadu_pd(&uk[2]), tmp_p));
  Fx_RL = tmp[0];
  Fx_RR = tmp[1];
  a_FR = xk[2] * 1.09 + xk[1];
  a_FL = xk[2] * 1.575 / 2.0;
  a_RL = xk[0] - a_FL;
  a_FL += xk[0];
  _mm_storeu_pd(&tmp[0], _mm_add_pd(_mm_set_pd(-muDoubleScalarAtan2(a_FR, a_FL),
    -muDoubleScalarAtan2(a_FR, a_RL)), _mm_set1_pd(uk[4])));
  a_FR = xk[1] - xk[2] * 1.7;
  a_RL = -muDoubleScalarAtan2(a_FR, a_RL);
  a_RR = -muDoubleScalarAtan2(a_FR, a_FL);
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
  _mm_storeu_pd(&dx[0], _mm_add_pd(_mm_mul_pd(_mm_add_pd(_mm_add_pd(_mm_add_pd
    (_mm_mul_pd(_mm_add_pd(_mm_set1_pd(Fx_FL), _mm_set1_pd(Fx_FR)), _mm_set_pd
                (a_RL, a_RR)), _mm_mul_pd(_mm_mul_pd(_mm_add_pd(_mm_set1_pd(a_FL),
    _mm_set1_pd(a_FR)), _mm_set_pd(a_RR, a_RL)), tmp_m)), _mm_set_pd(tmp[0],
    Fx_RL)), _mm_set_pd(tmp[1], Fx_RR)), _mm_set1_pd(0.00061614294516327791)),
    _mm_mul_pd(_mm_mul_pd(_mm_set_pd(xk[0], xk[1]), _mm_set1_pd(xk[2])),
               _mm_set_pd(-1.0, 1.0))));
  dx[2] = (((((Fx_FR - Fx_FL) * a_RR + (a_FL - a_FR) * a_RL) * 1.575 / 2.0 +
             ((Fx_FL + Fx_FR) * a_RL + (a_FL + a_FR) * a_RR) * 1.09) + (Fx_RR -
             Fx_RL) * 1.575 / 2.0) - (tmp[0] + tmp[1]) * 1.7) *
    0.000484027105517909;
}
