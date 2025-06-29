#include "rtwtypes.h"
#include "sortLE_L35ZBP8I.h"
#include "mwmathutil.h"

boolean_T sortLE_L35ZBP8I(const real_T v[354], int32_T idx1, int32_T idx2)
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
