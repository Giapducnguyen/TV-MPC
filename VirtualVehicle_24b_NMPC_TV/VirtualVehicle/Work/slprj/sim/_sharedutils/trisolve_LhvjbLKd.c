#include "rtwtypes.h"
#include "trisolve_LhvjbLKd.h"

void trisolve_LhvjbLKd(const real_T A[196249], real_T B[443])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 0; k < 443; k++) {
    kAcol = 443 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = k + 2; i < 444; i++) {
        B[i - 1] -= A[(i + kAcol) - 1] * B[k];
      }
    }
  }
}
