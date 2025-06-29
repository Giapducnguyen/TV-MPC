#include "rtwtypes.h"
#include "sumColumnB_Ak8MifZL.h"

real_T sumColumnB_Ak8MifZL(const real_T x[6645], int32_T col)
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
