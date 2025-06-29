#include "rtwtypes.h"
#include "qrf_kR0USoFI.h"
#include "xzlarfg_6wg90Qeu.h"
#include "xzlarf_x4gO9UnR.h"

void qrf_kR0USoFI(real_T A[60516], int32_T m, int32_T n, int32_T nfxd, real_T
                  tau[246])
{
  real_T work[246];
  real_T b_atmp;
  real_T tau_p;
  int32_T b;
  int32_T i;
  int32_T ii;
  int32_T mmi;
  for (i = 0; i < 246; i++) {
    work[i] = 0.0;
  }

  b = (uint8_T)nfxd;
  for (i = 0; i < b; i++) {
    ii = i * 246 + i;
    mmi = m - i;
    if (i + 1 < m) {
      b_atmp = A[ii];
      tau_p = xzlarfg_6wg90Qeu(mmi, &b_atmp, A, ii + 2);
      tau[i] = tau_p;
      A[ii] = b_atmp;
    } else {
      tau_p = 0.0;
      tau[i] = 0.0;
    }

    if (i + 1 < n) {
      b_atmp = A[ii];
      A[ii] = 1.0;
      xzlarf_x4gO9UnR(mmi, (n - i) - 1, ii + 1, tau_p, A, ii + 247, work);
      A[ii] = b_atmp;
    }
  }
}
