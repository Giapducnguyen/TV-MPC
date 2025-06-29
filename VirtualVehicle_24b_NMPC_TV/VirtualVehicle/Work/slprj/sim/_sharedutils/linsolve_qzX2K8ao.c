#include "rtwtypes.h"
#include "linsolve_qzX2K8ao.h"
#include <string.h>
#include "trisolve_X9rOc8pR.h"

void linsolve_qzX2K8ao(const real_T A[144], const real_T B[12], real_T C[12])
{
  memcpy(&C[0], &B[0], 12U * sizeof(real_T));
  trisolve_X9rOc8pR(A, C);
}
