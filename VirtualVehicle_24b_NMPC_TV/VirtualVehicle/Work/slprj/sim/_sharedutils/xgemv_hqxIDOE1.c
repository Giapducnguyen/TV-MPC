#include "rtwtypes.h"
#include "xgemv_hqxIDOE1.h"

void xgemv_hqxIDOE1(int32_T m, int32_T n, const real_T A[160801], int32_T ia0,
                    const real_T x[90225], real_T y[225])
{
  int32_T b;
  int32_T b_iy;
  int32_T c;
  int32_T ia;
  int32_T ix;
  int32_T tmp;
  if (m != 0) {
    for (b_iy = 0; b_iy < m; b_iy++) {
      y[b_iy] = 0.0;
    }

    ix = 0;
    b = (n - 1) * 401 + ia0;
    for (b_iy = ia0; b_iy <= b; b_iy += 401) {
      c = (b_iy + m) - 1;
      for (ia = b_iy; ia <= c; ia++) {
        tmp = ia - b_iy;
        y[tmp] += A[ia - 1] * x[ix];
      }

      ix++;
    }
  }
}
