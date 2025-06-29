#include "rtwtypes.h"
#include "xgeqrf_wTrKJEgo.h"
#include "mwmathutil.h"
#include "qrf_XKTtIJ9Y.h"

void xgeqrf_wTrKJEgo(real_T A[133225], int32_T m, int32_T n, real_T tau[365])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 365; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 365; i++) {
      tau[i] = 0.0;
    }

    qrf_XKTtIJ9Y(A, m, n, minmn, tau);
  }
}
