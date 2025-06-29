#include "rtwtypes.h"
#include "xgemv_hPAnDRag.h"
#include "div_nde_s32_floor.h"

void xgemv_hPAnDRag(int32_T m, const real_T A[5913], const real_T x[89790],
                    real_T y[410])
{
  real_T c;
  int32_T b;
  int32_T b_iy;
  int32_T ia;
  for (b_iy = 0; b_iy < 27; b_iy++) {
    y[b_iy] = -y[b_iy];
  }

  for (b_iy = 0; b_iy <= 5694; b_iy += 219) {
    c = 0.0;
    b = b_iy + m;
    for (ia = b_iy + 1; ia <= b; ia++) {
      c += x[(ia - b_iy) - 1] * A[ia - 1];
    }

    ia = div_nde_s32_floor(b_iy, 219);
    y[ia] += c;
  }
}
