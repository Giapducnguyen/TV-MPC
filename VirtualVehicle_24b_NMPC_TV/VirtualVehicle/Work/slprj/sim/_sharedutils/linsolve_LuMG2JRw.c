#include "rtwtypes.h"
#include "linsolve_LuMG2JRw.h"
#include <string.h>
#include "trisolve_p5fdNUIR.h"

void linsolve_LuMG2JRw(const real_T A[324], const real_T B[18], real_T C[18])
{
  memcpy(&C[0], &B[0], 18U * sizeof(real_T));
  trisolve_p5fdNUIR(A, C);
}
