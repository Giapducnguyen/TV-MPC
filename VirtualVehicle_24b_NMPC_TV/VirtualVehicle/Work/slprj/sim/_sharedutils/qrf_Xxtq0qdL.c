#include "rtwtypes.h"
#include "qrf_Xxtq0qdL.h"
#include "xzlarfg_cv3e6omg.h"
#include "xzlarf_il2XDjhQ.h"

void qrf_Xxtq0qdL(real_T A[68644], int32_T m, int32_T n, int32_T nfxd, real_T
                  tau[262])
{
  real_T work[262];
  real_T b_atmp;
  real_T tau_p;
  int32_T b;
  int32_T i;
  int32_T ii;
  int32_T mmi;
  for (i = 0; i < 262; i++) {
    work[i] = 0.0;
  }

  b = (uint16_T)nfxd;
  for (i = 0; i < b; i++) {
    ii = i * 262 + i;
    mmi = m - i;
    if (i + 1 < m) {
      b_atmp = A[ii];
      tau_p = xzlarfg_cv3e6omg(mmi, &b_atmp, A, ii + 2);
      tau[i] = tau_p;
      A[ii] = b_atmp;
    } else {
      tau_p = 0.0;
      tau[i] = 0.0;
    }

    if (i + 1 < n) {
      b_atmp = A[ii];
      A[ii] = 1.0;
      xzlarf_il2XDjhQ(mmi, (n - i) - 1, ii + 1, tau_p, A, ii + 263, work);
      A[ii] = b_atmp;
    }
  }
}
