#include "rtwtypes.h"
#include "linsolve_na4OZ1Ai.h"
#include <string.h>
#include "trisolve_cRlIVxjD.h"

void linsolve_na4OZ1Ai(const real_T A[149769], const real_T B[387], real_T C[387])
{
  memcpy(&C[0], &B[0], 387U * sizeof(real_T));
  trisolve_cRlIVxjD(A, C);
}
