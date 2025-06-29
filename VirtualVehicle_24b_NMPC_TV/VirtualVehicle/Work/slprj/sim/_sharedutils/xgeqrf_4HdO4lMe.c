#include "rtwtypes.h"
#include "xgeqrf_4HdO4lMe.h"
#include "mwmathutil.h"
#include "qrf_vrXeUHJP.h"

void xgeqrf_4HdO4lMe(real_T A[113569], int32_T m, int32_T n, real_T tau[337])
{
  int32_T i;
  int32_T minmn;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 337; i++) {
    tau[i] = 0.0;
  }

  if (minmn >= 1) {
    for (i = 0; i < 337; i++) {
      tau[i] = 0.0;
    }

    qrf_vrXeUHJP(A, m, n, minmn, tau);
  }
}
