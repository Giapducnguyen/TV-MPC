#include "rtwtypes.h"
#include "xgeqrf_03j86pLT.h"
#include "mwmathutil.h"
#include "qrf_qF3AH3gh.h"

void xgeqrf_03j86pLT(real_T A[181476], int32_T m, int32_T n, real_T tau[426])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 426; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 426; i++) {
      tau[i] = 0.0;
    }

    qrf_qF3AH3gh(A, m, n, minmn, tau);
  }
}
