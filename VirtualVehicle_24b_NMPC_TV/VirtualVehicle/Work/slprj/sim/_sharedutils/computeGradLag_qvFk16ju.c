#include "rtwtypes.h"
#include "computeGradLag_qvFk16ju.h"
#include <string.h>

void computeGradLag_qvFk16ju(real_T workspace[43941], int32_T nVar, const real_T
  grad[151], const real_T AineqTrans[15704], const real_T AeqTrans[1510], const
  int32_T finiteLB[151], int32_T mLB, const int32_T finiteUB[151], const real_T
  lambda[291])
{
  int32_T b;
  int32_T d;
  int32_T iL0;
  int32_T ix;
  int32_T tmp;
  memcpy(&workspace[0], &grad[0], (uint8_T)nVar * sizeof(real_T));
  ix = 0;
  for (iL0 = 0; iL0 <= 1359; iL0 += 151) {
    d = iL0 + nVar;
    for (b = iL0 + 1; b <= d; b++) {
      tmp = (b - iL0) - 1;
      workspace[tmp] += AeqTrans[b - 1] * lambda[ix];
    }

    ix++;
  }

  ix = 10;
  for (iL0 = 0; iL0 <= 15553; iL0 += 151) {
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
    workspace[iL0 - 1] -= lambda[b + 114];
  }

  for (b = 0; b < 12; b++) {
    iL0 = finiteUB[b];
    workspace[iL0 - 1] += lambda[((uint8_T)mLB + b) + 114];
  }
}
