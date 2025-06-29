#include "rtwtypes.h"
#include "xzlarf_X2rNjQ0T.h"
#include "div_nde_s32_floor.h"

void xzlarf_X2rNjQ0T(int32_T m, int32_T n, int32_T iv0, real_T tau, real_T C
                     [567009], int32_T ic0, real_T work[753])
{
  real_T c;
  int32_T b_ia;
  int32_T coltop;
  int32_T d;
  int32_T exitg1;
  int32_T jy;
  int32_T lastc;
  int32_T lastv;
  boolean_T exitg2;
  if (tau != 0.0) {
    lastv = m;
    lastc = iv0 + m;
    while ((lastv > 0) && (C[lastc - 2] == 0.0)) {
      lastv--;
      lastc--;
    }

    lastc = n - 1;
    exitg2 = false;
    while ((!exitg2) && (lastc + 1 > 0)) {
      coltop = lastc * 753 + ic0;
      b_ia = coltop;
      do {
        exitg1 = 0;
        if (b_ia <= (coltop + lastv) - 1) {
          if (C[b_ia - 1] != 0.0) {
            exitg1 = 1;
          } else {
            b_ia++;
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
    lastc = -1;
  }

  if (lastv > 0) {
    if (lastc + 1 != 0) {
      for (coltop = 0; coltop <= lastc; coltop++) {
        work[coltop] = 0.0;
      }

      jy = 753 * lastc + ic0;
      for (coltop = ic0; coltop <= jy; coltop += 753) {
        c = 0.0;
        d = (coltop + lastv) - 1;
        for (b_ia = coltop; b_ia <= d; b_ia++) {
          c += C[((iv0 + b_ia) - coltop) - 1] * C[b_ia - 1];
        }

        b_ia = div_nde_s32_floor(coltop - ic0, 753);
        work[b_ia] += c;
      }
    }

    if (!(-tau == 0.0)) {
      jy = ic0;
      for (coltop = 0; coltop <= lastc; coltop++) {
        c = work[coltop];
        if (c != 0.0) {
          c *= -tau;
          d = (lastv + jy) - 1;
          for (b_ia = jy; b_ia <= d; b_ia++) {
            C[b_ia - 1] += C[((iv0 + b_ia) - jy) - 1] * c;
          }
        }

        jy += 753;
      }
    }
  }
}
