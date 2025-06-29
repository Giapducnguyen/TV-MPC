#include "rtwtypes.h"
#include "xgeqrf_zN6LE3bL.h"
#include "mwmathutil.h"
#include "qrf_gwIkm5h8.h"

void xgeqrf_zN6LE3bL(real_T A[53361], int32_T m, int32_T n, real_T tau[231])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 231; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 231; i++) {
      tau[i] = 0.0;
    }

    qrf_gwIkm5h8(A, m, n, minmn, tau);
  }
}
