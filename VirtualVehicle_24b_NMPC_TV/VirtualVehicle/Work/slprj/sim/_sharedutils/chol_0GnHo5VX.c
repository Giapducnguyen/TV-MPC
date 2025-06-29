#include "rtwtypes.h"
#include "chol_0GnHo5VX.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include "div_nde_s32_floor.h"

void chol_0GnHo5VX(real_T A[225])
{
  __m128d tmp;
  real_T c;
  real_T ssq;
  int32_T b_ix;
  int32_T b_j;
  int32_T b_k;
  int32_T e;
  int32_T g;
  int32_T idxAjj;
  int32_T info;
  int32_T tmp_p;
  boolean_T exitg1;
  info = 0;
  b_j = 0;
  exitg1 = false;
  while ((!exitg1) && (b_j < 15)) {
    idxAjj = b_j * 15 + b_j;
    ssq = 0.0;
    if (b_j >= 1) {
      for (b_k = 0; b_k < b_j; b_k++) {
        c = A[b_k * 15 + b_j];
        ssq += c * c;
      }
    }

    ssq = A[idxAjj] - ssq;
    if (ssq > 0.0) {
      ssq = muDoubleScalarSqrt(ssq);
      A[idxAjj] = ssq;
      if (b_j + 1 < 15) {
        if (b_j != 0) {
          g = ((b_j - 1) * 15 + b_j) + 2;
          for (b_k = b_j + 2; b_k <= g; b_k += 15) {
            b_ix = b_k - b_j;
            c = -A[div_nde_s32_floor(b_ix - 2, 15) * 15 + b_j];
            e = b_ix + 13;
            for (b_ix = b_k; b_ix <= e; b_ix++) {
              tmp_p = ((idxAjj + b_ix) - b_k) + 1;
              A[tmp_p] += A[b_ix - 1] * c;
            }
          }
        }

        ssq = 1.0 / ssq;
        b_ix = (idxAjj - b_j) + 15;
        g = (((((b_ix - idxAjj) - 1) / 2) << 1) + idxAjj) + 2;
        e = g - 2;
        for (b_k = idxAjj + 2; b_k <= e; b_k += 2) {
          tmp = _mm_loadu_pd(&A[b_k - 1]);
          _mm_storeu_pd(&A[b_k - 1], _mm_mul_pd(tmp, _mm_set1_pd(ssq)));
        }

        for (b_k = g; b_k <= b_ix; b_k++) {
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

  if (info == 0) {
    idxAjj = 16;
  } else {
    idxAjj = info;
  }

  for (info = 2; info < idxAjj; info++) {
    for (b_j = 0; b_j <= info - 2; b_j++) {
      A[b_j + 15 * (info - 1)] = 0.0;
    }
  }
}
