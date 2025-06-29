#ifndef xgemm_l13NeOT2_h_
#define xgemm_l13NeOT2_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_l13NeOT2(int32_T m, int32_T n, int32_T k, const real_T A[11664],
  int32_T lda, const real_T B[1243225], int32_T ib0, real_T C[670115]);

#endif
