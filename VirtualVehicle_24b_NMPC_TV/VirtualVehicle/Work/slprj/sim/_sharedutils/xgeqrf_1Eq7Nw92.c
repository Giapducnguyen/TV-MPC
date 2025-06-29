#include "rtwtypes.h"
#include "xgeqrf_1Eq7Nw92.h"
#include "mwmathutil.h"
#include "qrf_OnqVUELB.h"

void xgeqrf_1Eq7Nw92(real_T A[116964], int32_T m, int32_T n, real_T tau[342])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 342; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 342; i++) {
      tau[i] = 0.0;
    }

    qrf_OnqVUELB(A, m, n, minmn, tau);
  }
}
