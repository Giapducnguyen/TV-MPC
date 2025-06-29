#include "rtwtypes.h"
#include "trisolve_H5lce1NE.h"

void trisolve_H5lce1NE(const real_T A[100], real_T B[10])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 0; k < 10; k++) {
    kAcol = 10 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = k + 2; i < 11; i++) {
        B[i - 1] -= A[(i + kAcol) - 1] * B[k];
      }
    }
  }
}
