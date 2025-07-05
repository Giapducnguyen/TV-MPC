#include "rtwtypes.h"
#include "norm_CkO8dKQl.h"
#include "mwmathutil.h"

real_T norm_CkO8dKQl(const real_T x[26])
{
  real_T absx;
  real_T y;
  int32_T k;
  y = 0.0;
  for (k = 0; k < 26; k++) {
    absx = muDoubleScalarAbs(x[k]);
    if (muDoubleScalarIsNaN(absx) || (absx > y)) {
      y = absx;
    }
  }

  return y;
}
