#include "rtwtypes.h"
#include "linsolve_IGo8JyzD.h"
#include <string.h>
#include "trisolve_jalfIzFH.h"

void linsolve_IGo8JyzD(const real_T A[253009], const real_T B[503], real_T C[503])
{
  memcpy(&C[0], &B[0], 503U * sizeof(real_T));
  trisolve_jalfIzFH(A, C);
}
