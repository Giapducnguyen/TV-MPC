#ifndef xgemm_mE9hCItM_h_
#define xgemm_mE9hCItM_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_mE9hCItM(int32_T m, int32_T n, int32_T k, const real_T A[3721],
  int32_T lda, const real_T B[147456], int32_T ib0, real_T C[77568]);

#endif
