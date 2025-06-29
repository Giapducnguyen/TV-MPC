#ifndef xgemm_PYZYeccO_h_
#define xgemm_PYZYeccO_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_PYZYeccO(int32_T m, int32_T n, int32_T k, const real_T A[3249],
  int32_T lda, const real_T B[304704], int32_T ib0, real_T C[161184]);

#endif
