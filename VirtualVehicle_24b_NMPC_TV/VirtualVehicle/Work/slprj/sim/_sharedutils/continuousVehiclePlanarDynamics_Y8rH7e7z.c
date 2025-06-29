#include "rtwtypes.h"
#include "continuousVehiclePlanarDynamics_Y8rH7e7z.h"
#include <emmintrin.h>
#include "mwmathutil.h"

void continuousVehiclePlanarDynamics_Y8rH7e7z(const real_T xk[4], const real_T
  uk[5], real_T dx[4])
{
  __m128d tmp_p;
  real_T tmp[2];
  real_T Fx_FL;
  real_T Fx_FR;
  real_T Fx_RL;
  real_T Fx_RR;
  real_T Fy_idx_0;
  real_T Fy_idx_1;
  real_T alpha_idx_2;
  real_T alpha_idx_3;
  real_T dx_tmp;
  real_T dx_tmp_e;
  real_T dx_tmp_i;
  real_T dx_tmp_p;
  tmp_p = _mm_set1_pd(0.327);
  _mm_storeu_pd(&tmp[0], _mm_div_pd(_mm_loadu_pd(&uk[0]), tmp_p));
  Fx_FL = tmp[0];
  Fx_FR = tmp[1];
  _mm_storeu_pd(&tmp[0], _mm_div_pd(_mm_loadu_pd(&uk[2]), tmp_p));
  Fx_RL = tmp[0];
  Fx_RR = tmp[1];
  alpha_idx_2 = xk[2] * 1.09 + xk[1];
  Fy_idx_0 = xk[2] * 1.575 / 2.0;
  Fy_idx_1 = xk[0] - Fy_idx_0;
  Fy_idx_0 += xk[0];
  _mm_storeu_pd(&tmp[0], _mm_add_pd(_mm_set_pd(-muDoubleScalarAtan2(alpha_idx_2,
    Fy_idx_0), -muDoubleScalarAtan2(alpha_idx_2, Fy_idx_1)), _mm_set1_pd(uk[4])));
  alpha_idx_3 = xk[1] - xk[2] * 1.7;
  alpha_idx_2 = -muDoubleScalarAtan2(alpha_idx_3, Fy_idx_1);
  alpha_idx_3 = -muDoubleScalarAtan2(alpha_idx_3, Fy_idx_0);
  Fy_idx_0 = muDoubleScalarSin(muDoubleScalarAtan(2.45 * tmp[0] - (2.45 * tmp[0]
    - muDoubleScalarAtan(2.45 * tmp[0])) * 3.0) * 1.67) * 5500.0;
  Fy_idx_1 = muDoubleScalarSin(muDoubleScalarAtan(2.45 * tmp[1] - (2.45 * tmp[1]
    - muDoubleScalarAtan(2.45 * tmp[1])) * 3.0) * 1.67) * 5500.0;
  alpha_idx_2 = muDoubleScalarSin(muDoubleScalarAtan(2.45 * alpha_idx_2 - (2.45 *
    alpha_idx_2 - muDoubleScalarAtan(2.45 * alpha_idx_2)) * 3.0) * 1.67) *
    5500.0;
  alpha_idx_3 = muDoubleScalarSin(muDoubleScalarAtan(2.45 * alpha_idx_3 - (2.45 *
    alpha_idx_3 - muDoubleScalarAtan(2.45 * alpha_idx_3)) * 3.0) * 1.67) *
    5500.0;
  dx_tmp = muDoubleScalarSin(uk[4]);
  dx_tmp_p = muDoubleScalarCos(uk[4]);
  dx_tmp_e = Fx_FL + Fx_FR;
  dx_tmp_i = Fy_idx_0 + Fy_idx_1;
  dx[0] = (((dx_tmp_e * dx_tmp_p - dx_tmp_i * dx_tmp) + Fx_RL) + Fx_RR) *
    0.00061614294516327791 + xk[1] * xk[2];
  dx_tmp_e = dx_tmp_e * dx_tmp + dx_tmp_i * dx_tmp_p;
  dx[1] = (((dx_tmp_e + alpha_idx_2) + alpha_idx_3) * 0.00061614294516327791 -
           xk[0] * xk[2]) + 0.0 * xk[3];
  dx[2] = (((((Fx_FR - Fx_FL) * dx_tmp_p + (Fy_idx_0 - Fy_idx_1) * dx_tmp) *
             1.575 / 2.0 + dx_tmp_e * 1.09) + (Fx_RR - Fx_RL) * 1.575 / 2.0) -
           (alpha_idx_2 + alpha_idx_3) * 1.7) * 0.000484027105517909;
  dx[3] = 0.0;
}
