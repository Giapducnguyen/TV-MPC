#include "rtwtypes.h"
#include "xgemv_VxJHCr1P.h"
#include <emmintrin.h>
#include "div_nde_s32_floor.h"

void xgemv_VxJHCr1P(int32_T m, const real_T A[46644], const real_T x[299],
                    real_T y[170430])
{
  __m128d tmp;
  real_T c;
  int32_T b;
  int32_T b_iy;
  int32_T ia;
  for (b_iy = 0; b_iy <= 154; b_iy += 2) {
    tmp = _mm_loadu_pd(&y[b_iy]);
    _mm_storeu_pd(&y[b_iy], _mm_mul_pd(tmp, _mm_set1_pd(-1.0)));
  }

  for (b_iy = 0; b_iy <= 46345; b_iy += 299) {
    c = 0.0;
    b = b_iy + m;
    for (ia = b_iy + 1; ia <= b; ia++) {
      c += x[(ia - b_iy) - 1] * A[ia - 1];
    }

    ia = div_nde_s32_floor(b_iy, 299);
    y[ia] += c;
  }
}
