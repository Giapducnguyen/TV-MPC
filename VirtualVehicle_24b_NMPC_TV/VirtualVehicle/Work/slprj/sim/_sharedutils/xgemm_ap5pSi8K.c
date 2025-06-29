#include "rtwtypes.h"
#include "xgemm_ap5pSi8K.h"

void xgemm_ap5pSi8K(int32_T m, int32_T n, int32_T k, const real_T A[116964],
                    int32_T ia0, const real_T B[64296], real_T C[116964])
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
    lastColC = (n - 1) * 342;
    for (cr = 0; cr <= lastColC; cr += 342) {
      b = cr + m;
      for (ic = cr + 1; ic <= b; ic++) {
        C[ic - 1] = 0.0;
      }
    }

    br = -1;
    for (cr = 0; cr <= lastColC; cr += 342) {
      ar = ia0;
      c = cr + m;
      for (ic = cr + 1; ic <= c; ic++) {
        temp = 0.0;
        for (b = 0; b < k; b++) {
          temp += A[(b + ar) - 1] * B[(b + br) + 1];
        }

        C[ic - 1] += temp;
        ar += 342;
      }

      br += 342;
    }
  }
}
