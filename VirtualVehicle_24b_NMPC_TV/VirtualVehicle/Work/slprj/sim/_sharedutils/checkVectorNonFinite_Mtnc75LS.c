#include "rtwtypes.h"
#include "checkVectorNonFinite_Mtnc75LS.h"
#include "mwmathutil.h"

int32_T checkVectorNonFinite_Mtnc75LS(const real_T vec[54])
{
  int32_T idx_current;
  int32_T status;
  boolean_T allFinite;
  status = 1;
  allFinite = true;
  idx_current = 0;
  while (allFinite && (idx_current + 1 <= 54)) {
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
