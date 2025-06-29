#include "rtwtypes.h"
#include "sumColumnB_YSLLifti.h"

real_T sumColumnB_YSLLifti(const real_T x[5030], int32_T col)
{
  real_T y;
  int32_T i0;
  int32_T k;
  i0 = (col - 1) * 10;
  y = x[i0];
  for (k = 0; k < 9; k++) {
    y += x[(i0 + k) + 1];
  }

  return y;
}
