#include "rtwtypes.h"
#include "compressBounds_vTYVDDk5.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"

void compressBounds_vTYVDDk5(int32_T indexLB[124], int32_T indexUB[124], int32_T
  indexFixed[124], const real_T ub[29], int32_T *mLB, int32_T *mUB, int32_T
  *mFixed)
{
  real_T lb;
  int32_T idx;
  static real_T lb_p[29] = { 0.0, -85.0, -85.0, 0.0, -85.0, -85.0, 0.0, -85.0,
    -85.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  boolean_T guard1;
  lb_p[9U] = (rtMinusInf);
  lb_p[10U] = (rtMinusInf);
  lb_p[11U] = (rtMinusInf);
  lb_p[12U] = (rtMinusInf);
  lb_p[13U] = (rtMinusInf);
  lb_p[14U] = (rtMinusInf);
  lb_p[15U] = (rtMinusInf);
  lb_p[16U] = (rtMinusInf);
  lb_p[17U] = (rtMinusInf);
  lb_p[18U] = (rtMinusInf);
  lb_p[19U] = (rtMinusInf);
  lb_p[20U] = (rtMinusInf);
  lb_p[21U] = (rtMinusInf);
  lb_p[22U] = (rtMinusInf);
  lb_p[23U] = (rtMinusInf);
  lb_p[24U] = (rtMinusInf);
  lb_p[25U] = (rtMinusInf);
  lb_p[26U] = (rtMinusInf);
  lb_p[27U] = (rtMinusInf);
  lb_p[28U] = (rtMinusInf);
  *mLB = 0;
  *mUB = 0;
  *mFixed = 0;
  for (idx = 0; idx < 29; idx++) {
    lb = lb_p[idx];
    guard1 = false;
    if (!muDoubleScalarIsInf(lb)) {
      if (muDoubleScalarAbs(lb - ub[idx]) < 1.0E-6) {
        (*mFixed)++;
        indexFixed[*mFixed - 1] = idx + 1;
      } else {
        (*mLB)++;
        indexLB[*mLB - 1] = idx + 1;
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      lb = ub[idx];
      if ((!muDoubleScalarIsInf(lb)) && (!muDoubleScalarIsNaN(lb))) {
        (*mUB)++;
        indexUB[*mUB - 1] = idx + 1;
      }
    }
  }
}
