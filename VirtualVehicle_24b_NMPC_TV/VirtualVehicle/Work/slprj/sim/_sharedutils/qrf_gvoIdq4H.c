#include "rtwtypes.h"
#include "qrf_gvoIdq4H.h"
#include "xzlarfg_N199nf5r.h"
#include "xzlarf_SI0ZVPBk.h"

void qrf_gvoIdq4H(real_T A[207936], int32_T m, int32_T n, int32_T nfxd, real_T
                  tau[456])
{
  real_T work[456];
  real_T b_atmp;
  real_T tau_p;
  int32_T b;
  int32_T i;
  int32_T ii;
  int32_T mmi;
  for (i = 0; i < 456; i++) {
    work[i] = 0.0;
  }

  b = (uint16_T)nfxd;
  for (i = 0; i < b; i++) {
    ii = i * 456 + i;
    mmi = m - i;
    if (i + 1 < m) {
      b_atmp = A[ii];
      tau_p = xzlarfg_N199nf5r(mmi, &b_atmp, A, ii + 2);
      tau[i] = tau_p;
      A[ii] = b_atmp;
    } else {
      tau_p = 0.0;
      tau[i] = 0.0;
    }

    if (i + 1 < n) {
      b_atmp = A[ii];
      A[ii] = 1.0;
      xzlarf_SI0ZVPBk(mmi, (n - i) - 1, ii + 1, tau_p, A, ii + 457, work);
      A[ii] = b_atmp;
    }
  }
}
