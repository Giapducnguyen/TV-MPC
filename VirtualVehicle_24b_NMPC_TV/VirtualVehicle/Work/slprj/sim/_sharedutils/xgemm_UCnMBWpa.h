#ifndef xgemm_UCnMBWpa_h_
#define xgemm_UCnMBWpa_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_UCnMBWpa(int32_T m, int32_T n, int32_T k, const real_T A[784],
  int32_T lda, const real_T B[93025], int32_T ib0, real_T C[50325]);

#endif
