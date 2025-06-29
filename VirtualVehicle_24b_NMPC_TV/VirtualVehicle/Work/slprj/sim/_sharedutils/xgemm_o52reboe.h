#ifndef xgemm_o52reboe_h_
#define xgemm_o52reboe_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_o52reboe(int32_T m, int32_T n, int32_T k, const real_T A[900],
  int32_T lda, const real_T B[84681], int32_T ib0, real_T C[45105]);

#endif
