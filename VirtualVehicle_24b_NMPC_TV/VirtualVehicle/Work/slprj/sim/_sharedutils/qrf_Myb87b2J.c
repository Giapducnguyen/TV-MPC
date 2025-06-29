#include "rtwtypes.h"
#include "qrf_Myb87b2J.h"
#include "xzlarfg_ss6YNzF1.h"
#include "xzlarf_rcfudklk.h"

void qrf_Myb87b2J(real_T A[149769], int32_T m, int32_T n, int32_T nfxd, real_T
                  tau[387])
{
  real_T work[387];
  real_T b_atmp;
  real_T tau_p;
  int32_T b;
  int32_T i;
  int32_T ii;
  int32_T mmi;
  for (i = 0; i < 387; i++) {
    work[i] = 0.0;
  }

  b = (uint16_T)nfxd;
  for (i = 0; i < b; i++) {
    ii = i * 387 + i;
    mmi = m - i;
    if (i + 1 < m) {
      b_atmp = A[ii];
      tau_p = xzlarfg_ss6YNzF1(mmi, &b_atmp, A, ii + 2);
      tau[i] = tau_p;
      A[ii] = b_atmp;
    } else {
      tau_p = 0.0;
      tau[i] = 0.0;
    }

    if (i + 1 < n) {
      b_atmp = A[ii];
      A[ii] = 1.0;
      xzlarf_rcfudklk(mmi, (n - i) - 1, ii + 1, tau_p, A, ii + 388, work);
      A[ii] = b_atmp;
    }
  }
}
