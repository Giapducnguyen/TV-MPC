#include "rtwtypes.h"
#include "xgeqrf_DQRSzeaZ.h"
#include "mwmathutil.h"
#include "qrf_2JHfYBns.h"

void xgeqrf_DQRSzeaZ(real_T A[105625], int32_T m, int32_T n, real_T tau[325])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 325; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 325; i++) {
      tau[i] = 0.0;
    }

    qrf_2JHfYBns(A, m, n, minmn, tau);
  }
}
