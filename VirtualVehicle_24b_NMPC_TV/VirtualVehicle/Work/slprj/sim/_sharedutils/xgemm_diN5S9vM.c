#include "rtwtypes.h"
#include "xgemm_diN5S9vM.h"

void xgemm_diN5S9vM(int32_T m, int32_T n, int32_T k, const real_T A[68644],
                    int32_T ia0, const real_T B[38776], real_T C[68644])
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
    lastColC = (n - 1) * 262;
    for (cr = 0; cr <= lastColC; cr += 262) {
      b = cr + m;
      for (ic = cr + 1; ic <= b; ic++) {
        C[ic - 1] = 0.0;
      }
    }

    br = -1;
    for (cr = 0; cr <= lastColC; cr += 262) {
      ar = ia0;
      c = cr + m;
      for (ic = cr + 1; ic <= c; ic++) {
        temp = 0.0;
        for (b = 0; b < k; b++) {
          temp += A[(b + ar) - 1] * B[(b + br) + 1];
        }

        C[ic - 1] += temp;
        ar += 262;
      }

      br += 262;
    }
  }
}
