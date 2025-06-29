#ifndef xgemm_ranuzGyT_h_
#define xgemm_ranuzGyT_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_ranuzGyT(int32_T m, int32_T n, int32_T k, const real_T A[625],
  int32_T lda, const real_T B[68121], int32_T ib0, real_T C[35496]);

#endif
