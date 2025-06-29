#ifndef xgemm_lf67LIN5_h_
#define xgemm_lf67LIN5_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_lf67LIN5(int32_T m, int32_T n, int32_T k, const real_T A[2304],
  int32_T lda, const real_T B[308025], int32_T ib0, real_T C[167055]);

#endif
