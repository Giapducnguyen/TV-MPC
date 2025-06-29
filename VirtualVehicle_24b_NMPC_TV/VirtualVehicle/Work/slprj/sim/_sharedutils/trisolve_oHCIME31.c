#include "rtwtypes.h"
#include "trisolve_oHCIME31.h"

void trisolve_oHCIME31(const real_T A[25], real_T B[5])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 4; k >= 0; k--) {
    kAcol = 5 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = 0; i < k; i++) {
        B[i] -= A[i + kAcol] * B[k];
      }
    }
  }
}
