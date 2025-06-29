#include "rtwtypes.h"
#include "sumColumnB_SRyVDKpG.h"

real_T sumColumnB_SRyVDKpG(const real_T x[6])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 5; k++) {
    y += x[k + 1];
  }

  return y;
}
