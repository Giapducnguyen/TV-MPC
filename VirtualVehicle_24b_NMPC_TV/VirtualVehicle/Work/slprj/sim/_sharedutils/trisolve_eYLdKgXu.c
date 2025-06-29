#include "rtwtypes.h"
#include "trisolve_eYLdKgXu.h"

void trisolve_eYLdKgXu(const real_T A[252004], real_T B[502])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 0; k < 502; k++) {
    kAcol = 502 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = k + 2; i < 503; i++) {
        B[i - 1] -= A[(i + kAcol) - 1] * B[k];
      }
    }
  }
}
