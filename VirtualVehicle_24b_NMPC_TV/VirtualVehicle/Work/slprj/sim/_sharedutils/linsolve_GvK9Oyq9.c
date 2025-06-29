#include "rtwtypes.h"
#include "linsolve_GvK9Oyq9.h"
#include <string.h>
#include "trisolve_qMDBI5Nq.h"

void linsolve_GvK9Oyq9(const real_T A[96100], const real_T B[310], real_T C[310])
{
  memcpy(&C[0], &B[0], 310U * sizeof(real_T));
  trisolve_qMDBI5Nq(A, C);
}
