#include "rtwtypes.h"
#include "xgeqrf_OlfEYP3b.h"
#include "mwmathutil.h"
#include "qrf_6thiDZN2.h"

void xgeqrf_OlfEYP3b(real_T A[168100], int32_T m, int32_T n, real_T tau[410])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 410; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 410; i++) {
      tau[i] = 0.0;
    }

    qrf_6thiDZN2(A, m, n, minmn, tau);
  }
}
