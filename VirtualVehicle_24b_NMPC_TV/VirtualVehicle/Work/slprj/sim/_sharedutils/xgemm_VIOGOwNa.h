#ifndef xgemm_VIOGOwNa_h_
#define xgemm_VIOGOwNa_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_VIOGOwNa(int32_T m, int32_T n, int32_T k, const real_T A[5625],
  int32_T lda, const real_T B[304704], int32_T ib0, real_T C[160080]);

#endif
