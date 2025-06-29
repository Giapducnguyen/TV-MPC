#ifndef xgemm_WdCsuAEz_h_
#define xgemm_WdCsuAEz_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_WdCsuAEz(int32_T m, int32_T n, int32_T k, const real_T A[900],
  int32_T lda, const real_T B[88209], int32_T ib0, real_T C[46035]);

#endif
