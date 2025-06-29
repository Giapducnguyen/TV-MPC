#include "rtwtypes.h"
#include "xgemm_BR1lZ2VM.h"

void xgemm_BR1lZ2VM(int32_T m, int32_T n, int32_T k, const real_T A[51529],
                    int32_T ia0, const real_T B[28148], real_T C[51529])
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
    lastColC = (n - 1) * 227;
    for (cr = 0; cr <= lastColC; cr += 227) {
      b = cr + m;
      for (ic = cr + 1; ic <= b; ic++) {
        C[ic - 1] = 0.0;
      }
    }

    br = -1;
    for (cr = 0; cr <= lastColC; cr += 227) {
      ar = ia0;
      c = cr + m;
      for (ic = cr + 1; ic <= c; ic++) {
        temp = 0.0;
        for (b = 0; b < k; b++) {
          temp += A[(b + ar) - 1] * B[(b + br) + 1];
        }

        C[ic - 1] += temp;
        ar += 227;
      }

      br += 227;
    }
  }
}
