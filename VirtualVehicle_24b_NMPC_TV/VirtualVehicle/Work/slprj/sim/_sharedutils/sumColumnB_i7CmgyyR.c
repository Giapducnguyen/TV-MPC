#include "rtwtypes.h"
#include "sumColumnB_i7CmgyyR.h"

real_T sumColumnB_i7CmgyyR(const real_T x[5310], int32_T col)
{
  real_T y;
  int32_T i0;
  int32_T k;
  i0 = (col - 1) * 15;
  y = x[i0];
  for (k = 0; k < 14; k++) {
    y += x[(i0 + k) + 1];
  }

  return y;
}
