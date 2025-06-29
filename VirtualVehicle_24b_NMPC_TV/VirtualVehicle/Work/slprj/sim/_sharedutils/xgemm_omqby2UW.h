#ifndef xgemm_omqby2UW_h_
#define xgemm_omqby2UW_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_omqby2UW(int32_T m, int32_T n, int32_T k, const real_T A[3600],
  int32_T lda, const real_T B[113569], int32_T ib0, real_T C[65041]);

#endif
