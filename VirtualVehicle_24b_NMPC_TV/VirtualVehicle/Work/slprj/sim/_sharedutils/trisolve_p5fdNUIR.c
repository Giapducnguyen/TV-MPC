#include "rtwtypes.h"
#include "trisolve_p5fdNUIR.h"

void trisolve_p5fdNUIR(const real_T A[324], real_T B[18])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 17; k >= 0; k--) {
    kAcol = 18 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = 0; i < k; i++) {
        B[i] -= A[i + kAcol] * B[k];
      }
    }
  }
}
