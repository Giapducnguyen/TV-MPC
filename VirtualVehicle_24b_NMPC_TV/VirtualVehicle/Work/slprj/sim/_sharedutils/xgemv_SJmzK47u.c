#include "rtwtypes.h"
#include "xgemv_SJmzK47u.h"

void xgemv_SJmzK47u(int32_T m, int32_T n, const real_T A[986049], int32_T ia0,
                    const real_T x[520332], real_T y[524])
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
    b = (n - 1) * 993 + ia0;
    for (b_iy = ia0; b_iy <= b; b_iy += 993) {
      c = (b_iy + m) - 1;
      for (ia = b_iy; ia <= c; ia++) {
        tmp = ia - b_iy;
        y[tmp] += A[ia - 1] * x[ix];
      }

      ix++;
    }
  }
}
