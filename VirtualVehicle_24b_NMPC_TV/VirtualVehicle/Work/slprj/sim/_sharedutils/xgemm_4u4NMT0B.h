#ifndef xgemm_4u4NMT0B_h_
#define xgemm_4u4NMT0B_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_4u4NMT0B(int32_T m, int32_T n, int32_T k, const real_T A[784],
  int32_T lda, const real_T B[53361], int32_T ib0, real_T C[29799]);

#endif
