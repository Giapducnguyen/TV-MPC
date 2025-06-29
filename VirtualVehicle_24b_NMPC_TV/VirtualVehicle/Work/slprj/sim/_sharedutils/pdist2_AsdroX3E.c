#include "rtwtypes.h"
#include "pdist2_AsdroX3E.h"
#include <emmintrin.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"

real_T pdist2_AsdroX3E(const real_T Xin[7], const real_T Yin[7], const real_T
  varargin_1[7])
{
  __m128d tmp;
  real_T param[7];
  real_T D;
  real_T tempSum;
  real_T tempSum_tmp;
  int32_T b_jj;
  boolean_T b_nanflag;
  boolean_T exitg1;
  boolean_T nanflag;
  D = (rtNaN);
  for (b_jj = 0; b_jj <= 4; b_jj += 2) {
    tmp = _mm_loadu_pd(&varargin_1[b_jj]);
    _mm_storeu_pd(&param[b_jj], _mm_div_pd(_mm_set1_pd(1.0), _mm_mul_pd(tmp, tmp)));
  }

  for (b_jj = 6; b_jj < 7; b_jj++) {
    param[b_jj] = 1.0 / (varargin_1[b_jj] * varargin_1[b_jj]);
  }

  nanflag = false;
  b_jj = 0;
  exitg1 = false;
  while ((!exitg1) && (b_jj < 7)) {
    if (muDoubleScalarIsNaN(Xin[b_jj])) {
      nanflag = true;
      exitg1 = true;
    } else {
      b_jj++;
    }
  }

  b_nanflag = false;
  b_jj = 0;
  exitg1 = false;
  while ((!exitg1) && (b_jj < 7)) {
    if (muDoubleScalarIsNaN(Yin[b_jj])) {
      b_nanflag = true;
      exitg1 = true;
    } else {
      b_jj++;
    }
  }

  if ((!b_nanflag) && (!nanflag)) {
    tempSum = 0.0;
    for (b_jj = 0; b_jj < 7; b_jj++) {
      tempSum_tmp = Xin[b_jj] - Yin[b_jj];
      tempSum += tempSum_tmp * tempSum_tmp * param[b_jj];
    }

    D = muDoubleScalarSqrt(tempSum);
  }

  return D;
}
