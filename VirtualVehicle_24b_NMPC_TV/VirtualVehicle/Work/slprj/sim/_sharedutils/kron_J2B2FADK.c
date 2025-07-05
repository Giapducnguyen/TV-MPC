#include "rtwtypes.h"
#include "kron_J2B2FADK.h"

void kron_J2B2FADK(const real_T B[2], real_T K[70])
{
  real_T B_e;
  real_T B_p;
  int32_T i1;
  int32_T kidx;
  kidx = -1;
  B_p = B[0];
  B_e = B[1];
  for (i1 = 0; i1 < 35; i1++) {
    K[kidx + 1] = B_p;
    K[kidx + 2] = B_e;
    kidx += 2;
  }
}
