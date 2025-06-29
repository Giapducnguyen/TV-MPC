#include "rtwtypes.h"
#include "chol_1hKFGffp.h"
#include "xpotrf_i22GyNkC.h"

void chol_1hKFGffp(real_T A[149769])
{
  int32_T b;
  int32_T i;
  int32_T info;
  int32_T jmax;
  info = xpotrf_i22GyNkC(A);
  if (info == 0) {
    jmax = 388;
  } else {
    jmax = info;
  }

  for (info = 2; info < jmax; info++) {
    b = (uint16_T)(info - 1);
    for (i = 0; i < b; i++) {
      A[i + 387 * (info - 1)] = 0.0;
    }
  }
}
