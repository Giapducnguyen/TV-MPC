#include "rtwtypes.h"
#include "xgeqrf_OLwKkcBm.h"
#include "mwmathutil.h"
#include "qrf_kR0USoFI.h"

void xgeqrf_OLwKkcBm(real_T A[60516], int32_T m, int32_T n, real_T tau[246])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 246; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 246; i++) {
      tau[i] = 0.0;
    }

    qrf_kR0USoFI(A, m, n, minmn, tau);
  }
}
