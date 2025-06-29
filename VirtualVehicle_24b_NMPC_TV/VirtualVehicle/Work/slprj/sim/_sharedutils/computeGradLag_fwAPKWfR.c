#include "rtwtypes.h"
#include "computeGradLag_fwAPKWfR.h"
#include <string.h>

void computeGradLag_fwAPKWfR(real_T workspace[150], int32_T nVar, const real_T
  grad[150], const real_T AineqTrans[7800], const real_T AeqTrans[2700], const
  int32_T finiteFixed[150], int32_T mFixed, const int32_T finiteLB[150], int32_T
  mLB, const int32_T finiteUB[150], int32_T mUB, const real_T lambda[281])
{
  int32_T b;
  int32_T f;
  int32_T iL0;
  int32_T ix;
  int32_T tmp;
  memcpy(&workspace[0], &grad[0], (uint8_T)nVar * sizeof(real_T));
  b = (uint8_T)mFixed;
  for (iL0 = 0; iL0 < b; iL0++) {
    ix = finiteFixed[iL0];
    workspace[ix - 1] += lambda[iL0];
  }

  ix = mFixed;
  for (iL0 = 0; iL0 <= 2550; iL0 += 150) {
    f = iL0 + nVar;
    for (b = iL0 + 1; b <= f; b++) {
      tmp = (b - iL0) - 1;
      workspace[tmp] += AeqTrans[b - 1] * lambda[ix];
    }

    ix++;
  }

  ix = mFixed + 18;
  for (iL0 = 0; iL0 <= 7650; iL0 += 150) {
    f = iL0 + nVar;
    for (b = iL0 + 1; b <= f; b++) {
      tmp = (b - iL0) - 1;
      workspace[tmp] += AineqTrans[b - 1] * lambda[ix];
    }

    ix++;
  }

  ix = (uint8_T)mLB - 1;
  for (b = 0; b <= ix; b++) {
    iL0 = finiteLB[b];
    workspace[iL0 - 1] -= lambda[(mFixed + b) + 70];
  }

  if ((uint8_T)mLB - 1 < 0) {
    iL0 = mFixed + 70;
  } else {
    iL0 = (mFixed + (uint8_T)mLB) + 70;
  }

  ix = (uint8_T)mUB - 1;
  for (b = 0; b <= ix; b++) {
    f = finiteUB[b];
    workspace[f - 1] += lambda[iL0 + b];
  }
}
