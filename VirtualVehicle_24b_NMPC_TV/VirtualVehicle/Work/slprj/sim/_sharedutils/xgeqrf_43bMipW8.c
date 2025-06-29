#include "rtwtypes.h"
#include "xgeqrf_43bMipW8.h"
#include "mwmathutil.h"
#include "qrf_fkt4Dj8i.h"

void xgeqrf_43bMipW8(real_T A[138384], int32_T m, int32_T n, real_T tau[372])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 372; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 372; i++) {
      tau[i] = 0.0;
    }

    qrf_fkt4Dj8i(A, m, n, minmn, tau);
  }
}
