#include "rtwtypes.h"
#include "xrotg_RoqvjOQy.h"
#include "mwmathutil.h"

void xrotg_RoqvjOQy(real_T *a, real_T *b, real_T *c, real_T *s)
{
  real_T absa;
  real_T absb;
  real_T ads;
  real_T bds;
  real_T roe;
  real_T scale;
  roe = *b;
  absa = muDoubleScalarAbs(*a);
  absb = muDoubleScalarAbs(*b);
  if (absa > absb) {
    roe = *a;
  }

  scale = absa + absb;
  if (scale == 0.0) {
    *s = 0.0;
    *c = 1.0;
    *a = 0.0;
    *b = 0.0;
  } else {
    ads = absa / scale;
    bds = absb / scale;
    scale *= muDoubleScalarSqrt(ads * ads + bds * bds);
    if (roe < 0.0) {
      scale = -scale;
    }

    *c = *a / scale;
    *s = *b / scale;
    if (absa > absb) {
      *b = *s;
    } else if (*c != 0.0) {
      *b = 1.0 / *c;
    } else {
      *b = 1.0;
    }

    *a = scale;
  }
}
