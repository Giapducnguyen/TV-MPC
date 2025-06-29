#include "rtwtypes.h"
#include "trisolve_6juxoLwF.h"

void trisolve_6juxoLwF(const real_T A[87025], real_T B[295])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 0; k < 295; k++) {
    kAcol = 295 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = k + 2; i < 296; i++) {
        B[i - 1] -= A[(i + kAcol) - 1] * B[k];
      }
    }
  }
}
