#include "rtwtypes.h"
#include "kron_UKDPelLn.h"

void kron_UKDPelLn(real_T K[10])
{
  int32_T i1;
  int32_T kidx;
  kidx = -1;
  for (i1 = 0; i1 < 5; i1++) {
    K[kidx + 1] = 0.0;
    K[kidx + 2] = 0.0;
    kidx += 2;
  }
}
