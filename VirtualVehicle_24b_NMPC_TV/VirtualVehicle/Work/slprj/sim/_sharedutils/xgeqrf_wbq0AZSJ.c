#include "rtwtypes.h"
#include "xgeqrf_wbq0AZSJ.h"
#include "mwmathutil.h"
#include "qrf_FWOF3lLK.h"

void xgeqrf_wbq0AZSJ(real_T A[81796], int32_T m, int32_T n, real_T tau[286])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 286; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 286; i++) {
      tau[i] = 0.0;
    }

    qrf_FWOF3lLK(A, m, n, minmn, tau);
  }
}
