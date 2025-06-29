#ifndef xgemv_rowStWqa_h_
#define xgemv_rowStWqa_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemv_rowStWqa(int32_T m, int32_T n, const real_T A[2601], int32_T
  lda, const real_T x[160], real_T y[159]);

#endif
