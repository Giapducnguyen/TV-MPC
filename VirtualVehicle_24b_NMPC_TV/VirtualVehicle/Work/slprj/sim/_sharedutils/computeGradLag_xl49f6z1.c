#include "rtwtypes.h"
#include "computeGradLag_xl49f6z1.h"
#include <string.h>

void computeGradLag_xl49f6z1(real_T workspace[37895], int32_T nVar, const real_T
  grad[143], const real_T AineqTrans[11440], const real_T AeqTrans[2860], const
  int32_T finiteLB[143], int32_T mLB, const int32_T finiteUB[143], const real_T
  lambda[265])
{
  int32_T b;
  int32_T d;
  int32_T iL0;
  int32_T ix;
  int32_T tmp;
  memcpy(&workspace[0], &grad[0], (uint8_T)nVar * sizeof(real_T));
  ix = 0;
  for (iL0 = 0; iL0 <= 2717; iL0 += 143) {
    d = iL0 + nVar;
    for (b = iL0 + 1; b <= d; b++) {
      tmp = (b - iL0) - 1;
      workspace[tmp] += AeqTrans[b - 1] * lambda[ix];
    }

    ix++;
  }

  ix = 20;
  for (iL0 = 0; iL0 <= 11297; iL0 += 143) {
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
    workspace[iL0 - 1] -= lambda[b + 100];
  }

  for (b = 0; b < 10; b++) {
    iL0 = finiteUB[b];
    workspace[iL0 - 1] += lambda[((uint8_T)mLB + b) + 100];
  }
}
