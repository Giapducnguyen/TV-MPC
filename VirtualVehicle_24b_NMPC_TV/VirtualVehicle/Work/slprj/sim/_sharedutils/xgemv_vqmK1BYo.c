#include "rtwtypes.h"
#include "xgemv_vqmK1BYo.h"
#include <emmintrin.h>
#include "div_nde_s32_floor.h"

void xgemv_vqmK1BYo(int32_T m, const real_T A[6720], const real_T x[45760],
                    real_T y[286])
{
  __m128d tmp;
  real_T c;
  int32_T b;
  int32_T b_iy;
  int32_T ia;
  for (b_iy = 0; b_iy <= 40; b_iy += 2) {
    tmp = _mm_loadu_pd(&y[b_iy]);
    _mm_storeu_pd(&y[b_iy], _mm_mul_pd(tmp, _mm_set1_pd(-1.0)));
  }

  for (b_iy = 0; b_iy <= 6560; b_iy += 160) {
    c = 0.0;
    b = b_iy + m;
    for (ia = b_iy + 1; ia <= b; ia++) {
      c += x[(ia - b_iy) + 285] * A[ia - 1];
    }

    ia = div_nde_s32_floor(b_iy, 160);
    y[ia] += c;
  }
}
