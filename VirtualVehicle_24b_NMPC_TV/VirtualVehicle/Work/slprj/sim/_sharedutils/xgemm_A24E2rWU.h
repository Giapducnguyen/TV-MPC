#ifndef xgemm_A24E2rWU_h_
#define xgemm_A24E2rWU_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_A24E2rWU(int32_T m, int32_T n, int32_T k, const real_T A[729],
  int32_T lda, const real_T B[68121], int32_T ib0, real_T C[37062]);

#endif
