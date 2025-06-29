#include "rtwtypes.h"
#include "xgeqrf_IxGKL9VB.h"
#include "mwmathutil.h"
#include "qrf_BxUQew9H.h"

void xgeqrf_IxGKL9VB(real_T A[123201], int32_T m, int32_T n, real_T tau[351])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 351; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 351; i++) {
      tau[i] = 0.0;
    }

    qrf_BxUQew9H(A, m, n, minmn, tau);
  }
}
