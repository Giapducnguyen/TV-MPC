#include "rtwtypes.h"
#include "trisolve_mUtfnScF.h"

void trisolve_mUtfnScF(const real_T A[222784], real_T B[472])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 0; k < 472; k++) {
    kAcol = 472 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = k + 2; i < 473; i++) {
        B[i - 1] -= A[(i + kAcol) - 1] * B[k];
      }
    }
  }
}
