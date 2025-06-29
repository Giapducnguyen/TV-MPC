#ifndef xgemm_b8Y5hPDj_h_
#define xgemm_b8Y5hPDj_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_b8Y5hPDj(int32_T m, int32_T n, int32_T k, const real_T A[5625],
  int32_T lda, const real_T B[207936], int32_T ib0, real_T C[110352]);

#endif
