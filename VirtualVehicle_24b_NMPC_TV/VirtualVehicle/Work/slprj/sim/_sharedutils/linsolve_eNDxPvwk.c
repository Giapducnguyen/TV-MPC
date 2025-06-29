#include "rtwtypes.h"
#include "linsolve_eNDxPvwk.h"
#include <string.h>
#include "trisolve_H5lce1NE.h"

void linsolve_eNDxPvwk(const real_T A[100], const real_T B[10], real_T C[10])
{
  memcpy(&C[0], &B[0], 10U * sizeof(real_T));
  trisolve_H5lce1NE(A, C);
}
