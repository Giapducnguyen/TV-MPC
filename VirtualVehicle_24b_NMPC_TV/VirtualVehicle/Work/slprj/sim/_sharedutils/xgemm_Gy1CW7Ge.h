#ifndef xgemm_Gy1CW7Ge_h_
#define xgemm_Gy1CW7Ge_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_Gy1CW7Ge(int32_T m, int32_T n, int32_T k, const real_T A[1600],
  int32_T lda, const real_T B[60516], int32_T ib0, real_T C[32226]);

#endif
