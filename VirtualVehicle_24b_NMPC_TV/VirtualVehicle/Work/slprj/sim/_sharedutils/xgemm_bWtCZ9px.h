#ifndef xgemm_bWtCZ9px_h_
#define xgemm_bWtCZ9px_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_bWtCZ9px(int32_T m, int32_T n, int32_T k, const real_T A[484],
  int32_T lda, const real_T B[70225], int32_T ib0, real_T C[37895]);

#endif
