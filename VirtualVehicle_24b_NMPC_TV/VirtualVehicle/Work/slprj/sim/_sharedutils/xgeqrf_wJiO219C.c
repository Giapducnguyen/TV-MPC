#include "rtwtypes.h"
#include "xgeqrf_wJiO219C.h"
#include "mwmathutil.h"
#include "qrf_TFuo5vLQ.h"

void xgeqrf_wJiO219C(real_T A[78961], int32_T m, int32_T n, real_T tau[281])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 281; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 281; i++) {
      tau[i] = 0.0;
    }

    qrf_TFuo5vLQ(A, m, n, minmn, tau);
  }
}
