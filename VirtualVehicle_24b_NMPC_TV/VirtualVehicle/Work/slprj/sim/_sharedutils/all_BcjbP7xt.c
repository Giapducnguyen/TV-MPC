#include "rtwtypes.h"
#include "all_BcjbP7xt.h"

void all_BcjbP7xt(const boolean_T x[49], boolean_T y[7])
{
  int32_T a;
  int32_T i;
  int32_T i2;
  int32_T ix;
  boolean_T exitg1;
  i2 = 1;
  for (i = 0; i < 7; i++) {
    y[i] = true;
    a = i2 + 6;
    ix = i2;
    i2 += 7;
    exitg1 = false;
    while ((!exitg1) && (ix <= a)) {
      if (!x[ix - 1]) {
        y[i] = false;
        exitg1 = true;
      } else {
        ix++;
      }
    }
  }
}
