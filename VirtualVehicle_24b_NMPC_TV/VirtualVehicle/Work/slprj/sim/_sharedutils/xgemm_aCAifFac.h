#ifndef xgemm_aCAifFac_h_
#define xgemm_aCAifFac_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_aCAifFac(int32_T m, int32_T n, int32_T k, const real_T A[3025],
  int32_T lda, const real_T B[131769], int32_T ib0, real_T C[70422]);

#endif
