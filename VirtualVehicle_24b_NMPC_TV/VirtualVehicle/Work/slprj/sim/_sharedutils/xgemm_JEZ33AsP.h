#ifndef xgemm_JEZ33AsP_h_
#define xgemm_JEZ33AsP_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_JEZ33AsP(int32_T m, int32_T n, int32_T k, const real_T A[2304],
  int32_T lda, const real_T B[319225], int32_T ib0, real_T C[172325]);

#endif
