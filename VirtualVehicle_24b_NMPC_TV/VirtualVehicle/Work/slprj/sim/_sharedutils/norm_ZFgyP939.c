#include "rtwtypes.h"
#include "norm_ZFgyP939.h"
#include "mwmathutil.h"

real_T norm_ZFgyP939(const real_T x[60])
{
  real_T absx;
  real_T y;
  int32_T k;
  y = 0.0;
  for (k = 0; k < 60; k++) {
    absx = muDoubleScalarAbs(x[k]);
    if (muDoubleScalarIsNaN(absx) || (absx > y)) {
      y = absx;
    }
  }

  return y;
}
