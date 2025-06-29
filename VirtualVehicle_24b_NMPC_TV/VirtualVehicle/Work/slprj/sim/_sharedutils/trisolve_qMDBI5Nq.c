#include "rtwtypes.h"
#include "trisolve_qMDBI5Nq.h"

void trisolve_qMDBI5Nq(const real_T A[96100], real_T B[310])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 0; k < 310; k++) {
    kAcol = 310 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = k + 2; i < 311; i++) {
        B[i - 1] -= A[(i + kAcol) - 1] * B[k];
      }
    }
  }
}
