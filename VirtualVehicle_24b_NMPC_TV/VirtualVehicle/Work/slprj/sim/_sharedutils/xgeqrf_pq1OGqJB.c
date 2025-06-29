#include "rtwtypes.h"
#include "xgeqrf_pq1OGqJB.h"
#include "mwmathutil.h"
#include "qrf_6qn7vctM.h"

void xgeqrf_pq1OGqJB(real_T A[74529], int32_T m, int32_T n, real_T tau[273])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 273; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 273; i++) {
      tau[i] = 0.0;
    }

    qrf_6qn7vctM(A, m, n, minmn, tau);
  }
}
