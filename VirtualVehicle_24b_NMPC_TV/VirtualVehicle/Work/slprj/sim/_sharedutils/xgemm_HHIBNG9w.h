#ifndef xgemm_HHIBNG9w_h_
#define xgemm_HHIBNG9w_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_HHIBNG9w(int32_T m, int32_T n, int32_T k, const real_T A[7744],
  int32_T lda, const real_T B[168100], int32_T ib0, real_T C[89790]);

#endif
