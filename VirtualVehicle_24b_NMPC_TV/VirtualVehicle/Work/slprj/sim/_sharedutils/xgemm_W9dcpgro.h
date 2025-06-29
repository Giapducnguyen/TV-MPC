#ifndef xgemm_W9dcpgro_h_
#define xgemm_W9dcpgro_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_W9dcpgro(int32_T m, int32_T n, int32_T k, const real_T A[900],
  int32_T lda, const real_T B[85849], int32_T ib0, real_T C[44829]);

#endif
