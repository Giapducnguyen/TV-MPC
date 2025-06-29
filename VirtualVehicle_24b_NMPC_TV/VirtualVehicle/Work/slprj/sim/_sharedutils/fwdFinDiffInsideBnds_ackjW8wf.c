#include "rtwtypes.h"
#include "fwdFinDiffInsideBnds_ackjW8wf.h"

boolean_T fwdFinDiffInsideBnds_ackjW8wf(real_T xC_i, real_T lb_i, real_T ub_i,
  real_T *delta_i)
{
  real_T lbDiff;
  real_T ubDiff;
  boolean_T modifiedStep;
  modifiedStep = false;
  lbDiff = xC_i + *delta_i;
  if ((lb_i != ub_i) && (xC_i >= lb_i) && (xC_i <= ub_i) && ((lbDiff > ub_i) ||
       (lbDiff < lb_i))) {
    *delta_i = -*delta_i;
    modifiedStep = true;
    lbDiff = xC_i + *delta_i;
    if ((lbDiff > ub_i) || (lbDiff < lb_i)) {
      lbDiff = xC_i - lb_i;
      ubDiff = ub_i - xC_i;
      if (lbDiff <= ubDiff) {
        *delta_i = -lbDiff;
      } else {
        *delta_i = ubDiff;
      }
    }
  }

  return modifiedStep;
}
