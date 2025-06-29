#include "rtwtypes.h"
#include "xgemm_nMEUZ5Ln.h"

void xgemm_nMEUZ5Ln(int32_T m, int32_T n, int32_T k, const real_T A[284089],
                    int32_T ia0, const real_T B[150306], real_T C[284089])
{
  real_T temp;
  int32_T ar;
  int32_T b;
  int32_T br;
  int32_T c;
  int32_T cr;
  int32_T ic;
  int32_T lastColC;
  if ((m != 0) && (n != 0)) {
    lastColC = (n - 1) * 533;
    for (cr = 0; cr <= lastColC; cr += 533) {
      b = cr + m;
      for (ic = cr + 1; ic <= b; ic++) {
        C[ic - 1] = 0.0;
      }
    }

    br = -1;
    for (cr = 0; cr <= lastColC; cr += 533) {
      ar = ia0;
      c = cr + m;
      for (ic = cr + 1; ic <= c; ic++) {
        temp = 0.0;
        for (b = 0; b < k; b++) {
          temp += A[(b + ar) - 1] * B[(b + br) + 1];
        }

        C[ic - 1] += temp;
        ar += 533;
      }

      br += 533;
    }
  }
}
