#include "rtwtypes.h"
#include "computeComplError_FEnCq3kz.h"
#include "mwmathutil.h"

real_T computeComplError_FEnCq3kz(const real_T xCurrent[41], const real_T cIneq
  [24], const int32_T finiteLB[132], int32_T mLB, const real_T lb[41], const
  int32_T finiteUB[132], int32_T mUB, const real_T ub[41], const real_T lambda
  [230], int32_T iL0)
{
  real_T lbDelta;
  real_T lbLambda;
  real_T nlpComplError;
  int32_T b;
  int32_T b_idx;
  int32_T finiteLB_p;
  int32_T ubOffset;
  nlpComplError = 0.0;
  for (ubOffset = 0; ubOffset < 24; ubOffset++) {
    lbDelta = cIneq[ubOffset];
    lbLambda = lambda[(iL0 + ubOffset) - 1];
    nlpComplError = muDoubleScalarMax(nlpComplError, muDoubleScalarMin
      (muDoubleScalarAbs(lbDelta * lbLambda), muDoubleScalarMin
       (muDoubleScalarAbs(lbDelta), lbLambda)));
  }

  ubOffset = (iL0 + mLB) + 23;
  b = (uint8_T)mLB;
  for (b_idx = 0; b_idx < b; b_idx++) {
    finiteLB_p = finiteLB[b_idx];
    lbDelta = xCurrent[finiteLB_p - 1] - lb[finiteLB_p - 1];
    lbLambda = lambda[(iL0 + b_idx) + 23];
    nlpComplError = muDoubleScalarMax(nlpComplError, muDoubleScalarMin
      (muDoubleScalarAbs(lbDelta * lbLambda), muDoubleScalarMin
       (muDoubleScalarAbs(lbDelta), lbLambda)));
  }

  b = (uint8_T)mUB;
  for (b_idx = 0; b_idx < b; b_idx++) {
    finiteLB_p = finiteUB[b_idx];
    lbDelta = ub[finiteLB_p - 1] - xCurrent[finiteLB_p - 1];
    lbLambda = lambda[ubOffset + b_idx];
    nlpComplError = muDoubleScalarMax(nlpComplError, muDoubleScalarMin
      (muDoubleScalarAbs(lbDelta * lbLambda), muDoubleScalarMin
       (muDoubleScalarAbs(lbDelta), lbLambda)));
  }

  return nlpComplError;
}
