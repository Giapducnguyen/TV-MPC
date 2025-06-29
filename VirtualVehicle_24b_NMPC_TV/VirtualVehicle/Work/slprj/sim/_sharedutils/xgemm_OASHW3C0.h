#ifndef xgemm_OASHW3C0_h_
#define xgemm_OASHW3C0_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_OASHW3C0(int32_T m, int32_T n, int32_T k, const real_T A[2601],
  int32_T lda, const real_T B[81796], int32_T ib0, real_T C[45760]);

#endif
