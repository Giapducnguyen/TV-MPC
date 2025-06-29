#include "rtwtypes.h"
#include "xgeqrf_1MipiXVq.h"
#include "mwmathutil.h"
#include "qrf_EVbt1mbf.h"

void xgeqrf_1MipiXVq(real_T A[103684], int32_T m, int32_T n, real_T tau[322])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 322; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 322; i++) {
      tau[i] = 0.0;
    }

    qrf_EVbt1mbf(A, m, n, minmn, tau);
  }
}
