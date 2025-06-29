#include "rtwtypes.h"
#include "sortLE_XKsU3o9t.h"
#include "mwmathutil.h"

boolean_T sortLE_XKsU3o9t(const real_T v[443], int32_T idx1, int32_T idx2)
{
  real_T tmp;
  real_T tmp_p;
  boolean_T p;
  p = true;
  tmp = v[idx1 - 1];
  tmp_p = v[idx2 - 1];
  if ((!(tmp == tmp_p)) && (!(muDoubleScalarIsNaN(tmp) && muDoubleScalarIsNaN
        (tmp_p))) && (!(tmp <= tmp_p)) && (!muDoubleScalarIsNaN(tmp_p))) {
    p = false;
  }

  return p;
}
