#include "rtwtypes.h"
#include "xgemm_EUWfzG8K.h"

void xgemm_EUWfzG8K(int32_T m, int32_T n, int32_T k, const real_T A[693889],
                    int32_T ia0, const real_T B[374017], real_T C[693889])
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
    lastColC = (n - 1) * 833;
    for (cr = 0; cr <= lastColC; cr += 833) {
      b = cr + m;
      for (ic = cr + 1; ic <= b; ic++) {
        C[ic - 1] = 0.0;
      }
    }

    br = -1;
    for (cr = 0; cr <= lastColC; cr += 833) {
      ar = ia0;
      c = cr + m;
      for (ic = cr + 1; ic <= c; ic++) {
        temp = 0.0;
        for (b = 0; b < k; b++) {
          temp += A[(b + ar) - 1] * B[(b + br) + 1];
        }

        C[ic - 1] += temp;
        ar += 833;
      }

      br += 833;
    }
  }
}
