#include "rtwtypes.h"
#include "pdist2_pZcrI0OI.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"

void pdist2_pZcrI0OI(const real_T Xin[100], const real_T Yin[100], const real_T
                     varargin_1[10], real_T D[100])
{
  real_T X[100];
  real_T Y[100];
  real_T param[10];
  real_T tempSum;
  real_T tempSum_tmp;
  int32_T X_tmp;
  int32_T X_tmp_p;
  int32_T b_jj;
  int32_T b_qq;
  boolean_T logIndX[10];
  boolean_T logIndY[10];
  boolean_T exitg1;
  boolean_T nanflag;
  for (b_qq = 0; b_qq < 100; b_qq++) {
    D[b_qq] = (rtNaN);
  }

  for (b_qq = 0; b_qq < 10; b_qq++) {
    for (b_jj = 0; b_jj < 10; b_jj++) {
      X_tmp = 10 * b_jj + b_qq;
      X_tmp_p = 10 * b_qq + b_jj;
      X[X_tmp_p] = Xin[X_tmp];
      Y[X_tmp_p] = Yin[X_tmp];
    }

    tempSum = varargin_1[b_qq];
    param[b_qq] = 1.0 / (tempSum * tempSum);
    logIndX[b_qq] = true;
  }

  for (b_qq = 0; b_qq < 10; b_qq++) {
    nanflag = false;
    b_jj = 0;
    exitg1 = false;
    while ((!exitg1) && (b_jj < 10)) {
      if (muDoubleScalarIsNaN(X[10 * b_qq + b_jj])) {
        nanflag = true;
        exitg1 = true;
      } else {
        b_jj++;
      }
    }

    if (nanflag) {
      logIndX[b_qq] = false;
    }

    logIndY[b_qq] = true;
  }

  for (b_qq = 0; b_qq < 10; b_qq++) {
    nanflag = false;
    b_jj = 0;
    exitg1 = false;
    while ((!exitg1) && (b_jj < 10)) {
      if (muDoubleScalarIsNaN(Y[10 * b_qq + b_jj])) {
        nanflag = true;
        exitg1 = true;
      } else {
        b_jj++;
      }
    }

    if (nanflag) {
      logIndY[b_qq] = false;
    }

    if (logIndY[b_qq]) {
      for (b_jj = 0; b_jj < 10; b_jj++) {
        if (logIndX[b_jj]) {
          tempSum = 0.0;
          for (X_tmp = 0; X_tmp < 10; X_tmp++) {
            tempSum_tmp = X[10 * b_jj + X_tmp] - Y[10 * b_qq + X_tmp];
            tempSum += tempSum_tmp * tempSum_tmp * param[X_tmp];
          }

          D[b_jj + 10 * b_qq] = muDoubleScalarSqrt(tempSum);
        }
      }
    }
  }
}
