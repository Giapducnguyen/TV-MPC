#include "rtwtypes.h"
#include "computeDualFeasError_YGc0o2La.h"
#include "mwmathutil.h"

void computeDualFeasError_YGc0o2La(int32_T nVar, const real_T gradLag[290],
  boolean_T *gradOK, real_T *val)
{
  int32_T idx;
  boolean_T exitg1;
  *gradOK = true;
  *val = 0.0;
  idx = 0;
  exitg1 = false;
  while ((!exitg1) && (idx <= (uint16_T)nVar - 1)) {
    *gradOK = ((!muDoubleScalarIsInf(gradLag[idx])) && (!muDoubleScalarIsNaN
                (gradLag[idx])));
    if (!*gradOK) {
      exitg1 = true;
    } else {
      *val = muDoubleScalarMax(*val, muDoubleScalarAbs(gradLag[idx]));
      idx++;
    }
  }
}
