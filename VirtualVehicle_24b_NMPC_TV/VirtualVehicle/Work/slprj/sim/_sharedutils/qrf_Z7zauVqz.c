#include "rtwtypes.h"
#include "qrf_Z7zauVqz.h"
#include "xzlarfg_8KPPUS2A.h"
#include "xzlarf_50ZLP38J.h"

void qrf_Z7zauVqz(real_T A[103041], int32_T m, int32_T n, int32_T nfxd, real_T
                  tau[321])
{
  real_T work[321];
  real_T b_atmp;
  real_T tau_p;
  int32_T b;
  int32_T i;
  int32_T ii;
  int32_T mmi;
  for (i = 0; i < 321; i++) {
    work[i] = 0.0;
  }

  b = (uint16_T)nfxd;
  for (i = 0; i < b; i++) {
    ii = i * 321 + i;
    mmi = m - i;
    if (i + 1 < m) {
      b_atmp = A[ii];
      tau_p = xzlarfg_8KPPUS2A(mmi, &b_atmp, A, ii + 2);
      tau[i] = tau_p;
      A[ii] = b_atmp;
    } else {
      tau_p = 0.0;
      tau[i] = 0.0;
    }

    if (i + 1 < n) {
      b_atmp = A[ii];
      A[ii] = 1.0;
      xzlarf_50ZLP38J(mmi, (n - i) - 1, ii + 1, tau_p, A, ii + 322, work);
      A[ii] = b_atmp;
    }
  }
}
