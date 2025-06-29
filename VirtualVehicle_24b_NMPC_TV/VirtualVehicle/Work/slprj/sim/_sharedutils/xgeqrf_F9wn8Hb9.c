#include "rtwtypes.h"
#include "xgeqrf_F9wn8Hb9.h"
#include "mwmathutil.h"
#include "qrf_dVjkUEPW.h"

void xgeqrf_F9wn8Hb9(real_T A[145161], int32_T m, int32_T n, real_T tau[381])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 381; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 381; i++) {
      tau[i] = 0.0;
    }

    qrf_dVjkUEPW(A, m, n, minmn, tau);
  }
}
