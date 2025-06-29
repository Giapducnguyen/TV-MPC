#include "rtwtypes.h"
#include "xgeqrf_w450nhIg.h"
#include "mwmathutil.h"
#include "qrf_gvoIdq4H.h"

void xgeqrf_w450nhIg(real_T A[207936], int32_T m, int32_T n, real_T tau[456])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 456; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 456; i++) {
      tau[i] = 0.0;
    }

    qrf_gvoIdq4H(A, m, n, minmn, tau);
  }
}
