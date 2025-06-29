#include "rtwtypes.h"
#include "xgemv_7S0UMm0F.h"
#include <emmintrin.h>
#include "div_nde_s32_floor.h"

void xgemv_7S0UMm0F(int32_T m, const real_T A[27104], const real_T x[110352],
                    real_T y[456])
{
  __m128d tmp;
  real_T c;
  int32_T b;
  int32_T b_iy;
  int32_T ia;
  for (b_iy = 0; b_iy <= 110; b_iy += 2) {
    tmp = _mm_loadu_pd(&y[b_iy]);
    _mm_storeu_pd(&y[b_iy], _mm_mul_pd(tmp, _mm_set1_pd(-1.0)));
  }

  for (b_iy = 0; b_iy <= 26862; b_iy += 242) {
    c = 0.0;
    b = b_iy + m;
    for (ia = b_iy + 1; ia <= b; ia++) {
      c += x[(ia - b_iy) + 455] * A[ia - 1];
    }

    ia = div_nde_s32_floor(b_iy, 242);
    y[ia] += c;
  }
}
