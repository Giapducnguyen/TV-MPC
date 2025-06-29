#include "rtwtypes.h"
#include "xnrm2_4v1UEHAM.h"
#include "mwmathutil.h"

real_T xnrm2_4v1UEHAM(int32_T n, const real_T x[176])
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  int32_T k;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = muDoubleScalarAbs(x[0]);
    } else {
      scale = 3.3121686421112381E-170;
      for (k = 0; k < n; k++) {
        absxk = muDoubleScalarAbs(x[k]);
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
