#include "rtwtypes.h"
#include "xgeqrf_PnFLiWw9.h"
#include "mwmathutil.h"
#include "qrf_keBWVM91.h"

void xgeqrf_PnFLiWw9(real_T A[68121], int32_T m, int32_T n, real_T tau[261])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 261; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 261; i++) {
      tau[i] = 0.0;
    }

    qrf_keBWVM91(A, m, n, minmn, tau);
  }
}
