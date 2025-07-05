#include "rtwtypes.h"
#include "xgeqrf_MgDzb5cC.h"
#include "xnrm2_LmsjiJMr.h"
#include "mwmathutil.h"
#include "xgemv_rvixLLIX.h"
#include "xgerc_JsGQGGZ5.h"
#include <emmintrin.h>

void xgeqrf_MgDzb5cC(real_T A[19600], real_T tau[140])
{
  __m128d tmp;
  real_T work[140];
  real_T A_p;
  real_T atmp;
  real_T beta1;
  int32_T coltop;
  int32_T exitg1;
  int32_T i;
  int32_T ii;
  int32_T knt;
  int32_T lastv;
  int32_T scalarLB;
  int32_T vectorUB;
  int32_T vectorUB_tmp;
  boolean_T exitg2;
  for (i = 0; i < 140; i++) {
    tau[i] = 0.0;
    work[i] = 0.0;
  }

  for (i = 0; i < 140; i++) {
    ii = i * 140 + i;
    if (i + 1 < 140) {
      atmp = A[ii];
      lastv = ii + 2;
      tau[i] = 0.0;
      beta1 = xnrm2_LmsjiJMr(139 - i, A, ii + 2);
      if (beta1 != 0.0) {
        A_p = A[ii];
        beta1 = muDoubleScalarHypot(A_p, beta1);
        if (A_p >= 0.0) {
          beta1 = -beta1;
        }

        if (muDoubleScalarAbs(beta1) < 1.0020841800044864E-292) {
          knt = 0;
          do {
            knt++;
            scalarLB = (ii - i) + 140;
            vectorUB = (((((scalarLB - ii) - 1) / 2) << 1) + ii) + 2;
            vectorUB_tmp = vectorUB - 2;
            for (coltop = lastv; coltop <= vectorUB_tmp; coltop += 2) {
              tmp = _mm_loadu_pd(&A[coltop - 1]);
              _mm_storeu_pd(&A[coltop - 1], _mm_mul_pd(tmp, _mm_set1_pd
                (9.9792015476736E+291)));
            }

            for (coltop = vectorUB; coltop <= scalarLB; coltop++) {
              A[coltop - 1] *= 9.9792015476736E+291;
            }

            beta1 *= 9.9792015476736E+291;
            atmp *= 9.9792015476736E+291;
          } while ((muDoubleScalarAbs(beta1) < 1.0020841800044864E-292) && (knt <
                    20));

          beta1 = muDoubleScalarHypot(atmp, xnrm2_LmsjiJMr(139 - i, A, ii + 2));
          if (atmp >= 0.0) {
            beta1 = -beta1;
          }

          tau[i] = (beta1 - atmp) / beta1;
          atmp = 1.0 / (atmp - beta1);
          for (coltop = lastv; coltop <= vectorUB_tmp; coltop += 2) {
            tmp = _mm_loadu_pd(&A[coltop - 1]);
            _mm_storeu_pd(&A[coltop - 1], _mm_mul_pd(tmp, _mm_set1_pd(atmp)));
          }

          for (coltop = vectorUB; coltop <= scalarLB; coltop++) {
            A[coltop - 1] *= atmp;
          }

          for (lastv = 0; lastv < knt; lastv++) {
            beta1 *= 1.0020841800044864E-292;
          }

          atmp = beta1;
        } else {
          tau[i] = (beta1 - A_p) / beta1;
          atmp = 1.0 / (A_p - beta1);
          coltop = (ii - i) + 140;
          scalarLB = (((((coltop - ii) - 1) / 2) << 1) + ii) + 2;
          vectorUB = scalarLB - 2;
          for (knt = lastv; knt <= vectorUB; knt += 2) {
            tmp = _mm_loadu_pd(&A[knt - 1]);
            _mm_storeu_pd(&A[knt - 1], _mm_mul_pd(tmp, _mm_set1_pd(atmp)));
          }

          for (knt = scalarLB; knt <= coltop; knt++) {
            A[knt - 1] *= atmp;
          }

          atmp = beta1;
        }
      }

      A[ii] = 1.0;
      if (tau[i] != 0.0) {
        lastv = 140 - i;
        knt = (ii - i) + 139;
        while ((lastv > 0) && (A[knt] == 0.0)) {
          lastv--;
          knt--;
        }

        knt = 139 - i;
        exitg2 = false;
        while ((!exitg2) && (knt > 0)) {
          coltop = ((knt - 1) * 140 + ii) + 140;
          scalarLB = coltop;
          do {
            exitg1 = 0;
            if (scalarLB + 1 <= coltop + lastv) {
              if (A[scalarLB] != 0.0) {
                exitg1 = 1;
              } else {
                scalarLB++;
              }
            } else {
              knt--;
              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      } else {
        lastv = 0;
        knt = 0;
      }

      if (lastv > 0) {
        xgemv_rvixLLIX(lastv, knt, A, ii + 141, A, ii + 1, work);
        xgerc_JsGQGGZ5(lastv, knt, -tau[i], ii + 1, work, A, ii + 141);
      }

      A[ii] = atmp;
    } else {
      tau[139] = 0.0;
    }
  }
}
