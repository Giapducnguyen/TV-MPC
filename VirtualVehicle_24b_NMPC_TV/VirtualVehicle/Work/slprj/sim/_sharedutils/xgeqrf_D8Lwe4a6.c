#include "rtwtypes.h"
#include "xgeqrf_D8Lwe4a6.h"
#include "mwmathutil.h"
#include "qrf_5HLH4Tps.h"

void xgeqrf_D8Lwe4a6(real_T A[164836], int32_T m, int32_T n, real_T tau[406])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 406; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 406; i++) {
      tau[i] = 0.0;
    }

    qrf_5HLH4Tps(A, m, n, minmn, tau);
  }
}
