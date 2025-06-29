#include "rtwtypes.h"
#include "xgeqrf_L38Q2JOz.h"
#include "mwmathutil.h"
#include "qrf_QtEMefxL.h"

void xgeqrf_L38Q2JOz(real_T A[70225], int32_T m, int32_T n, real_T tau[265])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 265; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 265; i++) {
      tau[i] = 0.0;
    }

    qrf_QtEMefxL(A, m, n, minmn, tau);
  }
}
