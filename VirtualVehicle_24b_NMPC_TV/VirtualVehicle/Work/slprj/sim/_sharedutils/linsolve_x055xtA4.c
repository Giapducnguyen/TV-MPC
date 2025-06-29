#include "rtwtypes.h"
#include "linsolve_x055xtA4.h"
#include "trisolve_5PRkdSxb.h"

void linsolve_x055xtA4(const real_T A[36], const real_T B[6], real_T C[6])
{
  int32_T i;
  for (i = 0; i < 6; i++) {
    C[i] = B[i];
  }

  trisolve_5PRkdSxb(A, C);
}
