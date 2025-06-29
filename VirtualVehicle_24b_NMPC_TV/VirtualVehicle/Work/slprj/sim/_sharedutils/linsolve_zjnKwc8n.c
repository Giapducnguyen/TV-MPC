#include "rtwtypes.h"
#include "linsolve_zjnKwc8n.h"
#include <string.h>
#include "trisolve_eYLdKgXu.h"

void linsolve_zjnKwc8n(const real_T A[252004], const real_T B[502], real_T C[502])
{
  memcpy(&C[0], &B[0], 502U * sizeof(real_T));
  trisolve_eYLdKgXu(A, C);
}
