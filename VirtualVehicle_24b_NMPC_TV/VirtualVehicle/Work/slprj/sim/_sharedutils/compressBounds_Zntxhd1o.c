#include "rtwtypes.h"
#include "compressBounds_Zntxhd1o.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"

void compressBounds_Zntxhd1o(int32_T indexLB[408], int32_T indexUB[408], int32_T
  indexFixed[408], const real_T ub[77], int32_T *mLB, int32_T *mUB, int32_T
  *mFixed)
{
  real_T lb;
  int32_T idx;
  static real_T lb_p[77] = { 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0,
    -50.0, 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0,
    -50.0, 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0,
    -50.0, 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0,
    -50.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0 };

  boolean_T guard1;
  lb_p[45U] = (rtMinusInf);
  lb_p[46U] = (rtMinusInf);
  lb_p[47U] = (rtMinusInf);
  lb_p[48U] = (rtMinusInf);
  lb_p[49U] = (rtMinusInf);
  lb_p[50U] = (rtMinusInf);
  lb_p[51U] = (rtMinusInf);
  lb_p[52U] = (rtMinusInf);
  lb_p[53U] = (rtMinusInf);
  lb_p[54U] = (rtMinusInf);
  lb_p[55U] = (rtMinusInf);
  lb_p[56U] = (rtMinusInf);
  lb_p[57U] = (rtMinusInf);
  lb_p[58U] = (rtMinusInf);
  lb_p[59U] = (rtMinusInf);
  lb_p[60U] = (rtMinusInf);
  lb_p[61U] = (rtMinusInf);
  lb_p[62U] = (rtMinusInf);
  lb_p[63U] = (rtMinusInf);
  lb_p[64U] = (rtMinusInf);
  lb_p[65U] = (rtMinusInf);
  lb_p[66U] = (rtMinusInf);
  lb_p[67U] = (rtMinusInf);
  lb_p[68U] = (rtMinusInf);
  lb_p[69U] = (rtMinusInf);
  lb_p[70U] = (rtMinusInf);
  lb_p[71U] = (rtMinusInf);
  lb_p[72U] = (rtMinusInf);
  lb_p[73U] = (rtMinusInf);
  lb_p[74U] = (rtMinusInf);
  lb_p[75U] = (rtMinusInf);
  lb_p[76U] = (rtMinusInf);
  *mLB = 0;
  *mUB = 0;
  *mFixed = 0;
  for (idx = 0; idx < 77; idx++) {
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
