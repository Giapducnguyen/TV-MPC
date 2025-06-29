#include "rtwtypes.h"
#include "xgeqrf_X8mLOu1S.h"
#include "mwmathutil.h"
#include "qrf_gBO96b4H.h"

void xgeqrf_X8mLOu1S(real_T A[90601], int32_T m, int32_T n, real_T tau[301])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 301; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 301; i++) {
      tau[i] = 0.0;
    }

    qrf_gBO96b4H(A, m, n, minmn, tau);
  }
}
