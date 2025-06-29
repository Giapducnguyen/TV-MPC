#include "rtwtypes.h"
#include "linsolve_5ecG2ozZ.h"
#include "trisolve_3z2Dy79T.h"

void linsolve_5ecG2ozZ(const real_T A[36], const real_T B[6], real_T C[6])
{
  int32_T i;
  for (i = 0; i < 6; i++) {
    C[i] = B[i];
  }

  trisolve_3z2Dy79T(A, C);
}
