#include "rtwtypes.h"
#include "diff_VCzdPosx.h"

void diff_VCzdPosx(const real_T x[60], real_T y[56])
{
  real_T tmp2;
  real_T work;
  int32_T iy;
  int32_T m;
  int32_T s;
  int32_T x_tmp;
  iy = 0;
  for (s = 0; s < 4; s++) {
    work = x[s];
    for (m = 0; m < 14; m++) {
      tmp2 = work;
      x_tmp = m << 2;
      work = x[(s + x_tmp) + 4];
      y[iy + x_tmp] = work - tmp2;
    }

    iy++;
  }
}
