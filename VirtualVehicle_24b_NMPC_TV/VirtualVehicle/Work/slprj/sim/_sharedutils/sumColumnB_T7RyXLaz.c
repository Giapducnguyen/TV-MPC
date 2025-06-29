#include "rtwtypes.h"
#include "sumColumnB_T7RyXLaz.h"

real_T sumColumnB_T7RyXLaz(const real_T x[3018], int32_T col)
{
  real_T y;
  int32_T i0;
  int32_T k;
  i0 = (col - 1) * 6;
  y = x[i0];
  for (k = 0; k < 5; k++) {
    y += x[(i0 + k) + 1];
  }

  return y;
}
