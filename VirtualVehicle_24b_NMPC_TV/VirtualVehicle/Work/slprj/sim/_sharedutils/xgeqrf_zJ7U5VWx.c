#include "rtwtypes.h"
#include "xgeqrf_zJ7U5VWx.h"
#include "mwmathutil.h"
#include "qrf_ys5Slopk.h"

void xgeqrf_zJ7U5VWx(real_T A[51529], int32_T m, int32_T n, real_T tau[227])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 227; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 227; i++) {
      tau[i] = 0.0;
    }

    qrf_ys5Slopk(A, m, n, minmn, tau);
  }
}
