#include "rtwtypes.h"
#include "linsolve_5QTSMgPf.h"
#include <string.h>
#include "trisolve_YkLnQ2YA.h"

void linsolve_5QTSMgPf(const real_T A[225], const real_T B[15], real_T C[15])
{
  memcpy(&C[0], &B[0], 15U * sizeof(real_T));
  trisolve_YkLnQ2YA(A, C);
}
