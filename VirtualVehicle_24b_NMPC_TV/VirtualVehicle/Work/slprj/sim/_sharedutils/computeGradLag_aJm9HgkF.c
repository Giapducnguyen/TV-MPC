#include "rtwtypes.h"
#include "computeGradLag_aJm9HgkF.h"
#include <string.h>

void computeGradLag_aJm9HgkF(real_T workspace[27951], int32_T nVar, const real_T
  grad[121], const real_T AineqTrans[9680], const real_T AeqTrans[1210], const
  int32_T finiteLB[121], int32_T mLB, const int32_T finiteUB[121], const real_T
  lambda[231])
{
  int32_T b;
  int32_T d;
  int32_T iL0;
  int32_T ix;
  int32_T tmp;
  memcpy(&workspace[0], &grad[0], (uint8_T)nVar * sizeof(real_T));
  ix = 0;
  for (iL0 = 0; iL0 <= 1089; iL0 += 121) {
    d = iL0 + nVar;
    for (b = iL0 + 1; b <= d; b++) {
      tmp = (b - iL0) - 1;
      workspace[tmp] += AeqTrans[b - 1] * lambda[ix];
    }

    ix++;
  }

  ix = 10;
  for (iL0 = 0; iL0 <= 9559; iL0 += 121) {
    d = iL0 + nVar;
    for (b = iL0 + 1; b <= d; b++) {
      tmp = (b - iL0) - 1;
      workspace[tmp] += AineqTrans[b - 1] * lambda[ix];
    }

    ix++;
  }

  ix = (uint8_T)mLB;
  for (b = 0; b < ix; b++) {
    iL0 = finiteLB[b];
    workspace[iL0 - 1] -= lambda[b + 90];
  }

  for (b = 0; b < 20; b++) {
    iL0 = finiteUB[b];
    workspace[iL0 - 1] += lambda[((uint8_T)mLB + b) + 90];
  }
}
