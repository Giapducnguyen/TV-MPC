#include "rtwtypes.h"
#include "xgemv_xw0LpykY.h"

void xgemv_xw0LpykY(int32_T m, int32_T n, const real_T A[11236], int32_T lda,
                    const real_T x[365], real_T y[364])
{
  int32_T b;
  int32_T b_iy;
  int32_T c;
  int32_T ia;
  int32_T ix;
  int32_T tmp;
  if ((m != 0) && (n != 0)) {
    for (b_iy = 0; b_iy < m; b_iy++) {
      y[b_iy] = 0.0;
    }

    ix = 0;
    b = (n - 1) * lda + 1;
    for (b_iy = 1; lda < 0 ? b_iy >= b : b_iy <= b; b_iy += lda) {
      c = (b_iy + m) - 1;
      for (ia = b_iy; ia <= c; ia++) {
        tmp = ia - b_iy;
        y[tmp] += A[ia - 1] * x[ix];
      }

      ix++;
    }
  }
}
