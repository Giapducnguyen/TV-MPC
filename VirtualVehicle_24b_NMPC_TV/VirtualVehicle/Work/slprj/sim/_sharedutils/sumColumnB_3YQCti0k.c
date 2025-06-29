#include "rtwtypes.h"
#include "sumColumnB_3YQCti0k.h"

real_T sumColumnB_3YQCti0k(const real_T x[2215], int32_T col)
{
  int32_T i0;
  i0 = (col - 1) * 5;
  return (((x[i0 + 1] + x[i0]) + x[i0 + 2]) + x[i0 + 3]) + x[i0 + 4];
}
