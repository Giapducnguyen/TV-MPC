#include "rtwtypes.h"
#include "xgeqp3_FWdhIZN8.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include "xswap_FSoq3QbI.h"
#include "qrf_6g9wSNq3.h"
#include "qrpf_5YcVyGdP.h"

void xgeqp3_FWdhIZN8(real_T A[106929], int32_T m, int32_T n, int32_T jpvt[327],
                     real_T tau[327])
{
  int32_T i;
  int32_T minmn;
  int32_T nfxd;
  static const int32_T offsets[4] = { 0, 1, 2, 3 };

  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 327; i++) {
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
          xswap_FSoq3QbI(m, A, i * 327 + 1, nfxd * 327 + 1);
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
    for (i = 0; i < 327; i++) {
      tau[i] = 0.0;
    }

    qrf_6g9wSNq3(A, m, n, nfxd, tau);
    if (nfxd < minmn) {
      qrpf_5YcVyGdP(A, m, n, nfxd, tau, jpvt);
    }
  }
}
