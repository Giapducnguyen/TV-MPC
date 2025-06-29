#include "rtwtypes.h"
#include "trisolve_k2lvYKBc.h"

void trisolve_k2lvYKBc(const real_T A[324], real_T B[18])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 0; k < 18; k++) {
    kAcol = 18 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = k + 2; i < 19; i++) {
        B[i - 1] -= A[(i + kAcol) - 1] * B[k];
      }
    }
  }
}
