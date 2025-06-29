#include "rtwtypes.h"
#include "trisolve_LzFlKP62.h"

void trisolve_LzFlKP62(const real_T A[100], real_T B[10])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 9; k >= 0; k--) {
    kAcol = 10 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = 0; i < k; i++) {
        B[i] -= A[i + kAcol] * B[k];
      }
    }
  }
}
