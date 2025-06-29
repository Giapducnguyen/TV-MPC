#include "rtwtypes.h"
#include "xgemv_8bwDkdf2.h"
#include "div_nde_s32_floor.h"

void xgemv_8bwDkdf2(int32_T m, const real_T A[1965], const real_T x[32226],
                    real_T y[246])
{
  real_T c;
  int32_T b;
  int32_T b_iy;
  int32_T ia;
  for (b_iy = 0; b_iy < 15; b_iy++) {
    y[b_iy] = -y[b_iy];
  }

  for (b_iy = 0; b_iy <= 1834; b_iy += 131) {
    c = 0.0;
    b = b_iy + m;
    for (ia = b_iy + 1; ia <= b; ia++) {
      c += x[(ia - b_iy) + 245] * A[ia - 1];
    }

    ia = div_nde_s32_floor(b_iy, 131);
    y[ia] += c;
  }
}
