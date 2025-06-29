#include "rtwtypes.h"
#include "xgeqrf_bjxCu052.h"
#include "mwmathutil.h"
#include "qrf_AOtC5hpj.h"

void xgeqrf_bjxCu052(real_T A[109561], int32_T m, int32_T n, real_T tau[331])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 331; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 331; i++) {
      tau[i] = 0.0;
    }

    qrf_AOtC5hpj(A, m, n, minmn, tau);
  }
}
