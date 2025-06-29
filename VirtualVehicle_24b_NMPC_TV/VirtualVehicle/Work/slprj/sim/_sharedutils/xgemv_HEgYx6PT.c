#include "rtwtypes.h"
#include "xgemv_HEgYx6PT.h"
#include "div_nde_s32_floor.h"

void xgemv_HEgYx6PT(int32_T m, const real_T A[7398], const real_T x[274], real_T
                    y[520])
{
  real_T c;
  int32_T b;
  int32_T b_iy;
  int32_T ia;
  for (b_iy = 0; b_iy < 27; b_iy++) {
    y[b_iy] = -y[b_iy];
  }

  for (b_iy = 0; b_iy <= 7124; b_iy += 274) {
    c = 0.0;
    b = b_iy + m;
    for (ia = b_iy + 1; ia <= b; ia++) {
      c += x[(ia - b_iy) - 1] * A[ia - 1];
    }

    ia = div_nde_s32_floor(b_iy, 274);
    y[ia] += c;
  }
}
