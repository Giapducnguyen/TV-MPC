#include "rtwtypes.h"
#include "computePrimalFeasError_q7AqwF23.h"
#include "mwmathutil.h"

real_T computePrimalFeasError_q7AqwF23(const real_T x[20], const real_T cIneq[80],
  const real_T cEq[10], const int32_T finiteLB[121], int32_T mLB, const int32_T
  finiteUB[121])
{
  real_T feasError;
  int32_T c_idx;
  int32_T finiteLB_p;
  int32_T idx;
  static const int8_T lb[20] = { -50, -50, -50, -50, -50, -50, -50, -50, -50,
    -50, -10, -2, -10, -2, -10, -2, -10, -2, -10, -2 };

  static const int8_T ub[20] = { 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 10, 2,
    10, 2, 10, 2, 10, 2, 10, 2 };

  feasError = 0.0;
  for (idx = 0; idx < 10; idx++) {
    feasError = muDoubleScalarMax(feasError, muDoubleScalarAbs(cEq[idx]));
  }

  for (idx = 0; idx < 80; idx++) {
    feasError = muDoubleScalarMax(feasError, cIneq[idx]);
  }

  idx = (uint8_T)mLB;
  for (c_idx = 0; c_idx < idx; c_idx++) {
    finiteLB_p = finiteLB[c_idx];
    feasError = muDoubleScalarMax(feasError, (real_T)lb[finiteLB_p - 1] -
      x[finiteLB_p - 1]);
  }

  for (idx = 0; idx < 20; idx++) {
    c_idx = finiteUB[idx];
    feasError = muDoubleScalarMax(feasError, x[c_idx - 1] - (real_T)ub[c_idx - 1]);
  }

  return feasError;
}
