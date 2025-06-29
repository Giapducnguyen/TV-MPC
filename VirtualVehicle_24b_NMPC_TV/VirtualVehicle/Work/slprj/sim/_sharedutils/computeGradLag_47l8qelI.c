#include "rtwtypes.h"
#include "computeGradLag_47l8qelI.h"
#include <string.h>

void computeGradLag_47l8qelI(real_T workspace[445], int32_T nVar, const real_T
  grad[445], const real_T AineqTrans[112140], const real_T AeqTrans[27590],
  const int32_T finiteFixed[445], int32_T mFixed, const int32_T finiteLB[445],
  int32_T mLB, const int32_T finiteUB[445], int32_T mUB, const real_T lambda[827])
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
  for (iL0 = 0; iL0 <= 27145; iL0 += 445) {
    f = iL0 + nVar;
    for (b = iL0 + 1; b <= f; b++) {
      tmp = (b - iL0) - 1;
      workspace[tmp] += AeqTrans[b - 1] * lambda[ix];
    }

    ix++;
  }

  ix = mFixed + 62;
  for (iL0 = 0; iL0 <= 111695; iL0 += 445) {
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
    workspace[iL0 - 1] -= lambda[(mFixed + b) + 314];
  }

  if ((uint16_T)mLB - 1 < 0) {
    iL0 = mFixed + 314;
  } else {
    iL0 = (mFixed + (uint16_T)mLB) + 314;
  }

  ix = (uint16_T)mUB - 1;
  for (b = 0; b <= ix; b++) {
    f = finiteUB[b];
    workspace[f - 1] += lambda[iL0 + b];
  }
}
