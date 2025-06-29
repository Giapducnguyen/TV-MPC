#include "rtwtypes.h"
#include "diff_McGkAgGY.h"

void diff_McGkAgGY(const real_T x[10], real_T y[8])
{
  real_T tmp2;
  real_T x_p;
  int32_T iy;
  int32_T s;
  iy = 0;
  for (s = 0; s < 2; s++) {
    x_p = x[s + 2];
    y[iy] = x_p - x[s];
    tmp2 = x_p;
    x_p = x[s + 4];
    y[iy + 2] = x_p - tmp2;
    tmp2 = x_p;
    x_p = x[s + 6];
    y[iy + 4] = x_p - tmp2;
    y[iy + 6] = x[s + 8] - x_p;
    iy++;
  }
}
