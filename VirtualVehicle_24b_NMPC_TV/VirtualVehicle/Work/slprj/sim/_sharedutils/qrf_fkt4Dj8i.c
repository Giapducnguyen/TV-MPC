#include "rtwtypes.h"
#include "qrf_fkt4Dj8i.h"
#include "xzlarfg_dg9VfhtX.h"
#include "xzlarf_QqOy2TPp.h"

void qrf_fkt4Dj8i(real_T A[138384], int32_T m, int32_T n, int32_T nfxd, real_T
                  tau[372])
{
  real_T work[372];
  real_T b_atmp;
  real_T tau_p;
  int32_T b;
  int32_T i;
  int32_T ii;
  int32_T mmi;
  for (i = 0; i < 372; i++) {
    work[i] = 0.0;
  }

  b = (uint16_T)nfxd;
  for (i = 0; i < b; i++) {
    ii = i * 372 + i;
    mmi = m - i;
    if (i + 1 < m) {
      b_atmp = A[ii];
      tau_p = xzlarfg_dg9VfhtX(mmi, &b_atmp, A, ii + 2);
      tau[i] = tau_p;
      A[ii] = b_atmp;
    } else {
      tau_p = 0.0;
      tau[i] = 0.0;
    }

    if (i + 1 < n) {
      b_atmp = A[ii];
      A[ii] = 1.0;
      xzlarf_QqOy2TPp(mmi, (n - i) - 1, ii + 1, tau_p, A, ii + 373, work);
      A[ii] = b_atmp;
    }
  }
}
