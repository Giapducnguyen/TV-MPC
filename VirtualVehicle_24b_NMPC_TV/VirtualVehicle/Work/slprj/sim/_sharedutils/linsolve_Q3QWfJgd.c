#include "rtwtypes.h"
#include "linsolve_Q3QWfJgd.h"
#include <string.h>
#include "trisolve_ysHsKQuv.h"

void linsolve_Q3QWfJgd(const real_T A[125316], const real_T B[354], real_T C[354])
{
  memcpy(&C[0], &B[0], 354U * sizeof(real_T));
  trisolve_ysHsKQuv(A, C);
}
