#include "rtwtypes.h"
#include "xgeqrf_ftftLrFS.h"
#include "mwmathutil.h"
#include "qrf_8TSzG9wp.h"

void xgeqrf_ftftLrFS(real_T A[231361], int32_T m, int32_T n, real_T tau[481])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 481; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 481; i++) {
      tau[i] = 0.0;
    }

    qrf_8TSzG9wp(A, m, n, minmn, tau);
  }
}
