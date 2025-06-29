#include "rtwtypes.h"
#include "xgeqrf_9UHfXhGn.h"
#include "mwmathutil.h"
#include "qrf_vdotnw92.h"

void xgeqrf_9UHfXhGn(real_T A[55225], int32_T m, int32_T n, real_T tau[235])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 235; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 235; i++) {
      tau[i] = 0.0;
    }

    qrf_vdotnw92(A, m, n, minmn, tau);
  }
}
