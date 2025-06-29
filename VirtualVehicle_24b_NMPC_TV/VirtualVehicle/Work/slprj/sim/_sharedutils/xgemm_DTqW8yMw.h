#ifndef xgemm_DTqW8yMw_h_
#define xgemm_DTqW8yMw_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_DTqW8yMw(int32_T m, int32_T n, int32_T k, const real_T A[1600],
  int32_T lda, const real_T B[123201], int32_T ib0, real_T C[67041]);

#endif
