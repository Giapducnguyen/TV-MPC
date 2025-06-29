#include "rtwtypes.h"
#include "xgemv_YHqoHWuE.h"
#include "div_nde_s32_floor.h"

void xgemv_YHqoHWuE(int32_T m, const real_T A[3838], const real_T x[77568],
                    real_T y[384])
{
  real_T c;
  int32_T b;
  int32_T b_iy;
  int32_T ia;
  for (b_iy = 0; b_iy < 19; b_iy++) {
    y[b_iy] = -y[b_iy];
  }

  for (b_iy = 0; b_iy <= 3636; b_iy += 202) {
    c = 0.0;
    b = b_iy + m;
    for (ia = b_iy + 1; ia <= b; ia++) {
      c += x[(ia - b_iy) + 383] * A[ia - 1];
    }

    ia = div_nde_s32_floor(b_iy, 202);
    y[ia] += c;
  }
}
