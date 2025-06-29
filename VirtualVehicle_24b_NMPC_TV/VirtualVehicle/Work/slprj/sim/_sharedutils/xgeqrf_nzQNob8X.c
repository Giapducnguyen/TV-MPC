#include "rtwtypes.h"
#include "xgeqrf_nzQNob8X.h"
#include "mwmathutil.h"
#include "qrf_5uyoJYoY.h"

void xgeqrf_nzQNob8X(real_T A[78400], int32_T m, int32_T n, real_T tau[280])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 280; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 280; i++) {
      tau[i] = 0.0;
    }

    qrf_5uyoJYoY(A, m, n, minmn, tau);
  }
}
