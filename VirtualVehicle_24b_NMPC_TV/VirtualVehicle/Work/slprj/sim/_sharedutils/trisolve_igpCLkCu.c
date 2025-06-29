#include "rtwtypes.h"
#include "trisolve_igpCLkCu.h"

void trisolve_igpCLkCu(const real_T A[25], real_T B[5])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 0; k < 5; k++) {
    kAcol = 5 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = k + 2; i < 6; i++) {
        B[i - 1] -= A[(i + kAcol) - 1] * B[k];
      }
    }
  }
}
