#ifndef xgemm_ojxd8mql_h_
#define xgemm_ojxd8mql_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_ojxd8mql(int32_T m, int32_T n, int32_T k, const real_T A[2209],
  int32_T lda, const real_T B[129600], int32_T ib0, real_T C[71280]);

#endif
