#include "rtwtypes.h"
#include "qrpf_Jd27Gkp2.h"
#include "mwmathutil.h"
#include "xnrm2_zAqcIPBY.h"
#include "xswap_rEhcWv0U.h"
#include "xzlarfg_OCD6Z2g2.h"
#include "xzlarf_VugcnE6M.h"

void qrpf_Jd27Gkp2(real_T A[147456], int32_T m, int32_T n, int32_T nfxd, real_T
                   tau[384], int32_T jpvt[384])
{
  real_T vn1[384];
  real_T vn2[384];
  real_T work[384];
  real_T s;
  real_T smax;
  real_T vn1_p;
  int32_T i;
  int32_T ii;
  int32_T ii_tmp;
  int32_T itemp;
  int32_T minmn;
  int32_T mmi;
  int32_T nmi;
  int32_T pvt;
  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 384; i++) {
    work[i] = 0.0;
    vn1[i] = 0.0;
    vn2[i] = 0.0;
  }

  for (i = nfxd + 1; i <= n; i++) {
    vn1_p = xnrm2_zAqcIPBY(m - nfxd, A, ((i - 1) * 384 + nfxd) + 1);
    vn1[i - 1] = vn1_p;
    vn2[i - 1] = vn1_p;
  }

  for (i = nfxd + 1; i <= minmn; i++) {
    ii_tmp = (i - 1) * 384;
    ii = (ii_tmp + i) - 1;
    nmi = n - i;
    mmi = m - i;
    if (nmi + 1 < 1) {
      itemp = -2;
    } else {
      itemp = -1;
      if (nmi + 1 > 1) {
        smax = muDoubleScalarAbs(vn1[i - 1]);
        for (pvt = 2; pvt <= nmi + 1; pvt++) {
          s = muDoubleScalarAbs(vn1[(i + pvt) - 2]);
          if (s > smax) {
            itemp = pvt - 2;
            smax = s;
          }
        }
      }
    }

    pvt = i + itemp;
    if (pvt + 1 != i) {
      xswap_rEhcWv0U(m, A, pvt * 384 + 1, ii_tmp + 1);
      itemp = jpvt[pvt];
      jpvt[pvt] = jpvt[i - 1];
      jpvt[i - 1] = itemp;
      vn1[pvt] = vn1[i - 1];
      vn2[pvt] = vn2[i - 1];
    }

    if (i < m) {
      smax = A[ii];
      vn1_p = xzlarfg_OCD6Z2g2(mmi + 1, &smax, A, ii + 2);
      tau[i - 1] = vn1_p;
      A[ii] = smax;
    } else {
      vn1_p = 0.0;
      tau[i - 1] = 0.0;
    }

    if (i < n) {
      smax = A[ii];
      A[ii] = 1.0;
      xzlarf_VugcnE6M(mmi + 1, nmi, ii + 1, vn1_p, A, ii + 385, work);
      A[ii] = smax;
    }

    for (pvt = i + 1; pvt <= n; pvt++) {
      ii = (pvt - 1) * 384 + i;
      vn1_p = vn1[pvt - 1];
      if (vn1_p != 0.0) {
        smax = muDoubleScalarAbs(A[ii - 1]) / vn1_p;
        smax = 1.0 - smax * smax;
        if (smax < 0.0) {
          smax = 0.0;
        }

        s = vn1_p / vn2[pvt - 1];
        s = s * s * smax;
        if (s <= 1.4901161193847656E-8) {
          if (i < m) {
            vn1_p = xnrm2_zAqcIPBY(mmi, A, ii + 1);
            vn1[pvt - 1] = vn1_p;
            vn2[pvt - 1] = vn1_p;
          } else {
            vn1[pvt - 1] = 0.0;
            vn2[pvt - 1] = 0.0;
          }
        } else {
          vn1[pvt - 1] = vn1_p * muDoubleScalarSqrt(smax);
        }
      }
    }
  }
}
