#include "rtwtypes.h"
#include "qrf_985x6CVi.h"
#include "xzlarfg_c9SUVGBS.h"
#include "xzlarf_Iq1ZPobN.h"

void qrf_985x6CVi(real_T A[158404], int32_T m, int32_T n, int32_T nfxd, real_T
                  tau[398])
{
  real_T work[398];
  real_T b_atmp;
  real_T tau_p;
  int32_T b;
  int32_T i;
  int32_T ii;
  int32_T mmi;
  for (i = 0; i < 398; i++) {
    work[i] = 0.0;
  }

  b = (uint16_T)nfxd;
  for (i = 0; i < b; i++) {
    ii = i * 398 + i;
    mmi = m - i;
    if (i + 1 < m) {
      b_atmp = A[ii];
      tau_p = xzlarfg_c9SUVGBS(mmi, &b_atmp, A, ii + 2);
      tau[i] = tau_p;
      A[ii] = b_atmp;
    } else {
      tau_p = 0.0;
      tau[i] = 0.0;
    }

    if (i + 1 < n) {
      b_atmp = A[ii];
      A[ii] = 1.0;
      xzlarf_Iq1ZPobN(mmi, (n - i) - 1, ii + 1, tau_p, A, ii + 399, work);
      A[ii] = b_atmp;
    }
  }
}
