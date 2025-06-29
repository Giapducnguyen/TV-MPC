#include "rtwtypes.h"
#include "xgemv_hdOvueDM.h"
#include "div_nde_s32_floor.h"

void xgemv_hdOvueDM(int32_T m, const real_T A[2070], const real_T x[35880],
                    real_T y[260])
{
  real_T c;
  int32_T b;
  int32_T b_iy;
  int32_T ia;
  for (b_iy = 0; b_iy < 15; b_iy++) {
    y[b_iy] = -y[b_iy];
  }

  for (b_iy = 0; b_iy <= 1932; b_iy += 138) {
    c = 0.0;
    b = b_iy + m;
    for (ia = b_iy + 1; ia <= b; ia++) {
      c += x[(ia - b_iy) + 259] * A[ia - 1];
    }

    ia = div_nde_s32_floor(b_iy, 138);
    y[ia] += c;
  }
}
