#include "rtwtypes.h"
#include "xgeqrf_ONkeWLRy.h"
#include "mwmathutil.h"
#include "qrf_TWu5f5Nb.h"

void xgeqrf_ONkeWLRy(real_T A[251001], int32_T m, int32_T n, real_T tau[501])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 501; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 501; i++) {
      tau[i] = 0.0;
    }

    qrf_TWu5f5Nb(A, m, n, minmn, tau);
  }
}
