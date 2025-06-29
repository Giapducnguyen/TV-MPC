#include "rtwtypes.h"
#include "xgeqrf_a0afj5Ru.h"
#include "mwmathutil.h"
#include "qrf_Cr275T68.h"

void xgeqrf_a0afj5Ru(real_T A[160801], int32_T m, int32_T n, real_T tau[401])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 401; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 401; i++) {
      tau[i] = 0.0;
    }

    qrf_Cr275T68(A, m, n, minmn, tau);
  }
}
