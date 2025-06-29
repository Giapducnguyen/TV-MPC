#include "rtwtypes.h"
#include "pdist2_6BSaz9Jv.h"
#include <emmintrin.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"

void pdist2_6BSaz9Jv(const real_T Xin[10], const real_T Yin[50], const real_T
                     varargin_1[10], real_T D[5])
{
  __m128d tmp;
  real_T Y[50];
  real_T param[10];
  real_T tempSum;
  real_T tempSum_tmp;
  int32_T b_jj;
  int32_T c_jj;
  boolean_T logIndY[5];
  boolean_T b_nanflag;
  boolean_T exitg1;
  boolean_T nanflag;
  for (b_jj = 0; b_jj < 5; b_jj++) {
    D[b_jj] = (rtNaN);
    for (c_jj = 0; c_jj < 10; c_jj++) {
      Y[c_jj + 10 * b_jj] = Yin[5 * c_jj + b_jj];
    }
  }

  for (b_jj = 0; b_jj <= 8; b_jj += 2) {
    tmp = _mm_loadu_pd(&varargin_1[b_jj]);
    _mm_storeu_pd(&param[b_jj], _mm_div_pd(_mm_set1_pd(1.0), _mm_mul_pd(tmp, tmp)));
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
  for (b_jj = 0; b_jj < 5; b_jj++) {
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
