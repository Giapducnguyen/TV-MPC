#include "rtwtypes.h"
#include "pdist2_Kgn8OCPh.h"
#include <emmintrin.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"

void pdist2_Kgn8OCPh(const real_T Xin[35], const real_T Yin[35], const real_T
                     varargin_1[7], real_T D[25])
{
  __m128d tmp;
  real_T X[35];
  real_T Y[35];
  real_T param[7];
  real_T tempSum;
  real_T tempSum_tmp;
  int32_T X_tmp;
  int32_T X_tmp_p;
  int32_T b_jj;
  int32_T b_qq;
  boolean_T logIndX[5];
  boolean_T logIndY[5];
  boolean_T exitg1;
  boolean_T nanflag;
  for (b_qq = 0; b_qq < 25; b_qq++) {
    D[b_qq] = (rtNaN);
  }

  for (b_qq = 0; b_qq < 5; b_qq++) {
    for (b_jj = 0; b_jj < 7; b_jj++) {
      X_tmp = 5 * b_jj + b_qq;
      X_tmp_p = 7 * b_qq + b_jj;
      X[X_tmp_p] = Xin[X_tmp];
      Y[X_tmp_p] = Yin[X_tmp];
    }
  }

  for (b_qq = 0; b_qq <= 4; b_qq += 2) {
    tmp = _mm_loadu_pd(&varargin_1[b_qq]);
    _mm_storeu_pd(&param[b_qq], _mm_div_pd(_mm_set1_pd(1.0), _mm_mul_pd(tmp, tmp)));
  }

  for (b_qq = 6; b_qq < 7; b_qq++) {
    param[b_qq] = 1.0 / (varargin_1[b_qq] * varargin_1[b_qq]);
  }

  for (b_qq = 0; b_qq < 5; b_qq++) {
    logIndX[b_qq] = true;
    nanflag = false;
    b_jj = 0;
    exitg1 = false;
    while ((!exitg1) && (b_jj < 7)) {
      if (muDoubleScalarIsNaN(X[7 * b_qq + b_jj])) {
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

  for (b_qq = 0; b_qq < 5; b_qq++) {
    nanflag = false;
    b_jj = 0;
    exitg1 = false;
    while ((!exitg1) && (b_jj < 7)) {
      if (muDoubleScalarIsNaN(Y[7 * b_qq + b_jj])) {
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
      for (b_jj = 0; b_jj < 5; b_jj++) {
        if (logIndX[b_jj]) {
          tempSum = 0.0;
          for (X_tmp = 0; X_tmp < 7; X_tmp++) {
            tempSum_tmp = X[7 * b_jj + X_tmp] - Y[7 * b_qq + X_tmp];
            tempSum += tempSum_tmp * tempSum_tmp * param[X_tmp];
          }

          D[b_jj + 5 * b_qq] = muDoubleScalarSqrt(tempSum);
        }
      }
    }
  }
}
