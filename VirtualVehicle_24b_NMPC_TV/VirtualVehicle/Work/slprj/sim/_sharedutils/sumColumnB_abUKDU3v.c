#include "rtwtypes.h"
#include "sumColumnB_abUKDU3v.h"

real_T sumColumnB_abUKDU3v(const real_T x[1770], int32_T col)
{
  int32_T i0;
  i0 = (col - 1) * 5;
  return (((x[i0 + 1] + x[i0]) + x[i0 + 2]) + x[i0 + 3]) + x[i0 + 4];
}
