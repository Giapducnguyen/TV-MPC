#include "rtwtypes.h"
#include "xgeqrf_SaYHt1Ay.h"
#include "mwmathutil.h"
#include "qrf_Myb87b2J.h"

void xgeqrf_SaYHt1Ay(real_T A[149769], int32_T m, int32_T n, real_T tau[387])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 387; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 387; i++) {
      tau[i] = 0.0;
    }

    qrf_Myb87b2J(A, m, n, minmn, tau);
  }
}
