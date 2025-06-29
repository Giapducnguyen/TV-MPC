#include "rtwtypes.h"
#include "trisolve_jalfIzFH.h"

void trisolve_jalfIzFH(const real_T A[253009], real_T B[503])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 0; k < 503; k++) {
    kAcol = 503 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = k + 2; i < 504; i++) {
        B[i - 1] -= A[(i + kAcol) - 1] * B[k];
      }
    }
  }
}
