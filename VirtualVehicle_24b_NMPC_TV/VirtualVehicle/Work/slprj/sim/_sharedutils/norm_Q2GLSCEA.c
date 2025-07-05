#include "rtwtypes.h"
#include "norm_Q2GLSCEA.h"
#include "mwmathutil.h"

real_T norm_Q2GLSCEA(const real_T x[40])
{
  real_T absx;
  real_T y;
  int32_T k;
  y = 0.0;
  for (k = 0; k < 40; k++) {
    absx = muDoubleScalarAbs(x[k]);
    if (muDoubleScalarIsNaN(absx) || (absx > y)) {
      y = absx;
    }
  }

  return y;
}
