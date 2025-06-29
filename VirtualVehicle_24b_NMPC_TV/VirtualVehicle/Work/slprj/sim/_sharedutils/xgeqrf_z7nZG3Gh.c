#include "rtwtypes.h"
#include "xgeqrf_z7nZG3Gh.h"
#include "mwmathutil.h"
#include "qrf_keGxAojN.h"

void xgeqrf_z7nZG3Gh(real_T A[88209], int32_T m, int32_T n, real_T tau[297])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 297; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 297; i++) {
      tau[i] = 0.0;
    }

    qrf_keGxAojN(A, m, n, minmn, tau);
  }
}
