#include "rtwtypes.h"
#include "xgeqrf_ZuGP5tKE.h"
#include "mwmathutil.h"
#include "qrf_WWC7o9pw.h"

void xgeqrf_ZuGP5tKE(real_T A[147456], int32_T m, int32_T n, real_T tau[384])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 384; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 384; i++) {
      tau[i] = 0.0;
    }

    qrf_WWC7o9pw(A, m, n, minmn, tau);
  }
}
