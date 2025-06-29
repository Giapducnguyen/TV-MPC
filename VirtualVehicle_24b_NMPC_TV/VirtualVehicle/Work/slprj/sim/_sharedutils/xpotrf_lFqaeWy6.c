#include "rtwtypes.h"
#include "xpotrf_lFqaeWy6.h"
#include "mwmathutil.h"
#include "div_nde_s32_floor.h"

int32_T xpotrf_lFqaeWy6(int32_T n, real_T A[96100])
{
  real_T c;
  real_T ssq;
  int32_T b;
  int32_T b_ix;
  int32_T b_iy;
  int32_T b_j;
  int32_T b_k;
  int32_T d;
  int32_T idxA1j;
  int32_T idxAjj;
  int32_T info;
  boolean_T exitg1;
  info = 0;
  b_j = 0;
  exitg1 = false;
  while ((!exitg1) && (b_j <= n - 1)) {
    idxA1j = b_j * 310;
    idxAjj = idxA1j + b_j;
    ssq = 0.0;
    if (b_j >= 1) {
      for (b_k = 0; b_k < b_j; b_k++) {
        c = A[idxA1j + b_k];
        ssq += c * c;
      }
    }

    ssq = A[idxAjj] - ssq;
    if (ssq > 0.0) {
      ssq = muDoubleScalarSqrt(ssq);
      A[idxAjj] = ssq;
      if (b_j + 1 < n) {
        b_iy = (n - b_j) - 2;
        if ((b_j != 0) && (b_iy + 1 != 0)) {
          b = (310 * b_iy + idxA1j) + 311;
          for (b_k = idxA1j + 311; b_k <= b; b_k += 310) {
            c = 0.0;
            d = (b_k + b_j) - 1;
            for (b_ix = b_k; b_ix <= d; b_ix++) {
              c += A[(idxA1j + b_ix) - b_k] * A[b_ix - 1];
            }

            b_ix = (div_nde_s32_floor((b_k - idxA1j) - 311, 310) * 310 + idxAjj)
              + 310;
            A[b_ix] -= c;
          }
        }

        ssq = 1.0 / ssq;
        idxA1j = (310 * b_iy + idxAjj) + 311;
        for (b_k = idxAjj + 311; b_k <= idxA1j; b_k += 310) {
          A[b_k - 1] *= ssq;
        }
      }

      b_j++;
    } else {
      A[idxAjj] = ssq;
      info = b_j + 1;
      exitg1 = true;
    }
  }

  return info;
}
