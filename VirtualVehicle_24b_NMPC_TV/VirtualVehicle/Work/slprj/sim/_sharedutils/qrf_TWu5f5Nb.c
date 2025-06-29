#include "rtwtypes.h"
#include "qrf_TWu5f5Nb.h"
#include "xzlarfg_hKzCK8pt.h"
#include "xzlarf_feWYZRq1.h"

void qrf_TWu5f5Nb(real_T A[251001], int32_T m, int32_T n, int32_T nfxd, real_T
                  tau[501])
{
  real_T work[501];
  real_T b_atmp;
  real_T tau_p;
  int32_T b;
  int32_T i;
  int32_T ii;
  int32_T mmi;
  for (i = 0; i < 501; i++) {
    work[i] = 0.0;
  }

  b = (uint16_T)nfxd;
  for (i = 0; i < b; i++) {
    ii = i * 501 + i;
    mmi = m - i;
    if (i + 1 < m) {
      b_atmp = A[ii];
      tau_p = xzlarfg_hKzCK8pt(mmi, &b_atmp, A, ii + 2);
      tau[i] = tau_p;
      A[ii] = b_atmp;
    } else {
      tau_p = 0.0;
      tau[i] = 0.0;
    }

    if (i + 1 < n) {
      b_atmp = A[ii];
      A[ii] = 1.0;
      xzlarf_feWYZRq1(mmi, (n - i) - 1, ii + 1, tau_p, A, ii + 502, work);
      A[ii] = b_atmp;
    }
  }
}
