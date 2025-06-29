#ifndef xgemm_4g0Sybde_h_
#define xgemm_4g0Sybde_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_4g0Sybde(int32_T m, int32_T n, int32_T k, const real_T A[625],
  int32_T lda, const real_T B[58081], int32_T ib0, real_T C[30366]);

#endif
