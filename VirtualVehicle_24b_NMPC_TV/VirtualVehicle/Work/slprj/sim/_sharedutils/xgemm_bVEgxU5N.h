#ifndef xgemm_bVEgxU5N_h_
#define xgemm_bVEgxU5N_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_bVEgxU5N(int32_T m, int32_T n, int32_T k, const real_T A[5625],
  int32_T lda, const real_T B[238144], int32_T ib0, real_T C[125904]);

#endif
