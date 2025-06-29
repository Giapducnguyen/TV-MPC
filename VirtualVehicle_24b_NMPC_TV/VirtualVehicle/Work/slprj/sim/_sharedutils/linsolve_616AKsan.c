#include "rtwtypes.h"
#include "linsolve_616AKsan.h"
#include <string.h>
#include "trisolve_eAGaJEEZ.h"

void linsolve_616AKsan(const real_T A[36], const real_T B[3012], real_T C[3012])
{
  memcpy(&C[0], &B[0], 3012U * sizeof(real_T));
  trisolve_eAGaJEEZ(A, C);
}
