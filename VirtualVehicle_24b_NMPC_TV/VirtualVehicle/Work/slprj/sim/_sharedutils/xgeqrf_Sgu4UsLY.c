#include "rtwtypes.h"
#include "xgeqrf_Sgu4UsLY.h"
#include "mwmathutil.h"
#include "qrf_5SBWohiE.h"

void xgeqrf_Sgu4UsLY(real_T A[93025], int32_T m, int32_T n, real_T tau[305])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 305; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 305; i++) {
      tau[i] = 0.0;
    }

    qrf_5SBWohiE(A, m, n, minmn, tau);
  }
}
