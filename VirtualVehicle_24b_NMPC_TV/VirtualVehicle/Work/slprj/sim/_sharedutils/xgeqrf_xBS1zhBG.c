#include "rtwtypes.h"
#include "xgeqrf_xBS1zhBG.h"
#include "mwmathutil.h"
#include "qrf_XFAieeb0.h"

void xgeqrf_xBS1zhBG(real_T A[63001], int32_T m, int32_T n, real_T tau[251])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 251; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 251; i++) {
      tau[i] = 0.0;
    }

    qrf_XFAieeb0(A, m, n, minmn, tau);
  }
}
