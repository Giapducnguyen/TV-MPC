#include "rtwtypes.h"
#include "compressBounds_N0NcekEX.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"

void compressBounds_N0NcekEX(int32_T indexLB[361], int32_T indexUB[361], int32_T
  *mLB, int32_T *mUB, int32_T *mFixed)
{
  int32_T idx;
  static real_T lb[60] = { -100.0, -100.0, -100.0, -100.0, -100.0, -100.0,
    -100.0, -100.0, -100.0, -100.0, -100.0, -100.0, -100.0, -100.0, -100.0,
    -100.0, -100.0, -100.0, -100.0, -100.0, -100.0, -100.0, -100.0, -100.0,
    -100.0, -100.0, -100.0, -100.0, -100.0, -100.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  static real_T ub[60] = { 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0,
    100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0,
    100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0,
    100.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0 };

  ub[30U] = (rtInf);
  ub[31U] = (rtInf);
  ub[32U] = (rtInf);
  ub[33U] = (rtInf);
  ub[34U] = (rtInf);
  ub[35U] = (rtInf);
  ub[36U] = (rtInf);
  ub[37U] = (rtInf);
  ub[38U] = (rtInf);
  ub[39U] = (rtInf);
  ub[40U] = (rtInf);
  ub[41U] = (rtInf);
  ub[42U] = (rtInf);
  ub[43U] = (rtInf);
  ub[44U] = (rtInf);
  ub[45U] = (rtInf);
  ub[46U] = (rtInf);
  ub[47U] = (rtInf);
  ub[48U] = (rtInf);
  ub[49U] = (rtInf);
  ub[50U] = (rtInf);
  ub[51U] = (rtInf);
  ub[52U] = (rtInf);
  ub[53U] = (rtInf);
  ub[54U] = (rtInf);
  ub[55U] = (rtInf);
  ub[56U] = (rtInf);
  ub[57U] = (rtInf);
  ub[58U] = (rtInf);
  ub[59U] = (rtInf);
  lb[30U] = (rtMinusInf);
  lb[31U] = (rtMinusInf);
  lb[32U] = (rtMinusInf);
  lb[33U] = (rtMinusInf);
  lb[34U] = (rtMinusInf);
  lb[35U] = (rtMinusInf);
  lb[36U] = (rtMinusInf);
  lb[37U] = (rtMinusInf);
  lb[38U] = (rtMinusInf);
  lb[39U] = (rtMinusInf);
  lb[40U] = (rtMinusInf);
  lb[41U] = (rtMinusInf);
  lb[42U] = (rtMinusInf);
  lb[43U] = (rtMinusInf);
  lb[44U] = (rtMinusInf);
  lb[45U] = (rtMinusInf);
  lb[46U] = (rtMinusInf);
  lb[47U] = (rtMinusInf);
  lb[48U] = (rtMinusInf);
  lb[49U] = (rtMinusInf);
  lb[50U] = (rtMinusInf);
  lb[51U] = (rtMinusInf);
  lb[52U] = (rtMinusInf);
  lb[53U] = (rtMinusInf);
  lb[54U] = (rtMinusInf);
  lb[55U] = (rtMinusInf);
  lb[56U] = (rtMinusInf);
  lb[57U] = (rtMinusInf);
  lb[58U] = (rtMinusInf);
  lb[59U] = (rtMinusInf);
  *mLB = 0;
  *mUB = 0;
  *mFixed = 0;
  for (idx = 0; idx < 60; idx++) {
    if (!muDoubleScalarIsInf(lb[idx])) {
      (*mLB)++;
      indexLB[*mLB - 1] = idx + 1;
    }

    if (!muDoubleScalarIsInf(ub[idx])) {
      (*mUB)++;
      indexUB[*mUB - 1] = idx + 1;
    }
  }
}
