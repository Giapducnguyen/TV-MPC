#include "rtwtypes.h"
#include "linsolve_WobnXT1Q.h"
#include <string.h>
#include "trisolve_aBp3TN8l.h"

void linsolve_WobnXT1Q(const real_T A[400], const real_T B[20], real_T C[20])
{
  memcpy(&C[0], &B[0], 20U * sizeof(real_T));
  trisolve_aBp3TN8l(A, C);
}
