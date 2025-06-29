#include "rtwtypes.h"
#include "computeComplError_vZhREVZX.h"
#include "mwmathutil.h"

real_T computeComplError_vZhREVZX(const real_T xCurrent[45], const real_T cIneq
  [36], const int32_T finiteLB[148], int32_T mLB, const real_T lb[45], const
  int32_T finiteUB[148], int32_T mUB, const real_T ub[45], const real_T lambda
  [262], int32_T iL0)
{
  real_T lbDelta;
  real_T lbLambda;
  real_T nlpComplError;
  int32_T b;
  int32_T b_idx;
  int32_T finiteLB_p;
  int32_T ubOffset;
  nlpComplError = 0.0;
  for (ubOffset = 0; ubOffset < 36; ubOffset++) {
    lbDelta = cIneq[ubOffset];
    lbLambda = lambda[(iL0 + ubOffset) - 1];
    nlpComplError = muDoubleScalarMax(nlpComplError, muDoubleScalarMin
      (muDoubleScalarAbs(lbDelta * lbLambda), muDoubleScalarMin
       (muDoubleScalarAbs(lbDelta), lbLambda)));
  }

  ubOffset = (iL0 + mLB) + 35;
  b = (uint8_T)mLB;
  for (b_idx = 0; b_idx < b; b_idx++) {
    finiteLB_p = finiteLB[b_idx];
    lbDelta = xCurrent[finiteLB_p - 1] - lb[finiteLB_p - 1];
    lbLambda = lambda[(iL0 + b_idx) + 35];
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
