#include "rtwtypes.h"
#include "trisolve_cRlIVxjD.h"

void trisolve_cRlIVxjD(const real_T A[149769], real_T B[387])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 0; k < 387; k++) {
    kAcol = 387 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = k + 2; i < 388; i++) {
        B[i - 1] -= A[(i + kAcol) - 1] * B[k];
      }
    }
  }
}
