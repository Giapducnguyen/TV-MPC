#include "rtwtypes.h"
#include "checkLinearInputs_cevQ7DIT.h"
#include "rt_nonfinite.h"

real_T checkLinearInputs_cevQ7DIT(const real_T ub[77])
{
  real_T exitflag;
  int32_T k;
  static real_T lb[77] = { 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0,
    -50.0, 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0,
    -50.0, 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0,
    -50.0, 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0, -50.0, 0.0, -50.0,
    -50.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0 };

  boolean_T exitg1;
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
  lb[60U] = (rtMinusInf);
  lb[61U] = (rtMinusInf);
  lb[62U] = (rtMinusInf);
  lb[63U] = (rtMinusInf);
  lb[64U] = (rtMinusInf);
  lb[65U] = (rtMinusInf);
  lb[66U] = (rtMinusInf);
  lb[67U] = (rtMinusInf);
  lb[68U] = (rtMinusInf);
  lb[69U] = (rtMinusInf);
  lb[70U] = (rtMinusInf);
  lb[71U] = (rtMinusInf);
  lb[72U] = (rtMinusInf);
  lb[73U] = (rtMinusInf);
  lb[74U] = (rtMinusInf);
  lb[75U] = (rtMinusInf);
  lb[76U] = (rtMinusInf);
  exitflag = (rtInf);
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 77)) {
    if (lb[k] > ub[k]) {
      exitflag = -2.0;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return exitflag;
}
