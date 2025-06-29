#include "rtwtypes.h"
#include "xgeqp3_8a5f8kFp.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include "xswap_pAD95uTn.h"
#include "qrf_qF3AH3gh.h"
#include "qrpf_eLn7WpmK.h"

void xgeqp3_8a5f8kFp(real_T A[181476], int32_T m, int32_T n, int32_T jpvt[426],
                     real_T tau[426])
{
  int32_T i;
  int32_T minmn;
  int32_T nfxd;
  static const int32_T offsets[4] = { 0, 1, 2, 3 };

  minmn = muIntScalarMin_sint32(m, n);
  for (i = 0; i < 426; i++) {
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
          xswap_pAD95uTn(m, A, i * 426 + 1, nfxd * 426 + 1);
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
    for (i = 0; i < 426; i++) {
      tau[i] = 0.0;
    }

    qrf_qF3AH3gh(A, m, n, nfxd, tau);
    if (nfxd < minmn) {
      qrpf_eLn7WpmK(A, m, n, nfxd, tau, jpvt);
    }
  }
}
