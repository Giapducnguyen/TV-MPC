#include "rtwtypes.h"
#include "xgeqrf_Li8ObEkE.h"
#include "mwmathutil.h"
#include "qrf_i3yVtU3Q.h"

void xgeqrf_Li8ObEkE(real_T A[194481], int32_T m, int32_T n, real_T tau[441])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 441; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 441; i++) {
      tau[i] = 0.0;
    }

    qrf_i3yVtU3Q(A, m, n, minmn, tau);
  }
}
