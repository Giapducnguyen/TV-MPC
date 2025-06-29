#ifndef xgemm_gOEnzgDL_h_
#define xgemm_gOEnzgDL_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_gOEnzgDL(int32_T m, int32_T n, int32_T k, const real_T A[6084],
  int32_T lda, const real_T B[251001], int32_T ib0, real_T C[137775]);

#endif
