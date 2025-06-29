#include "rtwtypes.h"
#include "xgeqrf_iY3W2arT.h"
#include "mwmathutil.h"
#include "qrf_yEnKWokp.h"

void xgeqrf_iY3W2arT(real_T A[52900], int32_T m, int32_T n, real_T tau[230])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 230; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 230; i++) {
      tau[i] = 0.0;
    }

    qrf_yEnKWokp(A, m, n, minmn, tau);
  }
}
