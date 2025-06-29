#include "rtwtypes.h"
#include "xswap_vFpGBkoU.h"

void xswap_vFpGBkoU(int32_T n, real_T x[145161], int32_T ix0, int32_T iy0)
{
  real_T temp;
  int32_T k;
  int32_T temp_tmp;
  int32_T tmp;
  for (k = 0; k < n; k++) {
    temp_tmp = (ix0 + k) - 1;
    temp = x[temp_tmp];
    tmp = (iy0 + k) - 1;
    x[temp_tmp] = x[tmp];
    x[tmp] = temp;
  }
}
