#include "rtwtypes.h"
#include "compressBounds_FVmarWWA.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"

void compressBounds_FVmarWWA(int32_T indexLB[191], int32_T indexUB[191], int32_T
  *mLB, int32_T *mUB, int32_T *mFixed)
{
  int32_T idx;
  static real_T lb[40] = { -100.0, -100.0, -100.0, -100.0, -100.0, -100.0,
    -100.0, -100.0, -100.0, -100.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  static real_T ub[40] = { 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0,
    100.0, 100.0, 100.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0 };

  ub[10U] = (rtInf);
  ub[11U] = (rtInf);
  ub[12U] = (rtInf);
  ub[13U] = (rtInf);
  ub[14U] = (rtInf);
  ub[15U] = (rtInf);
  ub[16U] = (rtInf);
  ub[17U] = (rtInf);
  ub[18U] = (rtInf);
  ub[19U] = (rtInf);
  ub[20U] = (rtInf);
  ub[21U] = (rtInf);
  ub[22U] = (rtInf);
  ub[23U] = (rtInf);
  ub[24U] = (rtInf);
  ub[25U] = (rtInf);
  ub[26U] = (rtInf);
  ub[27U] = (rtInf);
  ub[28U] = (rtInf);
  ub[29U] = (rtInf);
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
  lb[10U] = (rtMinusInf);
  lb[11U] = (rtMinusInf);
  lb[12U] = (rtMinusInf);
  lb[13U] = (rtMinusInf);
  lb[14U] = (rtMinusInf);
  lb[15U] = (rtMinusInf);
  lb[16U] = (rtMinusInf);
  lb[17U] = (rtMinusInf);
  lb[18U] = (rtMinusInf);
  lb[19U] = (rtMinusInf);
  lb[20U] = (rtMinusInf);
  lb[21U] = (rtMinusInf);
  lb[22U] = (rtMinusInf);
  lb[23U] = (rtMinusInf);
  lb[24U] = (rtMinusInf);
  lb[25U] = (rtMinusInf);
  lb[26U] = (rtMinusInf);
  lb[27U] = (rtMinusInf);
  lb[28U] = (rtMinusInf);
  lb[29U] = (rtMinusInf);
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
  *mLB = 0;
  *mUB = 0;
  *mFixed = 0;
  for (idx = 0; idx < 40; idx++) {
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
