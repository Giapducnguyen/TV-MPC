#include "rtwtypes.h"
#include "sumColumnB_w1QqUvec.h"

real32_T sumColumnB_w1QqUvec(const real32_T x[96], int32_T col)
{
  int32_T i0;
  int32_T k;
  real32_T y;
  i0 = (col - 1) * 96;
  y = x[i0];
  for (k = 0; k < 95; k++) {
    y += x[(i0 + k) + 1];
  }

  return y;
}
