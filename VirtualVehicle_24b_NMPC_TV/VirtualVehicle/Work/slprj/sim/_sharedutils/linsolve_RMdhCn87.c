#include "rtwtypes.h"
#include "linsolve_RMdhCn87.h"
#include <string.h>
#include "trisolve_q2M3ykh3.h"

void linsolve_RMdhCn87(const real_T A[324], const real_T B[9036], real_T C[9036])
{
  memcpy(&C[0], &B[0], 9036U * sizeof(real_T));
  trisolve_q2M3ykh3(A, C);
}
