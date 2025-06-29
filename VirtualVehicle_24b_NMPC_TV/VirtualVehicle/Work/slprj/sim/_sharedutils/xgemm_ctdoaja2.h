#ifndef xgemm_ctdoaja2_h_
#define xgemm_ctdoaja2_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_ctdoaja2(int32_T m, int32_T n, int32_T k, const real_T A[2304],
  int32_T lda, const real_T B[328329], int32_T ib0, real_T C[177057]);

#endif
