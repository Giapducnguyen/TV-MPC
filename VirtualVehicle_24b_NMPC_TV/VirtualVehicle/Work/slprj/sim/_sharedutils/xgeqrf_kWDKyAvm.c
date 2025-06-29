#include "rtwtypes.h"
#include "xgeqrf_kWDKyAvm.h"
#include "mwmathutil.h"
#include "qrf_985x6CVi.h"

void xgeqrf_kWDKyAvm(real_T A[158404], int32_T m, int32_T n, real_T tau[398])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 398; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 398; i++) {
      tau[i] = 0.0;
    }

    qrf_985x6CVi(A, m, n, minmn, tau);
  }
}
