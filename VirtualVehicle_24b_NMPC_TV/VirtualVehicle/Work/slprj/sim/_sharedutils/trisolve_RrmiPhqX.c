#include "rtwtypes.h"
#include "trisolve_RrmiPhqX.h"

void trisolve_RrmiPhqX(const real_T A[400], real_T B[20])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 19; k >= 0; k--) {
    kAcol = 20 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = 0; i < k; i++) {
        B[i] -= A[i + kAcol] * B[k];
      }
    }
  }
}
