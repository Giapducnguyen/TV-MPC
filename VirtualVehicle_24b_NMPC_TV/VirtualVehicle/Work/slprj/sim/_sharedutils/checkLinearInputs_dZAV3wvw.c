#include "rtwtypes.h"
#include "checkLinearInputs_dZAV3wvw.h"
#include "rt_nonfinite.h"

real_T checkLinearInputs_dZAV3wvw(const real_T ub[27])
{
  real_T exitflag;
  int32_T k;
  static real_T lb[27] = { 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0,
    -50.0, 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  boolean_T exitg1;
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
  exitflag = (rtInf);
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 27)) {
    if (lb[k] > ub[k]) {
      exitflag = -2.0;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return exitflag;
}
