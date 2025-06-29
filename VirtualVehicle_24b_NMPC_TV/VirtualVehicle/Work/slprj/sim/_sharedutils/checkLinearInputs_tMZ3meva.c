#include "rtwtypes.h"
#include "checkLinearInputs_tMZ3meva.h"
#include "rt_nonfinite.h"

real_T checkLinearInputs_tMZ3meva(const real_T ub[29])
{
  real_T exitflag;
  int32_T k;
  static real_T lb[29] = { 0.0, -100.0, -100.0, 0.0, -100.0, -100.0, 0.0, -100.0,
    -100.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  boolean_T exitg1;
  lb[9U] = (rtMinusInf);
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
  exitflag = (rtInf);
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 29)) {
    if (lb[k] > ub[k]) {
      exitflag = -2.0;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return exitflag;
}
