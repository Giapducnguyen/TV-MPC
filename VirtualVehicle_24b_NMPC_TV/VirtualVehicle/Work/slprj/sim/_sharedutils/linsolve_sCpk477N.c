#include "rtwtypes.h"
#include "linsolve_sCpk477N.h"
#include <string.h>
#include "trisolve_RrmiPhqX.h"

void linsolve_sCpk477N(const real_T A[400], const real_T B[20], real_T C[20])
{
  memcpy(&C[0], &B[0], 20U * sizeof(real_T));
  trisolve_RrmiPhqX(A, C);
}
