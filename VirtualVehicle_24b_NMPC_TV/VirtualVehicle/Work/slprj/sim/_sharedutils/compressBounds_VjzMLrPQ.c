#include "rtwtypes.h"
#include "compressBounds_VjzMLrPQ.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"

void compressBounds_VjzMLrPQ(int32_T indexLB[251], int32_T indexUB[251], int32_T
  indexFixed[251], const real_T ub[50], int32_T *mLB, int32_T *mUB, int32_T
  *mFixed)
{
  real_T lb;
  int32_T idx;
  static real_T lb_p[50] = { 0.0, -100.0, -100.0, 0.0, -100.0, -100.0, 0.0,
    -100.0, -100.0, 0.0, -100.0, -100.0, 0.0, -100.0, -100.0, 0.0, -100.0,
    -100.0, 0.0, -100.0, -100.0, 0.0, -100.0, -100.0, 0.0, -100.0, -100.0, 0.0,
    -100.0, -100.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  boolean_T guard1;
  lb_p[30U] = (rtMinusInf);
  lb_p[31U] = (rtMinusInf);
  lb_p[32U] = (rtMinusInf);
  lb_p[33U] = (rtMinusInf);
  lb_p[34U] = (rtMinusInf);
  lb_p[35U] = (rtMinusInf);
  lb_p[36U] = (rtMinusInf);
  lb_p[37U] = (rtMinusInf);
  lb_p[38U] = (rtMinusInf);
  lb_p[39U] = (rtMinusInf);
  lb_p[40U] = (rtMinusInf);
  lb_p[41U] = (rtMinusInf);
  lb_p[42U] = (rtMinusInf);
  lb_p[43U] = (rtMinusInf);
  lb_p[44U] = (rtMinusInf);
  lb_p[45U] = (rtMinusInf);
  lb_p[46U] = (rtMinusInf);
  lb_p[47U] = (rtMinusInf);
  lb_p[48U] = (rtMinusInf);
  lb_p[49U] = (rtMinusInf);
  *mLB = 0;
  *mUB = 0;
  *mFixed = 0;
  for (idx = 0; idx < 50; idx++) {
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
