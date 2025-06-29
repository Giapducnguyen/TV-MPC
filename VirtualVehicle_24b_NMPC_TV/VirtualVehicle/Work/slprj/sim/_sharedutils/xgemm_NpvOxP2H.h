#ifndef xgemm_NpvOxP2H_h_
#define xgemm_NpvOxP2H_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_NpvOxP2H(int32_T m, int32_T n, int32_T k, const real_T A[2025],
  int32_T lda, const real_T B[130321], int32_T ib0, real_T C[70756]);

#endif
