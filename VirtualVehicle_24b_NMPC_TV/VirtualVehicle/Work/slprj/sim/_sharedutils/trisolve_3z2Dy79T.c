#include "rtwtypes.h"
#include "trisolve_3z2Dy79T.h"

void trisolve_3z2Dy79T(const real_T A[36], real_T B[6])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 0; k < 6; k++) {
    kAcol = 6 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = k + 2; i < 7; i++) {
        B[i - 1] -= A[(i + kAcol) - 1] * B[k];
      }
    }
  }
}
