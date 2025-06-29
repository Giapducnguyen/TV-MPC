#include "rtwtypes.h"
#include "xgeqrf_lJNhN7EI.h"
#include "mwmathutil.h"
#include "qrf_i5OpfCCo.h"

void xgeqrf_lJNhN7EI(real_T A[84681], int32_T m, int32_T n, real_T tau[291])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 291; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 291; i++) {
      tau[i] = 0.0;
    }

    qrf_i5OpfCCo(A, m, n, minmn, tau);
  }
}
