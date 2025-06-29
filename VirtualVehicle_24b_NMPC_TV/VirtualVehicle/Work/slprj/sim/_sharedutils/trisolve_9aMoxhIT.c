#include "rtwtypes.h"
#include "trisolve_9aMoxhIT.h"

void trisolve_9aMoxhIT(const real_T A[144], real_T B[12])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 0; k < 12; k++) {
    kAcol = 12 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = k + 2; i < 13; i++) {
        B[i - 1] -= A[(i + kAcol) - 1] * B[k];
      }
    }
  }
}
