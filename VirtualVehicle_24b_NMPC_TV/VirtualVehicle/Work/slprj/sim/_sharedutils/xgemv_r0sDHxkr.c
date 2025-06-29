#include "rtwtypes.h"
#include "xgemv_r0sDHxkr.h"
#include <emmintrin.h>
#include "div_nde_s32_floor.h"

void xgemv_r0sDHxkr(int32_T m, const real_T A[7590], const real_T x[97980],
                    real_T y[426])
{
  __m128d tmp;
  real_T c;
  int32_T b;
  int32_T b_iy;
  int32_T ia;
  for (b_iy = 0; b_iy <= 30; b_iy += 2) {
    tmp = _mm_loadu_pd(&y[b_iy]);
    _mm_storeu_pd(&y[b_iy], _mm_mul_pd(tmp, _mm_set1_pd(-1.0)));
  }

  for (b_iy = 32; b_iy < 33; b_iy++) {
    y[b_iy] = -y[b_iy];
  }

  for (b_iy = 0; b_iy <= 7360; b_iy += 230) {
    c = 0.0;
    b = b_iy + m;
    for (ia = b_iy + 1; ia <= b; ia++) {
      c += x[(ia - b_iy) + 425] * A[ia - 1];
    }

    ia = div_nde_s32_floor(b_iy, 230);
    y[ia] += c;
  }
}
