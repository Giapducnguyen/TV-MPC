#include "rtwtypes.h"
#include "kron_vQq5sYEl.h"

void kron_vQq5sYEl(const real_T B[2], real_T K[10])
{
  real_T B_e;
  real_T B_p;
  int32_T i1;
  int32_T kidx;
  kidx = -1;
  B_p = B[0];
  B_e = B[1];
  for (i1 = 0; i1 < 5; i1++) {
    K[kidx + 1] = B_p;
    K[kidx + 2] = B_e;
    kidx += 2;
  }
}
