#ifndef xgemm_BWkoqSF8_h_
#define xgemm_BWkoqSF8_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_BWkoqSF8(int32_T m, int32_T n, int32_T k, const real_T A[4624],
  int32_T lda, const real_T B[683929], int32_T ib0, real_T C[368015]);

#endif
