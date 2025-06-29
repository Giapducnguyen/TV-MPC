#include "rtwtypes.h"
#include "xgemm_XNoVT0Nv.h"

void xgemm_XNoVT0Nv(int32_T m, int32_T n, int32_T k, const real_T A[70225],
                    int32_T ia0, const real_T B[37895], real_T C[70225])
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
    lastColC = (n - 1) * 265;
    for (cr = 0; cr <= lastColC; cr += 265) {
      b = cr + m;
      for (ic = cr + 1; ic <= b; ic++) {
        C[ic - 1] = 0.0;
      }
    }

    br = -1;
    for (cr = 0; cr <= lastColC; cr += 265) {
      ar = ia0;
      c = cr + m;
      for (ic = cr + 1; ic <= c; ic++) {
        temp = 0.0;
        for (b = 0; b < k; b++) {
          temp += A[(b + ar) - 1] * B[(b + br) + 1];
        }

        C[ic - 1] += temp;
        ar += 265;
      }

      br += 265;
    }
  }
}
