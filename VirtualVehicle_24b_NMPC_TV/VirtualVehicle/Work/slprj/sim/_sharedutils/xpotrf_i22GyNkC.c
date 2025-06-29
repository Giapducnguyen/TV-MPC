#include "rtwtypes.h"
#include "xpotrf_i22GyNkC.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include "div_nde_s32_floor.h"

int32_T xpotrf_i22GyNkC(real_T A[149769])
{
  __m128d tmp;
  real_T c;
  real_T ssq;
  int32_T b_ix;
  int32_T b_k;
  int32_T d;
  int32_T f;
  int32_T idxAjj;
  int32_T info;
  int32_T j;
  int32_T tmp_p;
  boolean_T exitg1;
  info = 0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 387)) {
    idxAjj = j * 387 + j;
    ssq = 0.0;
    if (j >= 1) {
      for (b_k = 0; b_k < j; b_k++) {
        c = A[b_k * 387 + j];
        ssq += c * c;
      }
    }

    ssq = A[idxAjj] - ssq;
    if (ssq > 0.0) {
      ssq = muDoubleScalarSqrt(ssq);
      A[idxAjj] = ssq;
      if (j + 1 < 387) {
        if (j != 0) {
          f = ((j - 1) * 387 + j) + 2;
          for (b_k = j + 2; b_k <= f; b_k += 387) {
            b_ix = b_k - j;
            c = -A[div_nde_s32_floor(b_ix - 2, 387) * 387 + j];
            d = b_ix + 385;
            for (b_ix = b_k; b_ix <= d; b_ix++) {
              tmp_p = ((idxAjj + b_ix) - b_k) + 1;
              A[tmp_p] += A[b_ix - 1] * c;
            }
          }
        }

        ssq = 1.0 / ssq;
        b_ix = (idxAjj - j) + 387;
        f = (((((b_ix - idxAjj) - 1) / 2) << 1) + idxAjj) + 2;
        d = f - 2;
        for (b_k = idxAjj + 2; b_k <= d; b_k += 2) {
          tmp = _mm_loadu_pd(&A[b_k - 1]);
          _mm_storeu_pd(&A[b_k - 1], _mm_mul_pd(tmp, _mm_set1_pd(ssq)));
        }

        for (b_k = f; b_k <= b_ix; b_k++) {
          A[b_k - 1] *= ssq;
        }
      }

      j++;
    } else {
      A[idxAjj] = ssq;
      info = j + 1;
      exitg1 = true;
    }
  }

  return info;
}
