#include "rtwtypes.h"
#include "xgemv_JCfKDbKu.h"

void xgemv_JCfKDbKu(int32_T m, int32_T n, const real_T A[707281], int32_T ia0,
                    const real_T x[374245], real_T y[445])
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
    b = (n - 1) * 841 + ia0;
    for (b_iy = ia0; b_iy <= b; b_iy += 841) {
      c = (b_iy + m) - 1;
      for (ia = b_iy; ia <= c; ia++) {
        tmp = ia - b_iy;
        y[tmp] += A[ia - 1] * x[ix];
      }

      ix++;
    }
  }
}
