#ifndef xgemm_KRwevblH_h_
#define xgemm_KRwevblH_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_KRwevblH(int32_T m, int32_T n, int32_T k, const real_T A[961],
  int32_T lda, const real_T B[103041], int32_T ib0, real_T C[55854]);

#endif
