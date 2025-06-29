#include "rtwtypes.h"
#include "trisolve_5PRkdSxb.h"

void trisolve_5PRkdSxb(const real_T A[36], real_T B[6])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 5; k >= 0; k--) {
    kAcol = 6 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = 0; i < k; i++) {
        B[i] -= A[i + kAcol] * B[k];
      }
    }
  }
}
