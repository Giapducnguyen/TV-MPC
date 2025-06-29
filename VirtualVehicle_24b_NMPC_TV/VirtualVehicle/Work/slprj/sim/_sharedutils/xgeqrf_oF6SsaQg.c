#include "rtwtypes.h"
#include "xgeqrf_oF6SsaQg.h"
#include "mwmathutil.h"
#include "qrf_pbaSVEaV.h"

void xgeqrf_oF6SsaQg(real_T A[94249], int32_T m, int32_T n, real_T tau[307])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 307; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 307; i++) {
      tau[i] = 0.0;
    }

    qrf_pbaSVEaV(A, m, n, minmn, tau);
  }
}
