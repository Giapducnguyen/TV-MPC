#include "rtwtypes.h"
#include "xgeqrf_8mNNEoxQ.h"
#include "mwmathutil.h"
#include "qrf_kAHBq4Z3.h"

void xgeqrf_8mNNEoxQ(real_T A[67600], int32_T m, int32_T n, real_T tau[260])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 260; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 260; i++) {
      tau[i] = 0.0;
    }

    qrf_kAHBq4Z3(A, m, n, minmn, tau);
  }
}
