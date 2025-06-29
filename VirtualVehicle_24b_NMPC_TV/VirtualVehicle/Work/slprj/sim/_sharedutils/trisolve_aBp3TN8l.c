#include "rtwtypes.h"
#include "trisolve_aBp3TN8l.h"

void trisolve_aBp3TN8l(const real_T A[400], real_T B[20])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 0; k < 20; k++) {
    kAcol = 20 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = k + 2; i < 21; i++) {
        B[i - 1] -= A[(i + kAcol) - 1] * B[k];
      }
    }
  }
}
