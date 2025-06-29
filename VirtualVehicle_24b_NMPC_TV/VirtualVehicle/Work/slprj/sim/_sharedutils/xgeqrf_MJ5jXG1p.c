#include "rtwtypes.h"
#include "xgeqrf_MJ5jXG1p.h"
#include "mwmathutil.h"
#include "qrf_opiAyBm9.h"

void xgeqrf_MJ5jXG1p(real_T A[116281], int32_T m, int32_T n, real_T tau[341])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 341; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 341; i++) {
      tau[i] = 0.0;
    }

    qrf_opiAyBm9(A, m, n, minmn, tau);
  }
}
