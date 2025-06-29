#ifndef xgemm_TvUDipmT_h_
#define xgemm_TvUDipmT_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_TvUDipmT(int32_T m, int32_T n, int32_T k, const real_T A[3025],
  int32_T lda, const real_T B[298116], int32_T ib0, real_T C[158340]);

#endif
