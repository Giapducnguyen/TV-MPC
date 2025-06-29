#include "rtwtypes.h"
#include "xgeqrf_FqbPAqqW.h"
#include "mwmathutil.h"
#include "qrf_3sSk8Gfi.h"

void xgeqrf_FqbPAqqW(real_T A[238144], int32_T m, int32_T n, real_T tau[488])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 488; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 488; i++) {
      tau[i] = 0.0;
    }

    qrf_3sSk8Gfi(A, m, n, minmn, tau);
  }
}
