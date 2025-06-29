#include "rtwtypes.h"
#include "xgeqrf_2GdL9bJU.h"
#include "mwmathutil.h"
#include "qrf_l83hOs9S.h"

void xgeqrf_2GdL9bJU(real_T A[129600], int32_T m, int32_T n, real_T tau[360])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 360; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 360; i++) {
      tau[i] = 0.0;
    }

    qrf_l83hOs9S(A, m, n, minmn, tau);
  }
}
