#include "rtwtypes.h"
#include "sumColumnB_4HEOZdP6.h"

real_T sumColumnB_4HEOZdP6(const real_T x[9036], int32_T col)
{
  real_T y;
  int32_T i0;
  int32_T k;
  i0 = (col - 1) * 18;
  y = x[i0];
  for (k = 0; k < 17; k++) {
    y += x[(i0 + k) + 1];
  }

  return y;
}
