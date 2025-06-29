#include "rtwtypes.h"
#include "xgeqrf_JieSdO0c.h"
#include "mwmathutil.h"
#include "qrf_tXzhlyXa.h"

void xgeqrf_JieSdO0c(real_T A[206116], int32_T m, int32_T n, real_T tau[454])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 454; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 454; i++) {
      tau[i] = 0.0;
    }

    qrf_tXzhlyXa(A, m, n, minmn, tau);
  }
}
