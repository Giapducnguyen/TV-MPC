#include "rtwtypes.h"
#include "xgemv_N1TtfTGL.h"
#include "div_nde_s32_floor.h"

void xgemv_N1TtfTGL(int32_T m, const real_T A[9052], const real_T x[292], real_T
                    y[552])
{
  real_T c;
  int32_T b;
  int32_T b_iy;
  int32_T ia;
  for (b_iy = 0; b_iy < 31; b_iy++) {
    y[b_iy] = -y[b_iy];
  }

  for (b_iy = 0; b_iy <= 8760; b_iy += 292) {
    c = 0.0;
    b = b_iy + m;
    for (ia = b_iy + 1; ia <= b; ia++) {
      c += x[(ia - b_iy) - 1] * A[ia - 1];
    }

    ia = div_nde_s32_floor(b_iy, 292);
    y[ia] += c;
  }
}
