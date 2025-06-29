#include "rtwtypes.h"
#include "linsolve_C6hgK40B.h"
#include "trisolve_oHCIME31.h"

void linsolve_C6hgK40B(const real_T A[25], const real_T B[5], real_T C[5])
{
  int32_T i;
  for (i = 0; i < 5; i++) {
    C[i] = B[i];
  }

  trisolve_oHCIME31(A, C);
}
