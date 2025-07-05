#include "rtwtypes.h"
#include "xgemv_r2fxdnuL.h"
#include "div_nde_s32_floor.h"

void xgemv_r2fxdnuL(int32_T m, int32_T n, const real_T A[676], int32_T ia0,
                    const real_T x[676], int32_T ix0, real_T y[26])
{
  real_T c;
  int32_T b;
  int32_T b_iy;
  int32_T d;
  int32_T e;
  if (n != 0) {
    b = (uint8_T)n;
    for (b_iy = 0; b_iy < b; b_iy++) {
      y[b_iy] = 0.0;
    }

    d = (n - 1) * 26 + ia0;
    for (b_iy = ia0; b_iy <= d; b_iy += 26) {
      c = 0.0;
      e = (b_iy + m) - 1;
      for (b = b_iy; b <= e; b++) {
        c += x[((ix0 + b) - b_iy) - 1] * A[b - 1];
      }

      b = div_nde_s32_floor(b_iy - ia0, 26);
      y[b] += c;
    }
  }
}
