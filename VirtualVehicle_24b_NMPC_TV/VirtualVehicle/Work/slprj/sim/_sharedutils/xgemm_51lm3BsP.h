#ifndef xgemm_51lm3BsP_h_
#define xgemm_51lm3BsP_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_51lm3BsP(int32_T m, int32_T n, int32_T k, const real_T A[1024],
  int32_T lda, const real_T B[91809], int32_T ib0, real_T C[47571]);

#endif
