#ifndef xgemm_3IDXeFG7_h_
#define xgemm_3IDXeFG7_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_3IDXeFG7(int32_T m, int32_T n, int32_T k, const real_T A[1089],
  int32_T lda, const real_T B[93025], int32_T ib0, real_T C[50630]);

#endif
