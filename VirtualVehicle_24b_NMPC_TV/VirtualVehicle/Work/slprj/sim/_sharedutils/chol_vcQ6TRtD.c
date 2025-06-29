#include "rtwtypes.h"
#include "chol_vcQ6TRtD.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include "div_nde_s32_floor.h"

void chol_vcQ6TRtD(real_T A[49], int32_T *flag, int32_T *jmax)
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
  int32_T tmp_p;
  boolean_T exitg1;
  *flag = 0;
  b_j = 0;
  exitg1 = false;
  while ((!exitg1) && (b_j < 7)) {
    idxAjj = b_j * 7 + b_j;
    ssq = 0.0;
    if (b_j >= 1) {
      for (b_k = 0; b_k < b_j; b_k++) {
        c = A[b_k * 7 + b_j];
        ssq += c * c;
      }
    }

    ssq = A[idxAjj] - ssq;
    if (ssq > 0.0) {
      ssq = muDoubleScalarSqrt(ssq);
      A[idxAjj] = ssq;
      if (b_j + 1 < 7) {
        if (b_j != 0) {
          g = ((b_j - 1) * 7 + b_j) + 2;
          for (b_k = b_j + 2; b_k <= g; b_k += 7) {
            b_ix = b_k - b_j;
            c = -A[div_nde_s32_floor(b_ix - 2, 7) * 7 + b_j];
            e = b_ix + 5;
            for (b_ix = b_k; b_ix <= e; b_ix++) {
              tmp_p = ((idxAjj + b_ix) - b_k) + 1;
              A[tmp_p] += A[b_ix - 1] * c;
            }
          }
        }

        ssq = 1.0 / ssq;
        b_ix = (idxAjj - b_j) + 7;
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
      *flag = b_j + 1;
      exitg1 = true;
    }
  }

  if (*flag == 0) {
    *jmax = 7;
  } else {
    *jmax = *flag - 1;
  }

  for (b_j = 2; b_j <= *jmax; b_j++) {
    for (idxAjj = 0; idxAjj <= b_j - 2; idxAjj++) {
      A[idxAjj + 7 * (b_j - 1)] = 0.0;
    }
  }
}
