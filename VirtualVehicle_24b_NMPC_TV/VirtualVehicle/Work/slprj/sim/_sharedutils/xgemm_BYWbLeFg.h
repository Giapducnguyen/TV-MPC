#ifndef xgemm_BYWbLeFg_h_
#define xgemm_BYWbLeFg_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_BYWbLeFg(int32_T m, int32_T n, int32_T k, const real_T A[3721],
  int32_T lda, const real_T B[149769], int32_T ib0, real_T C[79722]);

#endif
