#include "rtwtypes.h"
#include "linsolve_xZ9JZPCo.h"
#include <string.h>
#include "trisolve_QrpusAJB.h"

void linsolve_xZ9JZPCo(const real_T A[225], const real_T B[15], real_T C[15])
{
  memcpy(&C[0], &B[0], 15U * sizeof(real_T));
  trisolve_QrpusAJB(A, C);
}
