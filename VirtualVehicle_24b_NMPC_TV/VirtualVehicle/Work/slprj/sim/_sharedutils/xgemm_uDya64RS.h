#ifndef xgemm_uDya64RS_h_
#define xgemm_uDya64RS_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_uDya64RS(int32_T m, int32_T n, int32_T k, const real_T A[784],
  int32_T lda, const real_T B[88209], int32_T ib0, real_T C[47817]);

#endif
