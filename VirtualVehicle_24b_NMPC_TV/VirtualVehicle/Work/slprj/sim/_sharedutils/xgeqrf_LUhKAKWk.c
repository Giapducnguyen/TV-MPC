#include "rtwtypes.h"
#include "xgeqrf_LUhKAKWk.h"
#include "mwmathutil.h"
#include "qrf_Xxtq0qdL.h"

void xgeqrf_LUhKAKWk(real_T A[68644], int32_T m, int32_T n, real_T tau[262])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 262; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 262; i++) {
      tau[i] = 0.0;
    }

    qrf_Xxtq0qdL(A, m, n, minmn, tau);
  }
}
