#include "rtwtypes.h"
#include "sumColumnB_7RpG2nHf.h"

real_T sumColumnB_7RpG2nHf(const real_T x[6024], int32_T col)
{
  real_T y;
  int32_T i0;
  int32_T k;
  i0 = (col - 1) * 12;
  y = x[i0];
  for (k = 0; k < 11; k++) {
    y += x[(i0 + k) + 1];
  }

  return y;
}
