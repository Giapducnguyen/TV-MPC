#include "rtwtypes.h"
#include "xgeqrf_QVHIfH8p.h"
#include "mwmathutil.h"
#include "qrf_bzZoMzsq.h"

void xgeqrf_QVHIfH8p(real_T A[91809], int32_T m, int32_T n, real_T tau[303])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 303; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 303; i++) {
      tau[i] = 0.0;
    }

    qrf_bzZoMzsq(A, m, n, minmn, tau);
  }
}
