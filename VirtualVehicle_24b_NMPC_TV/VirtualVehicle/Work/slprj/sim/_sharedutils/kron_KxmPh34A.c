#include "rtwtypes.h"
#include "kron_KxmPh34A.h"

void kron_KxmPh34A(real_T K[14])
{
  int32_T i1;
  int32_T kidx;
  kidx = -1;
  for (i1 = 0; i1 < 7; i1++) {
    K[kidx + 1] = 0.0;
    K[kidx + 2] = 0.0;
    kidx += 2;
  }
}
