#include "rtwtypes.h"
#include "xgeqrf_UuNrF3i4.h"
#include "mwmathutil.h"
#include "qrf_XMH2Lewn.h"

void xgeqrf_UuNrF3i4(real_T A[85849], int32_T m, int32_T n, real_T tau[293])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 293; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 293; i++) {
      tau[i] = 0.0;
    }

    qrf_XMH2Lewn(A, m, n, minmn, tau);
  }
}
