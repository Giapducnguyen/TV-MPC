#include "rtwtypes.h"
#include "qr_mW04ZbAy.h"
#include <string.h>
#include "xgeqrf_MgDzb5cC.h"
#include "xgemv_rvixLLIX.h"
#include "xgerc_JsGQGGZ5.h"
#include <emmintrin.h>

void qr_mW04ZbAy(const real_T A[19600], real_T Q[19600], real_T R[19600])
{
  __m128d tmp;
  real_T tau[140];
  real_T work[140];
  int32_T coltop;
  int32_T d_i;
  int32_T exitg1;
  int32_T ia;
  int32_T itau;
  int32_T lastc;
  int32_T lastv;
  boolean_T exitg2;
  memcpy(&Q[0], &A[0], 19600U * sizeof(real_T));
  xgeqrf_MgDzb5cC(Q, tau);
  for (itau = 0; itau < 140; itau++) {
    for (d_i = 0; d_i <= itau; d_i++) {
      R[d_i + 140 * itau] = Q[140 * itau + d_i];
    }

    for (d_i = itau + 2; d_i < 141; d_i++) {
      R[(d_i + 140 * itau) - 1] = 0.0;
    }

    work[itau] = 0.0;
  }

  for (d_i = 139; d_i >= 0; d_i--) {
    itau = (d_i * 140 + d_i) + 141;
    if (d_i + 1 < 140) {
      Q[itau - 141] = 1.0;
      if (tau[d_i] != 0.0) {
        lastv = 140 - d_i;
        lastc = itau - d_i;
        while ((lastv > 0) && (Q[lastc - 2] == 0.0)) {
          lastv--;
          lastc--;
        }

        lastc = 139 - d_i;
        exitg2 = false;
        while ((!exitg2) && (lastc > 0)) {
          coltop = (lastc - 1) * 140 + itau;
          ia = coltop;
          do {
            exitg1 = 0;
            if (ia <= (coltop + lastv) - 1) {
              if (Q[ia - 1] != 0.0) {
                exitg1 = 1;
              } else {
                ia++;
              }
            } else {
              lastc--;
              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      } else {
        lastv = 0;
        lastc = 0;
      }

      if (lastv > 0) {
        xgemv_rvixLLIX(lastv, lastc, Q, itau, Q, itau - 140, work);
        xgerc_JsGQGGZ5(lastv, lastc, -tau[d_i], itau - 140, work, Q, itau);
      }

      lastv = itau - d_i;
      coltop = (((((lastv - itau) + 139) / 2) << 1) + itau) - 139;
      ia = coltop - 2;
      for (lastc = itau - 139; lastc <= ia; lastc += 2) {
        tmp = _mm_loadu_pd(&Q[lastc - 1]);
        _mm_storeu_pd(&Q[lastc - 1], _mm_mul_pd(tmp, _mm_set1_pd(-tau[d_i])));
      }

      for (lastc = coltop; lastc < lastv; lastc++) {
        Q[lastc - 1] *= -tau[d_i];
      }
    }

    Q[itau - 141] = 1.0 - tau[d_i];
    for (lastv = 0; lastv < d_i; lastv++) {
      Q[(itau - lastv) - 142] = 0.0;
    }
  }
}
