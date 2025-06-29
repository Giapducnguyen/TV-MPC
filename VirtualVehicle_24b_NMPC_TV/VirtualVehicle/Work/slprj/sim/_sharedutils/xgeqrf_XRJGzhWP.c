#include "rtwtypes.h"
#include "xgeqrf_XRJGzhWP.h"
#include "mwmathutil.h"
#include "qrf_DLmQamM4.h"

void xgeqrf_XRJGzhWP(real_T A[48841], int32_T m, int32_T n, real_T tau[221])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 221; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 221; i++) {
      tau[i] = 0.0;
    }

    qrf_DLmQamM4(A, m, n, minmn, tau);
  }
}
