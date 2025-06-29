#include "rtwtypes.h"
#include "mldivide_LT0gJJGm.h"
#include <string.h>
#include "mwmathutil.h"
#include <emmintrin.h>

void mldivide_LT0gJJGm(const real_T A[49], const real_T B[49], real_T Y[49])
{
  __m128d tmp;
  real_T b_A[49];
  real_T s;
  real_T smax;
  int32_T b_ix;
  int32_T b_j;
  int32_T c_k;
  int32_T d;
  int32_T ijA;
  int32_T ix;
  int32_T iy;
  int32_T jj;
  int8_T ipiv[7];
  int8_T ipiv_p;
  memcpy(&b_A[0], &A[0], 49U * sizeof(real_T));
  memcpy(&Y[0], &B[0], 49U * sizeof(real_T));
  for (d = 0; d < 7; d++) {
    ipiv[d] = (int8_T)(d + 1);
  }

  for (b_j = 0; b_j < 6; b_j++) {
    jj = b_j << 3;
    iy = 8 - b_j;
    b_ix = 0;
    ix = jj;
    smax = muDoubleScalarAbs(b_A[jj]);
    for (c_k = 2; c_k < iy; c_k++) {
      ix++;
      s = muDoubleScalarAbs(b_A[ix]);
      if (s > smax) {
        b_ix = c_k - 1;
        smax = s;
      }
    }

    if (b_A[jj + b_ix] != 0.0) {
      if (b_ix != 0) {
        iy = b_j + b_ix;
        ipiv[b_j] = (int8_T)(iy + 1);
        for (ix = 0; ix < 7; ix++) {
          b_ix = ix * 7 + b_j;
          smax = b_A[b_ix];
          b_A[b_ix] = b_A[iy];
          b_A[iy] = smax;
          iy += 7;
        }
      }

      iy = (jj - b_j) + 7;
      ix = (((((iy - jj) - 1) / 2) << 1) + jj) + 2;
      c_k = ix - 2;
      for (b_ix = jj + 2; b_ix <= c_k; b_ix += 2) {
        tmp = _mm_loadu_pd(&b_A[b_ix - 1]);
        _mm_storeu_pd(&b_A[b_ix - 1], _mm_div_pd(tmp, _mm_set1_pd(b_A[jj])));
      }

      for (b_ix = ix; b_ix <= iy; b_ix++) {
        b_A[b_ix - 1] /= b_A[jj];
      }
    }

    iy = jj + 7;
    b_ix = jj + 9;
    ix = 5 - b_j;
    for (c_k = 0; c_k <= ix; c_k++) {
      smax = b_A[iy];
      if (b_A[iy] != 0.0) {
        d = (b_ix - b_j) + 5;
        for (ijA = b_ix; ijA <= d; ijA++) {
          b_A[ijA - 1] += b_A[((jj + ijA) - b_ix) + 1] * -smax;
        }
      }

      iy += 7;
      b_ix += 7;
    }
  }

  for (b_j = 0; b_j < 6; b_j++) {
    ipiv_p = ipiv[b_j];
    if (b_j + 1 != ipiv_p) {
      for (iy = 0; iy < 7; iy++) {
        b_ix = 7 * iy + b_j;
        smax = Y[b_ix];
        c_k = (7 * iy + ipiv_p) - 1;
        Y[b_ix] = Y[c_k];
        Y[c_k] = smax;
      }
    }
  }

  for (b_j = 0; b_j < 7; b_j++) {
    jj = 7 * b_j;
    for (iy = 0; iy < 7; iy++) {
      b_ix = 7 * iy;
      d = iy + jj;
      if (Y[d] != 0.0) {
        for (ix = iy + 2; ix < 8; ix++) {
          c_k = (ix + jj) - 1;
          Y[c_k] -= b_A[(ix + b_ix) - 1] * Y[d];
        }
      }
    }
  }

  for (b_j = 0; b_j < 7; b_j++) {
    jj = 7 * b_j;
    for (iy = 6; iy >= 0; iy--) {
      b_ix = 7 * iy;
      d = iy + jj;
      smax = Y[d];
      if (smax != 0.0) {
        Y[d] = smax / b_A[iy + b_ix];
        for (ix = 0; ix < iy; ix++) {
          c_k = ix + jj;
          Y[c_k] -= b_A[ix + b_ix] * Y[d];
        }
      }
    }
  }
}
