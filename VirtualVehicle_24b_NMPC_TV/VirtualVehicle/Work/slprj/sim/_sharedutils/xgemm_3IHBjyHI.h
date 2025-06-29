#ifndef xgemm_3IHBjyHI_h_
#define xgemm_3IHBjyHI_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_3IHBjyHI(int32_T m, int32_T n, int32_T k, const real_T A[4624],
  int32_T lda, const real_T B[667489], int32_T ib0, real_T C[360297]);

#endif
