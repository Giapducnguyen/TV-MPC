#ifndef xgemm_phvxkwRB_h_
#define xgemm_phvxkwRB_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_phvxkwRB(int32_T m, int32_T n, int32_T k, const real_T A[841],
  int32_T lda, const real_T B[51529], int32_T ib0, real_T C[28148]);

#endif
