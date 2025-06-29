#include "rtwtypes.h"
#include "linsolve_FvYCAYQv.h"
#include <string.h>
#include "trisolve_9aMoxhIT.h"

void linsolve_FvYCAYQv(const real_T A[144], const real_T B[12], real_T C[12])
{
  memcpy(&C[0], &B[0], 12U * sizeof(real_T));
  trisolve_9aMoxhIT(A, C);
}
