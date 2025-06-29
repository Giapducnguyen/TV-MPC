#include "rtwtypes.h"
#include "sumColumnB_kylkRhBc.h"

real_T sumColumnB_kylkRhBc(const real_T x[7])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 6; k++) {
    y += x[k + 1];
  }

  return y;
}
