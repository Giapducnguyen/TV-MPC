#include "rtwtypes.h"
#include "xnrm2_s6eUkGrq.h"
#include "mwmathutil.h"

real_T xnrm2_s6eUkGrq(int32_T n, const real_T x[271441], int32_T ix0)
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  int32_T k;
  int32_T kend;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = muDoubleScalarAbs(x[ix0 - 1]);
    } else {
      scale = 3.3121686421112381E-170;
      kend = ix0 + n;
      for (k = ix0; k < kend; k++) {
        absxk = muDoubleScalarAbs(x[k - 1]);
        if (absxk > scale) {
          t = scale / absxk;
          y = y * t * t + 1.0;
          scale = absxk;
        } else {
          t = absxk / scale;
          y += t * t;
        }
      }

      y = scale * muDoubleScalarSqrt(y);
    }
  }

  return y;
}
