#include "rtwtypes.h"
#include "computePrimalFeasError_IMQXEPOU.h"
#include "mwmathutil.h"

real_T computePrimalFeasError_IMQXEPOU(const real_T x[75], const real_T cIneq
  [112], const real_T cEq[27], const int32_T finiteLB[242], int32_T mLB, const
  real_T lb[75], const int32_T finiteUB[242], int32_T mUB, const real_T ub[75])
{
  real_T feasError;
  int32_T c_idx;
  int32_T finiteLB_p;
  int32_T idx;
  feasError = 0.0;
  for (idx = 0; idx < 27; idx++) {
    feasError = muDoubleScalarMax(feasError, muDoubleScalarAbs(cEq[idx]));
  }

  for (idx = 0; idx < 112; idx++) {
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
