#include "rtwtypes.h"
#include "xgemv_0biuWS81.h"
#include <emmintrin.h>
#include "div_nde_s32_floor.h"

void xgemv_0biuWS81(int32_T m, const real_T A[35280], const real_T x[560],
                    real_T y[1056])
{
  __m128d tmp;
  real_T c;
  int32_T b;
  int32_T b_iy;
  int32_T ia;
  for (b_iy = 0; b_iy <= 60; b_iy += 2) {
    tmp = _mm_loadu_pd(&y[b_iy]);
    _mm_storeu_pd(&y[b_iy], _mm_mul_pd(tmp, _mm_set1_pd(-1.0)));
  }

  for (b_iy = 62; b_iy < 63; b_iy++) {
    y[b_iy] = -y[b_iy];
  }

  for (b_iy = 0; b_iy <= 34720; b_iy += 560) {
    c = 0.0;
    b = b_iy + m;
    for (ia = b_iy + 1; ia <= b; ia++) {
      c += x[(ia - b_iy) - 1] * A[ia - 1];
    }

    ia = div_nde_s32_floor(b_iy, 560);
    y[ia] += c;
  }
}
