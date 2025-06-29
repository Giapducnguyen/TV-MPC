#include "rtwtypes.h"
#include "computeGradLag_g4vNQ42w.h"
#include <string.h>

void computeGradLag_g4vNQ42w(real_T workspace[29799], int32_T nVar, const real_T
  grad[129], const real_T AineqTrans[6192], const real_T AeqTrans[3354], const
  int32_T finiteLB[129], int32_T mLB, const int32_T finiteUB[129], const real_T
  lambda[231])
{
  int32_T b;
  int32_T d;
  int32_T iL0;
  int32_T ix;
  int32_T tmp;
  memcpy(&workspace[0], &grad[0], (uint8_T)nVar * sizeof(real_T));
  ix = 0;
  for (iL0 = 0; iL0 <= 3225; iL0 += 129) {
    d = iL0 + nVar;
    for (b = iL0 + 1; b <= d; b++) {
      tmp = (b - iL0) - 1;
      workspace[tmp] += AeqTrans[b - 1] * lambda[ix];
    }

    ix++;
  }

  ix = 26;
  for (iL0 = 0; iL0 <= 6063; iL0 += 129) {
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
    workspace[iL0 - 1] -= lambda[b + 74];
  }

  for (b = 0; b < 6; b++) {
    iL0 = finiteUB[b];
    workspace[iL0 - 1] += lambda[((uint8_T)mLB + b) + 74];
  }
}
