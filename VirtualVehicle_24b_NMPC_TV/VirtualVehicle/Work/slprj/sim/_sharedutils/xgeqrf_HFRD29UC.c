#include "rtwtypes.h"
#include "xgeqrf_HFRD29UC.h"
#include "mwmathutil.h"
#include "qrf_5BFdkzIp.h"

void xgeqrf_HFRD29UC(real_T A[130321], int32_T m, int32_T n, real_T tau[361])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 361; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 361; i++) {
      tau[i] = 0.0;
    }

    qrf_5BFdkzIp(A, m, n, minmn, tau);
  }
}
