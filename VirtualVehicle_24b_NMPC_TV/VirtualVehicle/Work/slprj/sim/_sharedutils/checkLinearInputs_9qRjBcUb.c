#include "rtwtypes.h"
#include "checkLinearInputs_9qRjBcUb.h"
#include "rt_nonfinite.h"

real_T checkLinearInputs_9qRjBcUb(const real_T ub[50])
{
  real_T exitflag;
  int32_T k;
  static real_T lb[50] = { 0.0, -100.0, -100.0, 0.0, -100.0, -100.0, 0.0, -100.0,
    -100.0, 0.0, -100.0, -100.0, 0.0, -100.0, -100.0, 0.0, -100.0, -100.0, 0.0,
    -100.0, -100.0, 0.0, -100.0, -100.0, 0.0, -100.0, -100.0, 0.0, -100.0,
    -100.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  boolean_T exitg1;
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
  exitflag = (rtInf);
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 50)) {
    if (lb[k] > ub[k]) {
      exitflag = -2.0;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return exitflag;
}
