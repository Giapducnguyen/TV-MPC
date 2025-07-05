#include "rtwtypes.h"
#include "trisolve_vGH87Sf3.h"

void trisolve_vGH87Sf3(const real_T A[676], real_T B[676])
{
  real_T B_p;
  int32_T B_tmp;
  int32_T b_k;
  int32_T i;
  int32_T j;
  int32_T jBcol;
  int32_T kAcol;
  int32_T tmp;
  for (j = 0; j < 26; j++) {
    jBcol = 26 * j;
    for (b_k = 0; b_k < 26; b_k++) {
      kAcol = 26 * b_k;
      B_tmp = b_k + jBcol;
      B_p = B[B_tmp];
      if (B_p != 0.0) {
        B_p /= A[b_k + kAcol];
        B[B_tmp] = B_p;
        for (i = b_k + 2; i < 27; i++) {
          tmp = (i + jBcol) - 1;
          B[tmp] -= A[(i + kAcol) - 1] * B[B_tmp];
        }
      }
    }
  }
}
