#include "rtwtypes.h"
#include "linsolve_VZ15sYhW.h"
#include <string.h>
#include "trisolve_6juxoLwF.h"

void linsolve_VZ15sYhW(const real_T A[87025], const real_T B[295], real_T C[295])
{
  memcpy(&C[0], &B[0], 295U * sizeof(real_T));
  trisolve_6juxoLwF(A, C);
}
