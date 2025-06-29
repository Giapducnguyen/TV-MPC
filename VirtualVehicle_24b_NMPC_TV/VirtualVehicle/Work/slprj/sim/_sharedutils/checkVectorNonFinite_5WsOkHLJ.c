#include "rtwtypes.h"
#include "checkVectorNonFinite_5WsOkHLJ.h"
#include "mwmathutil.h"

int32_T checkVectorNonFinite_5WsOkHLJ(const real_T vec[28])
{
  int32_T idx_current;
  int32_T status;
  boolean_T allFinite;
  status = 1;
  allFinite = true;
  idx_current = 0;
  while (allFinite && (idx_current + 1 <= 28)) {
    allFinite = ((!muDoubleScalarIsInf(vec[idx_current])) &&
                 (!muDoubleScalarIsNaN(vec[idx_current])));
    idx_current++;
  }

  if (!allFinite) {
    idx_current--;
    if (muDoubleScalarIsNaN(vec[idx_current])) {
      status = -3;
    } else if (vec[idx_current] < 0.0) {
      status = -1;
    } else {
      status = -2;
    }
  }

  return status;
}
