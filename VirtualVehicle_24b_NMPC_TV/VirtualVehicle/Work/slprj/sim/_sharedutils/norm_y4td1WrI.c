#include "rtwtypes.h"
#include "norm_y4td1WrI.h"
#include "mwmathutil.h"

real_T norm_y4td1WrI(const real_T x[84])
{
  real_T absx;
  real_T y;
  int32_T k;
  y = 0.0;
  for (k = 0; k < 84; k++) {
    absx = muDoubleScalarAbs(x[k]);
    if (muDoubleScalarIsNaN(absx) || (absx > y)) {
      y = absx;
    }
  }

  return y;
}
