#include "rtwtypes.h"
#include "trisolve_YkLnQ2YA.h"

void trisolve_YkLnQ2YA(const real_T A[225], real_T B[15])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 0; k < 15; k++) {
    kAcol = 15 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = k + 2; i < 16; i++) {
        B[i - 1] -= A[(i + kAcol) - 1] * B[k];
      }
    }
  }
}
