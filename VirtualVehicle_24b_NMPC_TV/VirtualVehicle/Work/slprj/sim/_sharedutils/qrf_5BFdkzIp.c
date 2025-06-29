#include "rtwtypes.h"
#include "qrf_5BFdkzIp.h"
#include "xzlarfg_0u35kHr1.h"
#include "xzlarf_MnJxZ1v5.h"

void qrf_5BFdkzIp(real_T A[130321], int32_T m, int32_T n, int32_T nfxd, real_T
                  tau[361])
{
  real_T work[361];
  real_T b_atmp;
  real_T tau_p;
  int32_T b;
  int32_T i;
  int32_T ii;
  int32_T mmi;
  for (i = 0; i < 361; i++) {
    work[i] = 0.0;
  }

  b = (uint16_T)nfxd;
  for (i = 0; i < b; i++) {
    ii = i * 361 + i;
    mmi = m - i;
    if (i + 1 < m) {
      b_atmp = A[ii];
      tau_p = xzlarfg_0u35kHr1(mmi, &b_atmp, A, ii + 2);
      tau[i] = tau_p;
      A[ii] = b_atmp;
    } else {
      tau_p = 0.0;
      tau[i] = 0.0;
    }

    if (i + 1 < n) {
      b_atmp = A[ii];
      A[ii] = 1.0;
      xzlarf_MnJxZ1v5(mmi, (n - i) - 1, ii + 1, tau_p, A, ii + 362, work);
      A[ii] = b_atmp;
    }
  }
}
