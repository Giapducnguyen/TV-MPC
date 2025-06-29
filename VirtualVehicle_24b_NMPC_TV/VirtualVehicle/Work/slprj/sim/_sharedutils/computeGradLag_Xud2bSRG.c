#include "rtwtypes.h"
#include "computeGradLag_Xud2bSRG.h"
#include <string.h>

void computeGradLag_Xud2bSRG(real_T workspace[485305], int32_T nVar, const
  real_T grad[505], const real_T AineqTrans[136350], const real_T AeqTrans[24240],
  const int32_T finiteFixed[505], int32_T mFixed, const int32_T finiteLB[505],
  int32_T mLB, const int32_T finiteUB[505], int32_T mUB, const real_T lambda[961])
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
  for (iL0 = 0; iL0 <= 23735; iL0 += 505) {
    f = iL0 + nVar;
    for (b = iL0 + 1; b <= f; b++) {
      tmp = (b - iL0) - 1;
      workspace[tmp] += AeqTrans[b - 1] * lambda[ix];
    }

    ix++;
  }

  ix = mFixed + 48;
  for (iL0 = 0; iL0 <= 135845; iL0 += 505) {
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
    workspace[iL0 - 1] -= lambda[(mFixed + b) + 318];
  }

  if ((uint16_T)mLB - 1 < 0) {
    iL0 = mFixed + 318;
  } else {
    iL0 = (mFixed + (uint16_T)mLB) + 318;
  }

  ix = (uint16_T)mUB - 1;
  for (b = 0; b <= ix; b++) {
    f = finiteUB[b];
    workspace[f - 1] += lambda[iL0 + b];
  }
}
