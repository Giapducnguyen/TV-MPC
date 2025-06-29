#include "rtwtypes.h"
#include "xgeqrf_nZbMwlZH.h"
#include "mwmathutil.h"
#include "qrf_0WwcLqYx.h"

void xgeqrf_nZbMwlZH(real_T A[131769], int32_T m, int32_T n, real_T tau[363])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 363; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 363; i++) {
      tau[i] = 0.0;
    }

    qrf_0WwcLqYx(A, m, n, minmn, tau);
  }
}
