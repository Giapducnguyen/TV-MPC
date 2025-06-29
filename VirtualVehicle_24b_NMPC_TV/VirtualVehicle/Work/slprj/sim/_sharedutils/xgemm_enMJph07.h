#ifndef xgemm_enMJph07_h_
#define xgemm_enMJph07_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_enMJph07(int32_T m, int32_T n, int32_T k, const real_T A[729],
  int32_T lda, const real_T B[90601], int32_T ib0, real_T C[48762]);

#endif
