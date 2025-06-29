#include "rtwtypes.h"
#include "xorgqr_2g44eGRf.h"
#include "xzlarf_MnJxZ1v5.h"
#include <emmintrin.h>

void xorgqr_2g44eGRf(int32_T m, int32_T n, int32_T k, real_T A[130321], const
                     real_T tau[361])
{
  __m128d tmp;
  real_T work[361];
  int32_T b_k;
  int32_T c;
  int32_T i;
  int32_T ia;
  int32_T itau;
  int32_T scalarLB;
  int32_T vectorUB;
  if (n >= 1) {
    for (itau = k; itau < n; itau++) {
      ia = itau * 361;
      for (i = 0; i < m; i++) {
        A[ia + i] = 0.0;
      }

      A[ia + itau] = 1.0;
    }

    itau = k - 1;
    for (i = 0; i < 361; i++) {
      work[i] = 0.0;
    }

    for (i = k; i >= 1; i--) {
      ia = (i - 1) * 361 + i;
      if (i < n) {
        A[ia - 1] = 1.0;
        xzlarf_MnJxZ1v5((m - i) + 1, n - i, ia, tau[itau], A, ia + 361, work);
      }

      if (i < m) {
        c = (ia + m) - i;
        scalarLB = ((((c - ia) / 2) << 1) + ia) + 1;
        vectorUB = scalarLB - 2;
        for (b_k = ia + 1; b_k <= vectorUB; b_k += 2) {
          tmp = _mm_loadu_pd(&A[b_k - 1]);
          _mm_storeu_pd(&A[b_k - 1], _mm_mul_pd(tmp, _mm_set1_pd(-tau[itau])));
        }

        for (b_k = scalarLB; b_k <= c; b_k++) {
          A[b_k - 1] *= -tau[itau];
        }
      }

      A[ia - 1] = 1.0 - tau[itau];
      c = (uint8_T)(i - 1);
      for (b_k = 0; b_k < c; b_k++) {
        A[(ia - b_k) - 2] = 0.0;
      }

      itau--;
    }
  }
}
