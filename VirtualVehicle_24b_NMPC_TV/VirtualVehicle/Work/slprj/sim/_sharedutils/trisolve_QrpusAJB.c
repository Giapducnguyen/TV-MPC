#include "rtwtypes.h"
#include "trisolve_QrpusAJB.h"

void trisolve_QrpusAJB(const real_T A[225], real_T B[15])
{
  real_T B_p;
  int32_T i;
  int32_T k;
  int32_T kAcol;
  for (k = 14; k >= 0; k--) {
    kAcol = 15 * k;
    B_p = B[k];
    if (B_p != 0.0) {
      B[k] = B_p / A[k + kAcol];
      for (i = 0; i < k; i++) {
        B[i] -= A[i + kAcol] * B[k];
      }
    }
  }
}
