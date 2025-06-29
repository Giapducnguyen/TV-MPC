#include "rtwtypes.h"
#include "minimum_OHNoIZs5.h"
#include "mwmathutil.h"

void minimum_OHNoIZs5(const real_T x[201], real_T *ex, int32_T *idx)
{
  real_T x_p;
  int32_T b_idx;
  int32_T k;
  boolean_T exitg1;
  if (!muDoubleScalarIsNaN(x[0])) {
    b_idx = 1;
  } else {
    b_idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 202)) {
      if (!muDoubleScalarIsNaN(x[k - 1])) {
        b_idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (b_idx == 0) {
    *ex = x[0];
    *idx = 1;
  } else {
    *ex = x[b_idx - 1];
    *idx = b_idx;
    for (k = b_idx + 1; k < 202; k++) {
      x_p = x[k - 1];
      if (*ex > x_p) {
        *ex = x_p;
        *idx = k;
      }
    }
  }
}
