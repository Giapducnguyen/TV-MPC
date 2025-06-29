#include "rtwtypes.h"
#include "computeComplError_8bR6IIcp.h"
#include "mwmathutil.h"

real_T computeComplError_8bR6IIcp(const real_T xCurrent[20], const real_T cIneq
  [80], const int32_T finiteLB[121], int32_T mLB, const int32_T finiteUB[121],
  const real_T lambda[231])
{
  real_T lbDelta;
  real_T nlpComplError;
  real_T ubLambda;
  int32_T b_idx;
  int32_T finiteLB_p;
  int32_T idx;
  static const int8_T lb[20] = { -50, -50, -50, -50, -50, -50, -50, -50, -50,
    -50, -10, -2, -10, -2, -10, -2, -10, -2, -10, -2 };

  static const int8_T ub[20] = { 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 10, 2,
    10, 2, 10, 2, 10, 2, 10, 2 };

  nlpComplError = 0.0;
  for (idx = 0; idx < 80; idx++) {
    lbDelta = cIneq[idx];
    ubLambda = lambda[idx + 10];
    nlpComplError = muDoubleScalarMax(nlpComplError, muDoubleScalarMin
      (muDoubleScalarAbs(lbDelta * ubLambda), muDoubleScalarMin
       (muDoubleScalarAbs(lbDelta), ubLambda)));
  }

  idx = (uint8_T)mLB;
  for (b_idx = 0; b_idx < idx; b_idx++) {
    finiteLB_p = finiteLB[b_idx];
    lbDelta = xCurrent[finiteLB_p - 1] - (real_T)lb[finiteLB_p - 1];
    ubLambda = lambda[b_idx + 90];
    nlpComplError = muDoubleScalarMax(nlpComplError, muDoubleScalarMin
      (muDoubleScalarAbs(lbDelta * ubLambda), muDoubleScalarMin
       (muDoubleScalarAbs(lbDelta), ubLambda)));
  }

  for (idx = 0; idx < 20; idx++) {
    b_idx = finiteUB[idx];
    lbDelta = (real_T)ub[b_idx - 1] - xCurrent[b_idx - 1];
    ubLambda = lambda[(mLB + idx) + 90];
    nlpComplError = muDoubleScalarMax(nlpComplError, muDoubleScalarMin
      (muDoubleScalarAbs(lbDelta * ubLambda), muDoubleScalarMin
       (muDoubleScalarAbs(lbDelta), ubLambda)));
  }

  return nlpComplError;
}
