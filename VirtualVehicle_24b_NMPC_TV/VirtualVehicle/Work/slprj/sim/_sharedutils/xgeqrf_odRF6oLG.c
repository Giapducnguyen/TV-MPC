#include "rtwtypes.h"
#include "xgeqrf_odRF6oLG.h"
#include "mwmathutil.h"
#include "qrf_6g9wSNq3.h"

void xgeqrf_odRF6oLG(real_T A[106929], int32_T m, int32_T n, real_T tau[327])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 327; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 327; i++) {
      tau[i] = 0.0;
    }

    qrf_6g9wSNq3(A, m, n, minmn, tau);
  }
}
