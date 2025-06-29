#include "rtwtypes.h"
#include "BFGSUpdate_62MGjxmf.h"
#include <emmintrin.h>

boolean_T BFGSUpdate_62MGjxmf(int32_T nvar, real_T Bk[3721], const real_T sk[150],
  real_T yk[150], real_T workspace[42150])
{
  __m128d tmp;
  __m128d tmp_p;
  real_T curvatureS;
  real_T dotSY;
  real_T temp;
  int32_T b;
  int32_T b_ix;
  int32_T b_tmp;
  int32_T i;
  int32_T ix;
  int32_T jy;
  int32_T k;
  boolean_T success;
  dotSY = 0.0;
  b_tmp = (uint8_T)nvar;
  for (k = 0; k < b_tmp; k++) {
    dotSY += sk[k] * yk[k];
    workspace[k] = 0.0;
  }

  ix = 0;
  jy = (nvar - 1) * 61 + 1;
  for (k = 1; k <= jy; k += 61) {
    b_ix = (k + nvar) - 1;
    for (b = k; b <= b_ix; b++) {
      i = b - k;
      workspace[i] += Bk[b - 1] * sk[ix];
    }

    ix++;
  }

  curvatureS = 0.0;
  if (nvar >= 1) {
    for (k = 0; k < nvar; k++) {
      curvatureS += sk[k] * workspace[k];
    }
  }

  if (dotSY < 0.2 * curvatureS) {
    dotSY = 0.8 * curvatureS / (curvatureS - dotSY);
    jy = ((uint8_T)nvar / 2) << 1;
    b_ix = jy - 2;
    for (k = 0; k <= b_ix; k += 2) {
      tmp_p = _mm_loadu_pd(&yk[k]);
      _mm_storeu_pd(&yk[k], _mm_mul_pd(_mm_set1_pd(dotSY), tmp_p));
    }

    for (k = jy; k < b_tmp; k++) {
      yk[k] *= dotSY;
    }

    if (!(1.0 - dotSY == 0.0)) {
      jy = (nvar / 2) << 1;
      b_ix = jy - 2;
      for (k = 0; k <= b_ix; k += 2) {
        tmp_p = _mm_loadu_pd(&workspace[k]);
        tmp = _mm_loadu_pd(&yk[k]);
        _mm_storeu_pd(&yk[k], _mm_add_pd(_mm_mul_pd(_mm_set1_pd(1.0 - dotSY),
          tmp_p), tmp));
      }

      for (k = jy; k < nvar; k++) {
        yk[k] += (1.0 - dotSY) * workspace[k];
      }
    }

    dotSY = 0.0;
    for (k = 0; k < b_tmp; k++) {
      dotSY += sk[k] * yk[k];
    }
  }

  success = ((curvatureS > 2.2204460492503131E-16) && (dotSY >
              2.2204460492503131E-16));
  if (success) {
    curvatureS = -1.0 / curvatureS;
    if (!(curvatureS == 0.0)) {
      ix = 1;
      for (k = 0; k < b_tmp; k++) {
        temp = workspace[k];
        if (temp != 0.0) {
          temp *= curvatureS;
          i = (nvar + ix) - 1;
          jy = ((((i - ix) + 1) / 2) << 1) + ix;
          b_ix = jy - 2;
          for (b = ix; b <= b_ix; b += 2) {
            tmp_p = _mm_loadu_pd(&workspace[b - ix]);
            tmp = _mm_loadu_pd(&Bk[b - 1]);
            _mm_storeu_pd(&Bk[b - 1], _mm_add_pd(_mm_mul_pd(tmp_p, _mm_set1_pd
              (temp)), tmp));
          }

          for (b = jy; b <= i; b++) {
            Bk[b - 1] += workspace[b - ix] * temp;
          }
        }

        ix += 61;
      }
    }

    dotSY = 1.0 / dotSY;
    if (!(dotSY == 0.0)) {
      ix = 1;
      for (k = 0; k < b_tmp; k++) {
        curvatureS = yk[k];
        if (curvatureS != 0.0) {
          curvatureS *= dotSY;
          i = (nvar + ix) - 1;
          jy = ((((i - ix) + 1) / 2) << 1) + ix;
          b_ix = jy - 2;
          for (b = ix; b <= b_ix; b += 2) {
            tmp_p = _mm_loadu_pd(&yk[b - ix]);
            tmp = _mm_loadu_pd(&Bk[b - 1]);
            _mm_storeu_pd(&Bk[b - 1], _mm_add_pd(_mm_mul_pd(tmp_p, _mm_set1_pd
              (curvatureS)), tmp));
          }

          for (b = jy; b <= i; b++) {
            Bk[b - 1] += yk[b - ix] * curvatureS;
          }
        }

        ix += 61;
      }
    }
  }

  return success;
}
