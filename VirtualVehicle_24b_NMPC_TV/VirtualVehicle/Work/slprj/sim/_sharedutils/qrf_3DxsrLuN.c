#include "rtwtypes.h"
#include "qrf_3DxsrLuN.h"
#include "xzlarfg_us3aCk4f.h"
#include "xzlarf_Zx8Xn7zO.h"

void qrf_3DxsrLuN(real_T A[46225], int32_T m, int32_T n, int32_T nfxd, real_T
                  tau[215])
{
  real_T work[215];
  real_T b_atmp;
  real_T tau_p;
  int32_T b;
  int32_T i;
  int32_T ii;
  int32_T mmi;
  for (i = 0; i < 215; i++) {
    work[i] = 0.0;
  }

  b = (uint8_T)nfxd;
  for (i = 0; i < b; i++) {
    ii = i * 215 + i;
    mmi = m - i;
    if (i + 1 < m) {
      b_atmp = A[ii];
      tau_p = xzlarfg_us3aCk4f(mmi, &b_atmp, A, ii + 2);
      tau[i] = tau_p;
      A[ii] = b_atmp;
    } else {
      tau_p = 0.0;
      tau[i] = 0.0;
    }

    if (i + 1 < n) {
      b_atmp = A[ii];
      A[ii] = 1.0;
      xzlarf_Zx8Xn7zO(mmi, (n - i) - 1, ii + 1, tau_p, A, ii + 216, work);
      A[ii] = b_atmp;
    }
  }
}
