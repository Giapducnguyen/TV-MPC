#include "rtwtypes.h"
#include "pdist2_cfSSxzWk.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"

void pdist2_cfSSxzWk(const real_T Xin[10], const real_T Yin[100], const real_T
                     varargin_1[10], real_T D[10])
{
  real_T Y[100];
  real_T param[10];
  real_T tempSum;
  real_T tempSum_tmp;
  int32_T b_jj;
  int32_T c_jj;
  boolean_T logIndY[10];
  boolean_T b_nanflag;
  boolean_T exitg1;
  boolean_T nanflag;
  for (b_jj = 0; b_jj < 10; b_jj++) {
    D[b_jj] = (rtNaN);
    for (c_jj = 0; c_jj < 10; c_jj++) {
      Y[c_jj + 10 * b_jj] = Yin[10 * c_jj + b_jj];
    }

    tempSum = varargin_1[b_jj];
    param[b_jj] = 1.0 / (tempSum * tempSum);
  }

  nanflag = false;
  b_jj = 0;
  exitg1 = false;
  while ((!exitg1) && (b_jj < 10)) {
    if (muDoubleScalarIsNaN(Xin[b_jj])) {
      nanflag = true;
      exitg1 = true;
    } else {
      b_jj++;
    }
  }

  nanflag = !nanflag;
  for (b_jj = 0; b_jj < 10; b_jj++) {
    logIndY[b_jj] = true;
    b_nanflag = false;
    c_jj = 0;
    exitg1 = false;
    while ((!exitg1) && (c_jj < 10)) {
      if (muDoubleScalarIsNaN(Y[10 * b_jj + c_jj])) {
        b_nanflag = true;
        exitg1 = true;
      } else {
        c_jj++;
      }
    }

    if (b_nanflag) {
      logIndY[b_jj] = false;
    }

    if (logIndY[b_jj] && nanflag) {
      tempSum = 0.0;
      for (c_jj = 0; c_jj < 10; c_jj++) {
        tempSum_tmp = Xin[c_jj] - Y[10 * b_jj + c_jj];
        tempSum += tempSum_tmp * tempSum_tmp * param[c_jj];
      }

      D[b_jj] = muDoubleScalarSqrt(tempSum);
    }
  }
}
