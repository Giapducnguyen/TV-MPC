#ifndef xgemm_GMCd1pXT_h_
#define xgemm_GMCd1pXT_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_GMCd1pXT(int32_T m, int32_T n, int32_T k, const real_T A[3844],
  int32_T lda, const real_T B[616225], int32_T ib0, real_T C[332055]);

#endif
