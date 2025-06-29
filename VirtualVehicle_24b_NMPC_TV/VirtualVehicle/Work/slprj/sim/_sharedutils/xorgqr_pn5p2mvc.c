#include "rtwtypes.h"
#include "xorgqr_pn5p2mvc.h"
#include "xzlarf_vmSbQLVq.h"
#include <emmintrin.h>

void xorgqr_pn5p2mvc(int32_T m, int32_T n, int32_T k, real_T A[181476], const
                     real_T tau[426])
{
  __m128d tmp;
  real_T work[426];
  int32_T b_k;
  int32_T c;
  int32_T i;
  int32_T ia;
  int32_T itau;
  int32_T scalarLB;
  int32_T vectorUB;
  if (n >= 1) {
    for (itau = k; itau < n; itau++) {
      ia = itau * 426;
      for (i = 0; i < m; i++) {
        A[ia + i] = 0.0;
      }

      A[ia + itau] = 1.0;
    }

    itau = k - 1;
    for (i = 0; i < 426; i++) {
      work[i] = 0.0;
    }

    for (i = k; i >= 1; i--) {
      ia = (i - 1) * 426 + i;
      if (i < n) {
        A[ia - 1] = 1.0;
        xzlarf_vmSbQLVq((m - i) + 1, n - i, ia, tau[itau], A, ia + 426, work);
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
