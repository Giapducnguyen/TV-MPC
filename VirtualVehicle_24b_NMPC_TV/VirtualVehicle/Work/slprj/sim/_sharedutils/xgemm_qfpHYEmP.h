#ifndef xgemm_qfpHYEmP_h_
#define xgemm_qfpHYEmP_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_qfpHYEmP(int32_T m, int32_T n, int32_T k, const real_T A[1681],
  int32_T lda, const real_T B[52900], int32_T ib0, real_T C[30360]);

#endif
