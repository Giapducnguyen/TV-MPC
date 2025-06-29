#include "rtwtypes.h"
#include "xgeqrf_8kBIgRNK.h"
#include "mwmathutil.h"
#include "qrf_vHFlHsLl.h"

void xgeqrf_8kBIgRNK(real_T A[203401], int32_T m, int32_T n, real_T tau[451])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 451; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 451; i++) {
      tau[i] = 0.0;
    }

    qrf_vHFlHsLl(A, m, n, minmn, tau);
  }
}
