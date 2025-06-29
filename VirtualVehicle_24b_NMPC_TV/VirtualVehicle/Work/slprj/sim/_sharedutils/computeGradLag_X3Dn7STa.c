#include "rtwtypes.h"
#include "computeGradLag_X3Dn7STa.h"
#include <string.h>

void computeGradLag_X3Dn7STa(real_T workspace[28182], int32_T nVar, const real_T
  grad[122], const real_T AineqTrans[8540], const real_T AeqTrans[1464], const
  int32_T finiteLB[122], int32_T mLB, const int32_T finiteUB[122], const real_T
  lambda[231])
{
  int32_T b;
  int32_T d;
  int32_T iL0;
  int32_T ix;
  int32_T tmp;
  memcpy(&workspace[0], &grad[0], (uint8_T)nVar * sizeof(real_T));
  ix = 0;
  for (iL0 = 0; iL0 <= 1342; iL0 += 122) {
    d = iL0 + nVar;
    for (b = iL0 + 1; b <= d; b++) {
      tmp = (b - iL0) - 1;
      workspace[tmp] += AeqTrans[b - 1] * lambda[ix];
    }

    ix++;
  }

  ix = 12;
  for (iL0 = 0; iL0 <= 8418; iL0 += 122) {
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
    workspace[iL0 - 1] -= lambda[b + 82];
  }

  for (b = 0; b < 27; b++) {
    iL0 = finiteUB[b];
    workspace[iL0 - 1] += lambda[((uint8_T)mLB + b) + 82];
  }
}
