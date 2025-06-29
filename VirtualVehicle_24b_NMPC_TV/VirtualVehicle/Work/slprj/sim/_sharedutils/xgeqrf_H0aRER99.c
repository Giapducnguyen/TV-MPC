#include "rtwtypes.h"
#include "xgeqrf_H0aRER99.h"
#include "mwmathutil.h"
#include "qrf_Z7zauVqz.h"

void xgeqrf_H0aRER99(real_T A[103041], int32_T m, int32_T n, real_T tau[321])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 321; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 321; i++) {
      tau[i] = 0.0;
    }

    qrf_Z7zauVqz(A, m, n, minmn, tau);
  }
}
