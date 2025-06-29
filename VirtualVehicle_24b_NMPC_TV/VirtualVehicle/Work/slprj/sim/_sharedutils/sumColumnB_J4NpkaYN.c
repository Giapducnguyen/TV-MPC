#include "rtwtypes.h"
#include "sumColumnB_J4NpkaYN.h"

real_T sumColumnB_J4NpkaYN(const real_T x[10620], int32_T col)
{
  real_T y;
  int32_T i0;
  int32_T k;
  i0 = (col - 1) * 20;
  y = x[i0];
  for (k = 0; k < 19; k++) {
    y += x[(i0 + k) + 1];
  }

  return y;
}
