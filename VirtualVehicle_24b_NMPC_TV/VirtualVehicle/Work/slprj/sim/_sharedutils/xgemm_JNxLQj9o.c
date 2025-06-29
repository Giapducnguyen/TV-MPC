#include "rtwtypes.h"
#include "xgemm_JNxLQj9o.h"
#include <emmintrin.h>

void xgemm_JNxLQj9o(int32_T m, int32_T n, int32_T k, const real_T A[729],
                    int32_T lda, const real_T B[67600], int32_T ib0, real_T C
                    [35880])
{
  __m128d tmp;
  int32_T ar;
  int32_T b;
  int32_T br;
  int32_T c;
  int32_T cr;
  int32_T d;
  int32_T ic;
  int32_T lastColC;
  int32_T scalarLB;
  int32_T vectorUB;
  if ((m != 0) && (n != 0)) {
    br = ib0;
    lastColC = (n - 1) * 260;
    for (cr = 0; cr <= lastColC; cr += 260) {
      b = cr + m;
      for (ic = cr + 1; ic <= b; ic++) {
        C[ic - 1] = 0.0;
      }
    }

    for (cr = 0; cr <= lastColC; cr += 260) {
      ar = -1;
      c = br + k;
      for (ic = br; ic < c; ic++) {
        d = cr + m;
        scalarLB = ((((d - cr) / 2) << 1) + cr) + 1;
        vectorUB = scalarLB - 2;
        for (b = cr + 1; b <= vectorUB; b += 2) {
          tmp = _mm_loadu_pd(&C[b - 1]);
          _mm_storeu_pd(&C[b - 1], _mm_add_pd(_mm_mul_pd(_mm_loadu_pd(&A[(ar + b)
            - cr]), _mm_set1_pd(B[ic - 1])), tmp));
        }

        for (b = scalarLB; b <= d; b++) {
          C[b - 1] += A[(ar + b) - cr] * B[ic - 1];
        }

        ar += lda;
      }

      br += 260;
    }
  }
}
