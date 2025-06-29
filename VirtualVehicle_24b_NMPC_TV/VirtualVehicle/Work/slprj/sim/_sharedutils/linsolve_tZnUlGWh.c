#include "rtwtypes.h"
#include "linsolve_tZnUlGWh.h"
#include <string.h>
#include "trisolve_k2lvYKBc.h"

void linsolve_tZnUlGWh(const real_T A[324], const real_T B[18], real_T C[18])
{
  memcpy(&C[0], &B[0], 18U * sizeof(real_T));
  trisolve_k2lvYKBc(A, C);
}
