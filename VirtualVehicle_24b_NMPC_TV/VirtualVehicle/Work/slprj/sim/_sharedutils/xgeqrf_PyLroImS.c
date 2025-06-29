#include "rtwtypes.h"
#include "xgeqrf_PyLroImS.h"
#include "mwmathutil.h"
#include "qrf_3DxsrLuN.h"

void xgeqrf_PyLroImS(real_T A[46225], int32_T m, int32_T n, real_T tau[215])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 215; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 215; i++) {
      tau[i] = 0.0;
    }

    qrf_3DxsrLuN(A, m, n, minmn, tau);
  }
}
