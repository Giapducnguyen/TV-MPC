#include "rtwtypes.h"
#include "qrf_XKTtIJ9Y.h"
#include "xzlarfg_9LKFX4mB.h"
#include "xzlarf_WublgWOv.h"

void qrf_XKTtIJ9Y(real_T A[133225], int32_T m, int32_T n, int32_T nfxd, real_T
                  tau[365])
{
  real_T work[365];
  real_T b_atmp;
  real_T tau_p;
  int32_T b;
  int32_T i;
  int32_T ii;
  int32_T mmi;
  for (i = 0; i < 365; i++) {
    work[i] = 0.0;
  }

  b = (uint16_T)nfxd;
  for (i = 0; i < b; i++) {
    ii = i * 365 + i;
    mmi = m - i;
    if (i + 1 < m) {
      b_atmp = A[ii];
      tau_p = xzlarfg_9LKFX4mB(mmi, &b_atmp, A, ii + 2);
      tau[i] = tau_p;
      A[ii] = b_atmp;
    } else {
      tau_p = 0.0;
      tau[i] = 0.0;
    }

    if (i + 1 < n) {
      b_atmp = A[ii];
      A[ii] = 1.0;
      xzlarf_WublgWOv(mmi, (n - i) - 1, ii + 1, tau_p, A, ii + 366, work);
      A[ii] = b_atmp;
    }
  }
}
