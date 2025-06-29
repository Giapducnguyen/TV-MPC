#include "rtwtypes.h"
#include "diff_iYH8myiG.h"
#include <emmintrin.h>

void diff_iYH8myiG(const real_T x[12], real_T y[8])
{
  real_T tmp[2];
  real_T x_p;
  int32_T iy;
  int32_T s;
  iy = 0;
  for (s = 0; s < 4; s++) {
    x_p = x[s + 4];
    _mm_storeu_pd(&tmp[0], _mm_sub_pd(_mm_set_pd(x[s + 8], x_p), _mm_set_pd(x_p,
      x[s])));
    y[iy] = tmp[0];
    y[iy + 4] = tmp[1];
    iy++;
  }
}
