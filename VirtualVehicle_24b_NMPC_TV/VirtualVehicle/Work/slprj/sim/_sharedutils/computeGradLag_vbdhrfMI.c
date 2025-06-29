#include "rtwtypes.h"
#include "computeGradLag_vbdhrfMI.h"
#include <string.h>

void computeGradLag_vbdhrfMI(real_T workspace[314160], int32_T nVar, const
  real_T grad[408], const real_T AineqTrans[97920], const real_T AeqTrans[18360],
  const int32_T finiteFixed[408], int32_T mFixed, const int32_T finiteLB[408],
  int32_T mLB, const int32_T finiteUB[408], int32_T mUB, const real_T lambda[770])
{
  int32_T b;
  int32_T f;
  int32_T iL0;
  int32_T ix;
  int32_T tmp;
  memcpy(&workspace[0], &grad[0], (uint16_T)nVar * sizeof(real_T));
  b = (uint16_T)mFixed;
  for (iL0 = 0; iL0 < b; iL0++) {
    ix = finiteFixed[iL0];
    workspace[ix - 1] += lambda[iL0];
  }

  ix = mFixed;
  for (iL0 = 0; iL0 <= 17952; iL0 += 408) {
    f = iL0 + nVar;
    for (b = iL0 + 1; b <= f; b++) {
      tmp = (b - iL0) - 1;
      workspace[tmp] += AeqTrans[b - 1] * lambda[ix];
    }

    ix++;
  }

  ix = mFixed + 45;
  for (iL0 = 0; iL0 <= 97512; iL0 += 408) {
    f = iL0 + nVar;
    for (b = iL0 + 1; b <= f; b++) {
      tmp = (b - iL0) - 1;
      workspace[tmp] += AineqTrans[b - 1] * lambda[ix];
    }

    ix++;
  }

  ix = (uint16_T)mLB - 1;
  for (b = 0; b <= ix; b++) {
    iL0 = finiteLB[b];
    workspace[iL0 - 1] -= lambda[(mFixed + b) + 285];
  }

  if ((uint16_T)mLB - 1 < 0) {
    iL0 = mFixed + 285;
  } else {
    iL0 = (mFixed + (uint16_T)mLB) + 285;
  }

  ix = (uint16_T)mUB - 1;
  for (b = 0; b <= ix; b++) {
    f = finiteUB[b];
    workspace[f - 1] += lambda[iL0 + b];
  }
}
