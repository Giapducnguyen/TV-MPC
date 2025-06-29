#include "rtwtypes.h"
#include "xgeqrf_x31MYqKn.h"
#include "mwmathutil.h"
#include "qrf_07FRYnzA.h"

void xgeqrf_x31MYqKn(real_T A[110224], int32_T m, int32_T n, real_T tau[332])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 332; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 332; i++) {
      tau[i] = 0.0;
    }

    qrf_07FRYnzA(A, m, n, minmn, tau);
  }
}
