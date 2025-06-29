#include "rtwtypes.h"
#include "linsolve_3OhHKOmd.h"
#include "trisolve_igpCLkCu.h"

void linsolve_3OhHKOmd(const real_T A[25], const real_T B[5], real_T C[5])
{
  int32_T i;
  for (i = 0; i < 5; i++) {
    C[i] = B[i];
  }

  trisolve_igpCLkCu(A, C);
}
