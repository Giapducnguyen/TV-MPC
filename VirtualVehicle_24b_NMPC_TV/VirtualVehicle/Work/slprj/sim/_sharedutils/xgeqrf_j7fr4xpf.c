#include "rtwtypes.h"
#include "xgeqrf_j7fr4xpf.h"
#include "mwmathutil.h"
#include "qrf_fzIySwxV.h"

void xgeqrf_j7fr4xpf(real_T A[58081], int32_T m, int32_T n, real_T tau[241])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 241; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 241; i++) {
      tau[i] = 0.0;
    }

    qrf_fzIySwxV(A, m, n, minmn, tau);
  }
}
