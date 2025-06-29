#include "rtwtypes.h"
#include "trisolve_ysHsKQuv.h"

void trisolve_ysHsKQuv(const real_T A[125316], real_T B[354])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 0; k < 354; k++) {
    kAcol = 354 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = k + 2; i < 355; i++) {
        B[i - 1] -= A[(i + kAcol) - 1] * B[k];
      }
    }
  }
}
