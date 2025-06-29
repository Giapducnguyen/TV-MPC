#include "rtwtypes.h"
#include "trisolve_39kGchXQ.h"

void trisolve_39kGchXQ(const real_T A[169744], real_T B[412])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 0; k < 412; k++) {
    kAcol = 412 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = k + 2; i < 413; i++) {
        B[i - 1] -= A[(i + kAcol) - 1] * B[k];
      }
    }
  }
}
