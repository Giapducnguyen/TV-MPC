#include "rtwtypes.h"
#include "norm_rCO5KHaA.h"
#include "mwmathutil.h"

real_T norm_rCO5KHaA(const real_T x[140])
{
  real_T absx;
  real_T y;
  int32_T k;
  y = 0.0;
  for (k = 0; k < 140; k++) {
    absx = muDoubleScalarAbs(x[k]);
    if (muDoubleScalarIsNaN(absx) || (absx > y)) {
      y = absx;
    }
  }

  return y;
}
