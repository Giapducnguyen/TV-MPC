#include "rtwtypes.h"
#include "xgemv_uKwcXOUF.h"
#include <emmintrin.h>
#include "div_nde_s32_floor.h"

void xgemv_uKwcXOUF(int32_T m, const real_T A[51686], const real_T x[601],
                    real_T y[1115])
{
  __m128d tmp;
  real_T c;
  int32_T b;
  int32_T b_iy;
  int32_T ia;
  for (b_iy = 0; b_iy <= 84; b_iy += 2) {
    tmp = _mm_loadu_pd(&y[b_iy]);
    _mm_storeu_pd(&y[b_iy], _mm_mul_pd(tmp, _mm_set1_pd(-1.0)));
  }

  for (b_iy = 0; b_iy <= 51085; b_iy += 601) {
    c = 0.0;
    b = b_iy + m;
    for (ia = b_iy + 1; ia <= b; ia++) {
      c += x[(ia - b_iy) - 1] * A[ia - 1];
    }

    ia = div_nde_s32_floor(b_iy, 601);
    y[ia] += c;
  }
}
