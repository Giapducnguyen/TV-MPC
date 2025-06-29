#include "rtwtypes.h"
#include "xgeqp3_okOpbmlQ.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include "xswap_Lf064CRa.h"
#include "qrf_BxUQew9H.h"
#include "qrpf_WIHGgQmr.h"

void xgeqp3_okOpbmlQ(real_T A[123201], int32_T m, int32_T n, int32_T jpvt[351],
                     real_T tau[351])
{
  int32_T i;
  int32_T minmn;
  int32_T nfxd;
  static const int32_T offsets[4] = { 0, 1, 2, 3 };

  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 351; i++) {
    tau[i] = 0.0;
  }

  if (minmn < 1) {
    minmn = (n / 4) << 2;
    nfxd = minmn - 4;
    for (i = 0; i <= nfxd; i += 4) {
      _mm_storeu_si128((__m128i *)&jpvt[i], _mm_add_epi32(_mm_add_epi32
        (_mm_set1_epi32(i), _mm_loadu_si128((const __m128i *)&offsets[0])),
        _mm_set1_epi32(1)));
    }

    for (i = minmn; i < n; i++) {
      jpvt[i] = i + 1;
    }
  } else {
    nfxd = -1;
    for (i = 0; i < n; i++) {
      if (jpvt[i] != 0) {
        nfxd++;
        if (i + 1 != nfxd + 1) {
          xswap_Lf064CRa(m, A, i * 351 + 1, nfxd * 351 + 1);
          jpvt[i] = jpvt[nfxd];
          jpvt[nfxd] = i + 1;
        } else {
          jpvt[i] = i + 1;
        }
      } else {
        jpvt[i] = i + 1;
      }
    }

    i = nfxd + 1;
    nfxd = muIntScalarMin_sint32(i, minmn);
    for (i = 0; i < 351; i++) {
      tau[i] = 0.0;
    }

    qrf_BxUQew9H(A, m, n, nfxd, tau);
    if (nfxd < minmn) {
      qrpf_WIHGgQmr(A, m, n, nfxd, tau, jpvt);
    }
  }
}
