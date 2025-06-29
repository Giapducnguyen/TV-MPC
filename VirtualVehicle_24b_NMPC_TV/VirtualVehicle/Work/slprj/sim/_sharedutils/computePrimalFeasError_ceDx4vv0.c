#include "rtwtypes.h"
#include "computePrimalFeasError_ceDx4vv0.h"
#include "mwmathutil.h"

real_T computePrimalFeasError_ceDx4vv0(const real_T x[48], const real_T cIneq[42],
  const real_T cEq[33], const int32_T finiteLB[157], int32_T mLB, const real_T
  lb[48], const int32_T finiteUB[157], int32_T mUB, const real_T ub[48])
{
  real_T feasError;
  int32_T c_idx;
  int32_T finiteLB_p;
  int32_T idx;
  feasError = 0.0;
  for (idx = 0; idx < 33; idx++) {
    feasError = muDoubleScalarMax(feasError, muDoubleScalarAbs(cEq[idx]));
  }

  for (idx = 0; idx < 42; idx++) {
    feasError = muDoubleScalarMax(feasError, cIneq[idx]);
  }

  idx = (uint16_T)mLB;
  for (c_idx = 0; c_idx < idx; c_idx++) {
    finiteLB_p = finiteLB[c_idx];
    feasError = muDoubleScalarMax(feasError, lb[finiteLB_p - 1] - x[finiteLB_p -
      1]);
  }

  idx = (uint8_T)mUB;
  for (c_idx = 0; c_idx < idx; c_idx++) {
    finiteLB_p = finiteUB[c_idx];
    feasError = muDoubleScalarMax(feasError, x[finiteLB_p - 1] - ub[finiteLB_p -
      1]);
  }

  return feasError;
}
