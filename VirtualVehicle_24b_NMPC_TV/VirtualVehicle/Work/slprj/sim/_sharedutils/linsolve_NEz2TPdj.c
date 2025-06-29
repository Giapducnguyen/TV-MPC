#include "rtwtypes.h"
#include "linsolve_NEz2TPdj.h"
#include <string.h>
#include "trisolve_LhvjbLKd.h"

void linsolve_NEz2TPdj(const real_T A[196249], const real_T B[443], real_T C[443])
{
  memcpy(&C[0], &B[0], 443U * sizeof(real_T));
  trisolve_LhvjbLKd(A, C);
}
