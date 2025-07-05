#include "rtwtypes.h"
#include "xgemv_Lab6OedU.h"
#include "div_nde_s32_floor.h"

void xgemv_Lab6OedU(int32_T m, int32_T n, const real_T A[3600], int32_T ia0,
                    const real_T x[3600], int32_T ix0, real_T y[60])
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

    d = (n - 1) * 60 + ia0;
    for (b_iy = ia0; b_iy <= d; b_iy += 60) {
      c = 0.0;
      e = (b_iy + m) - 1;
      for (b = b_iy; b <= e; b++) {
        c += x[((ix0 + b) - b_iy) - 1] * A[b - 1];
      }

      b = div_nde_s32_floor(b_iy - ia0, 60);
      y[b] += c;
    }
  }
}
