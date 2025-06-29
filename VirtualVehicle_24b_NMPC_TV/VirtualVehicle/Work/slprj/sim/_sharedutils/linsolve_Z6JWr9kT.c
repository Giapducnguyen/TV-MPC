#include "rtwtypes.h"
#include "linsolve_Z6JWr9kT.h"
#include <string.h>
#include "trisolve_LzFlKP62.h"

void linsolve_Z6JWr9kT(const real_T A[100], const real_T B[10], real_T C[10])
{
  memcpy(&C[0], &B[0], 10U * sizeof(real_T));
  trisolve_LzFlKP62(A, C);
}
