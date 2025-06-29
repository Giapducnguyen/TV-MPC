#ifndef xgemm_snRyqtUs_h_
#define xgemm_snRyqtUs_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_snRyqtUs(int32_T m, int32_T n, int32_T k, const real_T A[5929],
  int32_T lda, const real_T B[592900], int32_T ib0, real_T C[314160]);

#endif
