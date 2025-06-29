#include "rtwtypes.h"
#include "linsolve_RvbK6iaf.h"
#include <string.h>
#include "trisolve_mUtfnScF.h"

void linsolve_RvbK6iaf(const real_T A[222784], const real_T B[472], real_T C[472])
{
  memcpy(&C[0], &B[0], 472U * sizeof(real_T));
  trisolve_mUtfnScF(A, C);
}
