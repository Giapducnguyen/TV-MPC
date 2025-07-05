#include "rtwtypes.h"
#include "xgerc_Ou2Qim6i.h"

void xgerc_Ou2Qim6i(int32_T m, int32_T n, real_T alpha1, int32_T ix0, const
                    real_T y[40], real_T A[1600], int32_T ia0)
{
  real_T temp;
  int32_T b;
  int32_T c;
  int32_T ijA;
  int32_T j;
  int32_T jA;
  if (!(alpha1 == 0.0)) {
    jA = ia0;
    b = (uint8_T)n - 1;
    for (j = 0; j <= b; j++) {
      temp = y[j];
      if (temp != 0.0) {
        temp *= alpha1;
        c = (m + jA) - 1;
        for (ijA = jA; ijA <= c; ijA++) {
          A[ijA - 1] += A[((ix0 + ijA) - jA) - 1] * temp;
        }
      }

      jA += 40;
    }
  }
}
