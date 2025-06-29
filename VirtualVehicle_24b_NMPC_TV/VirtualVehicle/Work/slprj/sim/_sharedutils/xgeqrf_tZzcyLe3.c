#include "rtwtypes.h"
#include "xgeqrf_tZzcyLe3.h"
#include "mwmathutil.h"
#include "qrf_3TtmELYp.h"

void xgeqrf_tZzcyLe3(real_T A[96100], int32_T m, int32_T n, real_T tau[310])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 310; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 310; i++) {
      tau[i] = 0.0;
    }

    qrf_3TtmELYp(A, m, n, minmn, tau);
  }
}
