#include "rtwtypes.h"
#include "linsolve_FDZeaLsR.h"
#include <string.h>
#include "trisolve_39kGchXQ.h"

void linsolve_FDZeaLsR(const real_T A[169744], const real_T B[412], real_T C[412])
{
  memcpy(&C[0], &B[0], 412U * sizeof(real_T));
  trisolve_39kGchXQ(A, C);
}
