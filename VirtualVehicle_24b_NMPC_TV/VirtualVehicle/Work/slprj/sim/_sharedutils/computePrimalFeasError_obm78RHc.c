#include "rtwtypes.h"
#include "computePrimalFeasError_obm78RHc.h"
#include "mwmathutil.h"

real_T computePrimalFeasError_obm78RHc(const real_T x[63], const real_T cIneq
  [100], const real_T cEq[33], const int32_T finiteLB[230], int32_T mLB, const
  real_T lb[63], const int32_T finiteUB[230], int32_T mUB, const real_T ub[63])
{
  real_T feasError;
  int32_T c_idx;
  int32_T finiteLB_p;
  int32_T idx;
  feasError = 0.0;
  for (idx = 0; idx < 33; idx++) {
    feasError = muDoubleScalarMax(feasError, muDoubleScalarAbs(cEq[idx]));
  }

  for (idx = 0; idx < 100; idx++) {
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
