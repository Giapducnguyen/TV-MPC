#include "rtwtypes.h"
#include "trisolve_X9rOc8pR.h"

void trisolve_X9rOc8pR(const real_T A[144], real_T B[12])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 11; k >= 0; k--) {
    kAcol = 12 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = 0; i < k; i++) {
        B[i] -= A[i + kAcol] * B[k];
      }
    }
  }
}
