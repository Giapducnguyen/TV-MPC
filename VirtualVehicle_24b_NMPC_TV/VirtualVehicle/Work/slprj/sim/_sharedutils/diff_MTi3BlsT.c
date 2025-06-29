#include "rtwtypes.h"
#include "diff_MTi3BlsT.h"

void diff_MTi3BlsT(const real_T x[20], real_T y[16])
{
  real_T tmp2;
  real_T x_p;
  int32_T iy;
  int32_T s;
  iy = 0;
  for (s = 0; s < 4; s++) {
    x_p = x[s + 4];
    y[iy] = x_p - x[s];
    tmp2 = x_p;
    x_p = x[s + 8];
    y[iy + 4] = x_p - tmp2;
    tmp2 = x_p;
    x_p = x[s + 12];
    y[iy + 8] = x_p - tmp2;
    y[iy + 12] = x[s + 16] - x_p;
    iy++;
  }
}
